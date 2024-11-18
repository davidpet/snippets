from manim import *
import math

class PlanetScene(ThreeDScene):
    def construct(self):
        # the 3blue1brown example uses urls
        # but it seems the community edition opengl code relies on local paths
        # (these are downloaded from the Wikimedia url)
        day_texture = "earth_day.jpg"
        night_texture = "earth_night.jpg"
        
        # This is based on the source for manim.Sphere.
        # For some reason, Sphere isn't a subclass of OpenGLSurface when you
        # render with OpenGL, so we have to do it ourselves.
        sphere = opengl.OpenGLSurface(
            # these are the equations for the (x, y, z) of a surface of a sphere based on long & lat
            lambda u,v: [3.0 * np.cos(u)*np.sin(v), 3.0 * np.sin(u)*np.sin(v), -3.0 * np.cos(v)],
            # u will range from 0 to 2*PI and will represent the longitude in an image
            u_range=(0,2.0*PI),
            # v wlil range from 0 to PI and will represent the latitude in an image
            v_range=(0,PI),
            # u and v subdivisions (total)
            resolution=(101,51),
        )
        
        # day and night images will be blended based on light source hitting
        earth = opengl.OpenGLTexturedSurface(image_file=day_texture, 
                                          dark_image_file=night_texture, 
                                          uv_surface=sphere)
        self.add(earth)
        
        # positioning and framing
        earth.shift(IN)
        
        # pause before creating mesh
        self.wait(3) #1-3
        
        # add a surface mesh (not sure why looks wrong at the moment)
        mesh = opengl.OpenGLSurfaceMesh(earth, normal_nudge=0)
        mesh.set_stroke(BLUE, 1, opacity=0.5)
        earth.add(mesh)
        self.wait(3) #4-6
        
        # re-position the camera (animated)
        self.move_camera(theta=math.radians(-30), phi=math.radians(70), run_time=3) #7-9
        
        # Rotate the Earth (and mesh)
        self.play(Rotate(earth, PI/2), run_time=3) #10-12
        
        # Moving the light
        light = self.camera.light_source
        print("Light:", light.get_x(), light.get_y(), light.get_z(), light.get_bounding_box(), light.get_color())
        light.save_state()
        self.play(light.animate.move_to(3 * IN), run_time=3) #13-15
        self.play(light.animate.shift(10 * OUT), run_time=3) #16-19
        self.play(Restore(light), run_time=3) #20-22
