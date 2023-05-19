
import unittest

# Pretend this was imported from an API we will test.
class Transmitter:
    def transmit_x(self, fn):
        fn(10)
        
class MyTests(unittest.TestCase):
    def __init__(self, methodName='runTest'):
        super().__init__(methodName)
        
        # Instance variable
        self.captured_x = None
        
    # Helper method
    def capture_x(self, x):
        self.captured_x = x
        
    def test_1(self):
        transmitter = Transmitter()
        
        transmitter.transmit_x(self.capture_x)
        
        self.assertEqual(self.captured_x, 10)
        
    # If they ran in the same instance, this would fail.
    def test_2(self):
        self.assertIsNone(self.captured_x)
