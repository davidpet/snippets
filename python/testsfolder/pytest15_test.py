
import pytest

@pytest.fixture(scope='class')
def my_fruit():
    yield 'apple'
    print('cleaning up apple')  # cleaned up twice (end of class and end of outside function)

class TestMyStuff:
    @pytest.fixture(scope='class')
    def my_basket(self, my_fruit):
        yield [my_fruit]
        print('cleaning up basket')  # only cleaned up once (end of class)
        
    def test_1(self, my_basket):
        pass
    
    def test_2(self, my_basket):
        pass
    
def test_3(my_fruit):
    pass
