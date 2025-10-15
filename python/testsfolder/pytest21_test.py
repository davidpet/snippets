
import pytest

@pytest.fixture
def my_fruit(request):
    print('///new request///')
    print('cls:', request.node.cls)
    print('function:', request.node.function)
    print('name:', request.node.name)
    print('parent name:', request.node.parent.name)
    print('path:', request.node.path)
    print('nodeid:', request.node.nodeid)
    return "apple"

def test_request(request, my_fruit):
    assert my_fruit == 'apple'
    
class TestMyStuff:
    def test_request_in_class(self, my_fruit, request):
        pass
