import dartpy
import numpy
import time

"""
PACKAGE_NAME = 'herb_description'
PACKAGE_PATH = '/home/parallels/ros-herb/src/herb_description'
URDF_PATH \
    = '/home/parallels/ros-herb/devel/share/herb_description/robots/herb.urdf'
"""

PACKAGE_NAME = 'ada_description'
PACKAGE_PATH = '/home/parallels/ros-ada/src/ada/ada_description'
URDF_PATH = '/home/parallels/ros-ada/src/ada/ada_description/robots/mico.urdf'
OBJECT_PATH = '../urdf/fuze_bottle.urdf'
DOF_NAMES = [ 'j1', 'j2', 'j3', 'j4', 'j5', 'j6' ]

urdf_loader = dartpy.DartLoader()
urdf_loader.add_package_directory(PACKAGE_NAME, PACKAGE_PATH)
robot = urdf_loader.parse_skeleton(URDF_PATH)

#obj = urdf_loader.parse_skeleton(OBJECT_PATH)
#obj_pose = obj.pose
#obj_pose[0, 3] = 0.5
#obj.pose = obj_pose

x = robot.get_dof_by_name('j1')
print 'del robot'
del robot
print 'del x'
del x


"""
world = dartpy.World()
robot = world.get_skeleton_by_name(world.add_skeleton(robot))
obj = world.get_skeleton_by_name(world.add_skeleton(obj))

window = dartpy.SimWindow(1600, 1200, 'ADA')
window.world = world
"""

"""
dofs = [ robot.get_dof_by_name(name) for name in DOF_NAMES ]
weights = numpy.ones(6)
resolutions = numpy.array([ 0.02, 0.02, 0.02, 0.02, 0.02, 0.02 ])
q_start = numpy.array([[ 1.486,  -1.570,  0.000,  2.034,  4.818,  1.934 ]])
q_goal = numpy.array([ 0.43135194, -1.25267446,  0.70220488,  0.2222944 ,
                      -0.92543907, -1.33936598 ])


for waypoint1, waypoint2 in zip(path[:-1], path[1:]):
    for r in numpy.linspace(0., 1., 200):
        values = (1 - r) * waypoint1 + (r) * waypoint2

        for dof, value in zip(dofs, values):
            dof.position = value

        time.sleep(0.02)
"""
