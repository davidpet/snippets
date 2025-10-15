
count = 0

class TestMyStuff:
    class_count = 0
    
    def test_sample1(self):
        global count
    
        print('count from test_sample1:', count)
        count = count + 1
        
        print('class_count from test_sample1:', self.class_count)
        self.class_count = self.class_count + 1
        
        pass
    
    @staticmethod
    def test_sample2():
        global count
    
        print('count from test_sample2:', count)
        count = count + 1
        
        print('class_count from test_sample2:', TestMyStuff.class_count)
        TestMyStuff.class_count = TestMyStuff.class_count + 1
    
        pass
    
    def test_sample4(self):
        print('class_count from test_sample4:', self.class_count)
        pass
    
    def some_method(self):
        pass # ignored because of method name
    
    def some_test(self): # ignored because of method name
        pass
    
class OtherClass: # ignored because of class name
    def test_something(self):
        pass

class OtherTest: # ignored because of class name
    def test_something(self):
        pass

def test_sample3():
    global count
    
    print('count from test_sample3:', count)
    count = count + 1
    pass
