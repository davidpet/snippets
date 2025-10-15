
import pytest

def f():
    raise ZeroDivisionError()
    
def g():
    return None
    
def test_exceptions_pass():
    with pytest.raises(ZeroDivisionError):
        f()

def test_exceptions_fail():
    with pytest.raises(ZeroDivisionError):
        g()
        
def test_exceptions_capture():
    with pytest.raises(ZeroDivisionError) as exc:
        f()
    print('Captuerd exception:', exc) # this won't actually print - just here for demonstration
