#include "Shape.h"

namespace OpenEngine {
    namespace Shapes {

        Shape::Shape(Vector<3,float> c) : center(c) {
            mat = MaterialPtr(new Material());
            mat->diffuse = Vector<4,float>(.5,.5,.5,1);
        }

        std::ostream& operator<<(std::ostream& os, const Shape* e) {
            os << e->ToString();
            return os;
        }


    }
}
