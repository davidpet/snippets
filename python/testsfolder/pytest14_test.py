
import pytest

class Test3Fruits:
    @pytest.fixture(scope='class')
    def my_fruit(self):
        return 'apple'
    
    @pytest.fixture(scope='class')
    def my_basket(self, my_fruit):
        return [my_fruit]
    
    @pytest.fixture(scope='class', autouse=True)
    def stuff_basket(self, my_fruit, my_basket):
        my_basket.append(my_fruit)
        my_basket.append(my_fruit)
    
    def test_length(self, my_basket):
        assert len(my_basket) == 3
        
    def test_membership(self, my_fruit, my_basket):
        assert my_fruit in my_basket
