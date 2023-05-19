
import unittest
from unittest.mock import patch

# Assume this is in some API somewhere.
class SomeExpensiveApi:
    def __init__(self):
        self.x = 10
    def f(self):
        return self.x
    
def get_expensive_thing():
    return SomeExpensiveApi()

# Assume this is our own class we want to test.
class MyClass:
    def g(self):
        expensive = get_expensive_thing()
        return expensive.f()
    
class MyTests(unittest.TestCase):
    class MyFake:
        def __init__(self, val):
            self.val = val
        def f(self):
            return self.val
        
    def test_g(self):
        with patch(__name__ + '.get_expensive_thing', new = lambda: MyTests.MyFake(20)):
            m = MyClass()
            self.assertEqual(m.g(), 20)
