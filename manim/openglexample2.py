from manim import *

class CreateCircleInteractive(Scene):
    def construct(self):
        circle = Circle()  # create a circle
        circle.set_fill(PINK, opacity=0.5)  # set the color and transparency
        self.play(Create(circle))  # show the circle on screen
        self.interactive_embed()
        self.play(FadeOut(circle))
