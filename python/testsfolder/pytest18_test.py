
import pytest
import testsfolder.pytest17_lib as thelib
from testsfolder.pytest17_lib import my_fruit

@pytest.fixture
def my_basket(my_fruit):
    return [my_fruit]

def test_import(my_fruit, my_basket):
    assert my_fruit == 'apple'
    assert my_fruit in my_basket
    assert len(my_basket) == 1
