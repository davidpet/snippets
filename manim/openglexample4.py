from manim import *

class CreateMobjectScene(Scene):
    def construct(self):
        m = opengl.OpenGLMobject()
        v = opengl.OpenGLVMobject()
        v.set_points_as_corners([[1, 1, 0], [2, 2, 0]])
        #s = opengl.OpenGLSurface(lambda x: x)
        
        self.add(m)
        self.add(v)
        #self.add(s)
