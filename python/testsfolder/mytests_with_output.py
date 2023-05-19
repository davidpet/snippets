
import unittest

class MyTests(unittest.TestCase):
    def test_something(self):
        x = 0
        
        print(f'ATTENTION: Value of x before test is {x}')
        self.assertEqual(1, 1)
