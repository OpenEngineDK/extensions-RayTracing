#include "Shape.h"

namespace OpenEngine {
    namespace Shapes {

        Shape::Shape(Vector<3,float> c) : center(c) {
            mat = MaterialPtr(new Material());
            mat->diffuse = Vector<4,float>(.1,.1,.1,.1);
        }

    }
}
