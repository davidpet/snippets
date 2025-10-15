
import pytest

@pytest.fixture
def my_fruit(request):
    return request.node.get_closest_marker('my_marker').args[0]

@pytest.mark.my_marker('apple')
def test_marker(my_fruit):
    assert my_fruit == 'apple'

@pytest.mark.my_marker('banana')
def test_marker_2(my_fruit):
    assert my_fruit == 'banana'
