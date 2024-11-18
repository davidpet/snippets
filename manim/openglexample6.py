from manim import *

class CreateMobjectScene(Scene):
    def construct(self):
        day_texture = "earth_day.jpg"
        night_texture = "earth_night.jpg"
        sphere = opengl.OpenGLSurface(  # for some reason, Sphere does not inherit from OpenGLSurface
            lambda u,v: [3*np.sin(u)*np.cos(v), 3*np.sin(u)*np.sin(v), 3*np.cos(u)],
            u_range=[0,PI],
            v_range=[-PI,PI]
        )
        ts = opengl.OpenGLTexturedSurface(image_file=day_texture, dark_image_file=night_texture, uv_surface=sphere)
        self.add(ts)
