
import unittest
from unittest.mock import patch

from os import path
    
class MyTests(unittest.TestCase):
    def test_dirname(self):
        with patch('os.path.dirname') as mock_dirname:
            mock_dirname.return_value = 'hi there'
            self.assertEqual(path.dirname('anything'), 'hi there')
