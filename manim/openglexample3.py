from manim import *

class CreateMobjectScene(Scene):
    def construct(self):
        m = Mobject()
        v = VMobject()
        v.set_points_as_corner([[1, 1, 0], [2, 2, 0]])
        s = Surface(lambda x: x)
        
        self.add(m)
        self.add(v)
        self.add(s)
