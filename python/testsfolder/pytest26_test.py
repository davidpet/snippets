
import pytest

@pytest.mark.full
class TestEverything:
    def test_thing1(self):
        pass
    def test_thing2(self):
        pass
    
@pytest.mark.smoke
class TestSomeThings:
    def test_thing1(self):
        pass
    def test_thing2(self):
        pass
