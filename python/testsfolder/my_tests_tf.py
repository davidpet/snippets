
import tensorflow as tf

class MyTests(tf.test.TestCase):
    def test_tensor(self):
        x = tf.constant([[1, 2, 3], [4, 5, 6]])
        # This is a case where you have to do Yoda conditions.
        self.assertAllEqual([[1, 2, 3], [4, 5, 6]], x)
