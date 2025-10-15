
import pytest

@pytest.fixture(scope='class')
def my_fruit():
    print('my_fruit requested')
    return 'apple'

class TestMyStuff:
    @pytest.fixture(scope='class')
    def my_basket(self, my_fruit):
        print('my_basket requested')
        return [my_fruit]
    
    @pytest.fixture(scope='class', autouse=True)
    def my_auto(self):
        print('my_auto requested')  # only requested once for the class
    
    def test_1(self, my_fruit, my_basket):
        pass # shared my_fruit with test_2
    
    def test_2(self, my_fruit, my_basket):
        pass  # shared my_fruit with test_1
    
def test_3(my_fruit):
    pass   # separate my_fruit

def test_4(my_fruit):
    pass   # separate my_fruit
