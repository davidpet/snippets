
import pytest

@pytest.fixture
def my_fruit(request):
    print('/////NEW REQUEST////')
    print(request.node.nodeid)
    print(request.node.own_markers)  # only markers on the test function/method itself
    print(list(request.node.iter_markers())) # iteration - inheritence included
    print(list(request.node.iter_markers(name='my_class_marker'))) # filter by name
    print(request.node.get_closest_marker('my_class_marker')) # bottom-up search for name
    request.node.add_marker('something')  # adding marker within a fixture/test programatically
    return 'apple'

@pytest.mark.my_function_marker
def test_markers(my_fruit):
    pass

@pytest.mark.my_class_marker
class TestMyStuff:
    def test_markers(self, my_fruit):
        pass
    def test_markers_2(self, my_fruit):
        pass
