
from flask import Flask, jsonify, request

app = Flask(__name__)

# In-memory database
items = {0: {'a': 1, 'b': 2}}  # 1 default entry for testing

# GET - Retrieve all items
@app.route('/items', methods=['GET'])
def get_items():
    return jsonify(items)

# GET - Retrieve a single item by id in URL
@app.route('/items/<int:item_id>', methods=['GET'])
def get_item(item_id):
    if item_id in items:
        return jsonify(items[item_id])
    else:
        return jsonify({'message': 'Item not found'}), 404

# POST - Create a new item
# takes body and assigns new ID
# returns both ID and body
@app.route('/items', methods=['POST'])
def create_item():
    data = request.json
    new_id = max(items.keys(), default=0) + 1
    items[new_id] = data
    return jsonify({'id': new_id, 'data': data}), 201

# PUT - Update an existing item
# updates body request for item ID in url
# returns both back
@app.route('/items/<int:item_id>', methods=['PUT'])
def update_item(item_id):
    if item_id in items:
        data = request.json
        items[item_id] = data
        return jsonify({'id': item_id, 'data': data})
    else:
        return jsonify({'message': 'Item not found'}), 404

# DELETE - Delete an item
# deletes item given by ID in URL
# returns message indicating success or failure
@app.route('/items/<int:item_id>', methods=['DELETE'])
def delete_item(item_id):
    if item_id in items:
        del items[item_id]
        return jsonify({'message': 'Item deleted'})
    else:
        return jsonify({'message': 'Item not found'}), 404

if __name__ == '__main__':
    app.run(debug=True)  # specify port= here if you want to change it
