from manim import *

class CreateMobjectScene(Scene):
    def construct(self):
        day_texture = "earth_day.jpg"
        night_texture = "earth_night.jpg"
        sphere = opengl.OpenGLSurface(  # for some reason, Sphere does not inherit from OpenGLSurface
            lambda u,v: [3.0 * np.cos(u)*np.sin(v), 3.0 * np.sin(u)*np.sin(v), -3.0 * np.cos(v)],
            u_range=(0,2.0*PI),
            v_range=(0,PI),
            resolution=(101,51),
        )
        ts = opengl.OpenGLTexturedSurface(image_file=day_texture, 
                                          dark_image_file=night_texture, 
                                          uv_surface=sphere)
        self.add(ts)
