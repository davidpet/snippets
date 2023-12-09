
from flask import Flask, jsonify, request
from flask_sqlalchemy import SQLAlchemy
import os

app = Flask(__name__)

# Configure the SQLAlchemy part
basedir = os.path.abspath(os.path.dirname(__file__))
app.config['SQLALCHEMY_DATABASE_URI'] = 'sqlite:///' + os.path.join(basedir, 'data.sqlite')
app.config['SQLALCHEMY_TRACK_MODIFICATIONS'] = False

db = SQLAlchemy(app)

# Define a model for the Item
class Item(db.Model):
    id = db.Column(db.Integer, primary_key=True)
    data = db.Column(db.String(128))

    def __repr__(self):
        return f'<Item {self.id}>'

# Before creating the database tables, push an application context
with app.app_context():
    db.create_all()

# GET - Retrieve all items
@app.route('/items', methods=['GET'])
def get_items():
    items = Item.query.all()
    return jsonify({'items': [{'id': item.id, 'data': item.data} for item in items]})

# GET - Retrieve a single item by id
@app.route('/items/<int:item_id>', methods=['GET'])
def get_item(item_id):
    item = Item.query.get(item_id)
    if item:
        return jsonify({'id': item.id, 'data': item.data})
    else:
        return jsonify({'message': 'Item not found'}), 404

# POST - Create a new item
@app.route('/items', methods=['POST'])
def create_item():
    data = request.json.get('data')
    item = Item(data=data)
    db.session.add(item)
    db.session.commit()
    return jsonify({'id': item.id, 'data': item.data}), 201

# PUT - Update an existing item
@app.route('/items/<int:item_id>', methods=['PUT'])
def update_item(item_id):
    item = Item.query.get(item_id)
    if item:
        item.data = request.json.get('data')
        db.session.commit()
        return jsonify({'id': item.id, 'data': item.data})
    else:
        return jsonify({'message': 'Item not found'}), 404

# DELETE - Delete an item
@app.route('/items/<int:item_id>', methods=['DELETE'])
def delete_item(item_id):
    item = Item.query.get(item_id)
    if item:
        db.session.delete(item)
        db.session.commit()
        return jsonify({'message': 'Item deleted'})
    else:
        return jsonify({'message': 'Item not found'}), 404

if __name__ == '__main__':
    app.run(debug=True, port=5001)  # Set the port to 5001 (or any port you prefer)
