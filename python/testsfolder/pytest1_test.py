
def test_sample():
    assert 0 == 0
    assert 1 == 0, 'this is my failure message'
    assert 0 == 0, "this won't run"
    
def test_sample_passes():
    assert 0 == 0
    
def test_nothing():
    pass
