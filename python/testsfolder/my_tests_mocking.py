
import unittest
from unittest.mock import patch

def my_print(val):
    print(val)
    
class MyTests(unittest.TestCase):
    def test_my_print(self):
        printed = []
        with patch('builtins.print', new = lambda *args,**_: printed.append(args[0])):
            my_print(10)
            my_print('hi')
        print('ATTENTION: printed after mocking ended')
        self.assertListEqual(printed, [10, 'hi'])
