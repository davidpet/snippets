
import pytest

@pytest.fixture
def my_fruit(request):
    print(request.node.get_closest_marker('my_marker'))  # check if the marker is applied on the test
    if request.node.get_closest_marker('my_marker'):
        return 'apple'
    else:
        return 'banana'

@pytest.mark.my_marker   # this is a custom marker we made up here
def test_marker(my_fruit):
    assert my_fruit == 'apple'

def test_marker_missing(my_fruit):
    assert my_fruit == 'banana'  # value of fixture depends on presence of the marker
    
@pytest.mark.my_marker # mark the whole class
class TestApples:
    def test_marker(self, my_fruit):
        assert my_fruit == 'apple'
        
    def test_marker2(self, my_fruit):
        assert my_fruit == 'apple'
