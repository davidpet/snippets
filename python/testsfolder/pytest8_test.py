
import pytest

@pytest.fixture
def my_fruit():
    return "apple"

@pytest.fixture
def my_basket(my_fruit):
    return ["orange", "banana", my_fruit]

@pytest.fixture
def stuff_basket(my_basket):
    my_basket.append("watermelon")  # didn't bother to return (None) because not going to read it

def test_1(my_basket):
    assert "watermelon" not in my_basket
    
def test_2(my_basket, stuff_basket):
    assert "watermelon" in my_basket # mutated by the fixture
    
def test_3(my_basket):
    assert "watermelon" not in my_basket  # no longer mutated because scope reset
