
def f(x):
    return x**2

def test_sample():
    assert f(2) == 4**2 + 1
    
def test_bad_return():
    return f(2) == 5  # should fail, but doesn't
