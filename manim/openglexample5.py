from manim import *

class CreateMobjectScene(Scene):
    def construct(self):
        self.add(VGroup(Square(), Circle(), Sphere()))
        
        print(Square.__bases__[0].__bases__[0].__bases__[0].__bases__[0])  # OpenGLVMobject
