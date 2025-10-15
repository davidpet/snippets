
import sys

def test_printing():
    print('hi')
    print('bye', file=sys.stderr)
    
def test_printing_fail():
    print('hi')
    print('bye', file=sys.stderr)
    assert False
