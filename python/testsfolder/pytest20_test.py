
import pytest

@pytest.fixture(params=['apple', 'banana'])
def my_fruit(request):
    print(request.node)
    requested_fruit = request.param
    if requested_fruit == 'apple':
        return 'apple'
    elif requested_fruit == 'banana':
        return 'banana'
    else:
        raise ValueError

def test_fruit(my_fruit):
    assert my_fruit == 'apple'
