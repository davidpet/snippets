
import pytest

@pytest.fixture(autouse=True)
def my_fruit():
    print('my_fruit requested')
    return 'apple'

@pytest.fixture(autouse=True)
def my_fruit2():
    print('my_fruit2 requested')
    return 'banana'

class TestMyStuff:
    @pytest.fixture(autouse=True)
    def my_basket(self, my_fruit):
        print('my_basket requested')
        return [my_fruit]
    
    #fruit and basket requested 3 times total even though not explicitly used here
    def test_autouse(self):
        pass
    
    def test_autouse2(self):
        pass
    
    def test_autouse3(self, my_fruit2, my_basket, my_fruit):
        pass
    
# only fruit requested
def test_autouser4():
    pass
