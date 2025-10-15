
import pytest

pytestmark = pytest.mark.my_marker('apple')

@pytest.fixture
def my_fruit(request):
    return request.node.get_closest_marker('my_marker').args[0]

def test_marker(my_fruit):
    assert my_fruit == 'apple'

def test_marker_2(my_fruit):
    assert my_fruit == 'apple'
