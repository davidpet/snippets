
import pytest

@pytest.fixture
def my_fruit():
    print('apple requested')
    return 'apple'

@pytest.fixture
def my_fruit2():
    print('banana requested')
    return 'banana'

@pytest.fixture
def my_fruit3():
    print('orange requested')
    return 'orange'

# normal unmarked test
def test_run():
    pass

# skip test(s)
@pytest.mark.skip(reason='I just do not like this test')
def test_skipped():
    pass

# conditional skip
@pytest.mark.skipif(True, reason='I might not like it')
def test_maybe_skipped():
    pass

# expected failure(s)
@pytest.mark.xfail
def test_fail():
    assert False
    
# implicit (unreferenced) fixtures to request
# this is like (autouse) from the other side in a way
@pytest.mark.usefixtures("my_fruit", "my_fruit2")
def test_usefixtures(my_fruit3):
    pass # all 3 get requested by this point
