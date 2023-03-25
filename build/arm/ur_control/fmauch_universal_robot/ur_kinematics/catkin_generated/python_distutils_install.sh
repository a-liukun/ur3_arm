#!/bin/sh

if [ -n "$DESTDIR" ] ; then
    case $DESTDIR in
        /*) # ok
            ;;
        *)
            /bin/echo "DESTDIR argument must be absolute... "
            /bin/echo "otherwise python's distutils will bork things."
            exit 1
    esac
fi

echo_and_run() { echo "+ $@" ; "$@" ; }

echo_and_run cd "/home/lk/arm/ur3_ws/src/arm/ur_control/fmauch_universal_robot/ur_kinematics"

# ensure that Python install destination exists
echo_and_run mkdir -p "$DESTDIR/home/lk/arm/ur3_ws/install/lib/python3/dist-packages"

# Note that PYTHONPATH is pulled from the environment to support installing
# into one location when some dependencies were installed in another
# location, #123.
echo_and_run /usr/bin/env \
    PYTHONPATH="/home/lk/arm/ur3_ws/install/lib/python3/dist-packages:/home/lk/arm/ur3_ws/build/lib/python3/dist-packages:$PYTHONPATH" \
    CATKIN_BINARY_DIR="/home/lk/arm/ur3_ws/build" \
    "/usr/bin/python3" \
    "/home/lk/arm/ur3_ws/src/arm/ur_control/fmauch_universal_robot/ur_kinematics/setup.py" \
     \
    build --build-base "/home/lk/arm/ur3_ws/build/arm/ur_control/fmauch_universal_robot/ur_kinematics" \
    install \
    --root="${DESTDIR-/}" \
    --install-layout=deb --prefix="/home/lk/arm/ur3_ws/install" --install-scripts="/home/lk/arm/ur3_ws/install/bin"
