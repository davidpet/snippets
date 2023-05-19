
import unittest
from unittest.mock import patch

from os import path
    
class MyTests(unittest.TestCase):
    def test_dirname(self):
        captured = []
        # Need to use fully qualified name of symbol instead of how you imported it.
        with patch('os.path.dirname', new = lambda file: captured.append(file)):
            path.dirname('some file')
        # This one won't append.
        path.dirname(__file__)
        self.assertListEqual(captured, ['some file'])
