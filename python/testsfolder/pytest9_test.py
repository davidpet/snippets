
import pytest

@pytest.fixture
def my_fruit():
    print('my_fruit requested')
    return "apple"

@pytest.fixture
def my_fruit2():  # shadowed within the class because of duplicate name
    print('my_fruit2 outside requested')
    return "apple"

class TestMyStuff:
    @pytest.fixture
    def my_fruit2(self):
        print('my_fruit2 inside requested')
        return "apple"

    @pytest.fixture
    def my_basket(self, my_fruit, my_fruit2):
        print("my_basket requested")
        return ["orange", "banana", my_fruit, my_fruit2]

    @pytest.fixture
    @staticmethod
    def stuff_basket(my_basket):
        my_basket.append("watermelon")

    def test_1(self, my_fruit):
        assert my_fruit == 'apple'

    def test_2(self, my_basket):
        assert my_basket[2] == 'apple'

    def test_3(self, my_fruit, my_basket):
        assert my_fruit in my_basket
        
    def test_4(self, my_basket, stuff_basket):
        assert "watermelon" in my_basket
