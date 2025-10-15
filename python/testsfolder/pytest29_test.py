
import pytest

def test_something():
    print('hi')
    pass

@pytest.mark.smoke
def test_something_else():
    pass

class TestMyStuff:
    def test_something(self):
        pass
    
    def test_something_else(self):
        pass
