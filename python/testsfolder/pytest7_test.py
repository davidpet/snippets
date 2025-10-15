
import pytest

@pytest.fixture
def my_fruit():
    print('my_fruit requested')
    return "apple"

@pytest.fixture
def my_basket(my_fruit):
    print("my_basket requested")
    return ["orange", "banana", my_fruit]

def test_1(my_fruit):
    assert my_fruit == 'apple'
    
def test_2(my_basket):
    assert my_basket[2] == 'apple'
    
def test_3(my_fruit, my_basket):
    assert my_fruit in my_basket
    
def test_4(my_basket, my_fruit):
    assert my_fruit in my_basket
