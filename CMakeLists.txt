
# Create the extension library
ADD_LIBRARY(Extensions_RayTracing
  Scene/ShapeNode.h
  Scene/ShapeNode.cpp

  Shapes/Shape.h
  Shapes/Shape.cpp

  Shapes/Plane.h
  Shapes/Plane.cpp

  Shapes/Sphere.h
  Shapes/Sphere.cpp

  Shapes/Ray.h
  Shapes/Ray.cpp
)
