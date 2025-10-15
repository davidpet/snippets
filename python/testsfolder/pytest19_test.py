
import pytest

@pytest.fixture
def my_fruit(request):  # we didn't import 'request' - pytest just knows what it is
    print('requested apple')
    print(request.node)   # test_request or TestMyStuff.test_request_in_class
    print(request.node.cls)  # None or TestMyStuff
    return "apple"

def test_request(request, my_fruit):
    print(request.node)  # test_request (will match in fixture)
    assert my_fruit == 'apple'
    
class TestMyStuff:
    def test_request_in_class(self, my_fruit, request):
        print(request.node) # TestMyStuff.test_request_in_class (will match in fixture)
