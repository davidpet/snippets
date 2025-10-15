
import pytest

@pytest.fixture(autouse=True)
def my_fruit():
    return 'apple'

@pytest.fixture(autouse=True)
def my_fruit2():
    return 'banana'

@pytest.fixture(autouse=True)
def my_basket():
    return []

class TestEmptyBasket:
    def test_length(self, my_basket):
        assert len(my_basket) == 0
        
class TestSingleItemBasket:
    @pytest.fixture(autouse=True)
    def add_fruit_to_basket(self, my_basket, my_fruit):
        my_basket.append(my_fruit)
        
    def test_length(self, my_basket):
        assert len(my_basket) == 1
        
    def test_membership(self, my_basket, my_fruit):
        assert my_fruit in my_basket
