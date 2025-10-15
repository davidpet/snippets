
import pytest

@pytest.mark.parametrize('fruit,count', [('banana', 30), ('apple', 40)])
def test_fruit(fruit, count):
    print(fruit, count)
    
@pytest.mark.parametrize('fruit', ['banana', 'apple'])
def test_fruit2(fruit):
    print(fruit)
