
import pytest

class Person:
    def __init__(self, name, age):
        self.name = name
        self.age = age

@pytest.fixture
def make_person():
    def _make(name='bob',age=30):
        return Person(name, age)
    return _make

def test_person(make_person):
    person = make_person()
    assert person.name == 'bob'
