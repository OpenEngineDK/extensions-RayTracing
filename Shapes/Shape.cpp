#include "Shape.h"

namespace OpenEngine {
    namespace Shapes {

        Shape::Shape(Vector<3,float> c) : center(c) {
            diffuse = Vector<4,float>(0.1);
        }

    }
}
