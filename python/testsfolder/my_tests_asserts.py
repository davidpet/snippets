
import unittest

class MyTests(unittest.TestCase):
    def test_int(self):
        x = 0
        self.assertEqual(x, 0)
        
    def test_string(self):
        x = 'hi'
        self.assertEqual(x, 'hi')
        
    def test_none(self):
        x = None
        self.assertIsNone(x)
        
    def test_negation(self):
        self.assertIsNotNone(10)
        ## Use of Is is not consistent in the asserts.
        self.assertNotEqual(10, 11)
        
    def test_list(self):
        x = [1, 2, 3]
        self.assertListEqual(x, [1, 2, 3])
        
    def test_dict(self):
        x = {'a': 'hi'}
        self.assertDictEqual(x, {'a': 'hi'})
        
    def test_type(self):
        x = 5
        self.assertIsInstance(x, int)
        
    def test_reference(self):
        x = [1, 2, 3]
        self.assertIs(x, x)
        self.assertIsNot(x, [1, 2, 3])
