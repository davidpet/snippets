
import pytest

class TestMyStuff:
    @pytest.fixture(scope='function', autouse=True)
    def setup(self):
        print('setup called')
        yield
        print('teardown called')
        
    def test_1(self):
        pass
    
    def test_2(self):
        pass
