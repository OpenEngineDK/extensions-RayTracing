#include "Shape.h"

namespace OpenEngine {
    namespace Shapes {

        Shape::Shape(Vector<3,float> c) : center(c),
                                          reflection(0.0),
                                          transparent(false),
                                          refraction(1.0)
        {
            mat = MaterialPtr(new Material());
            mat->diffuse = Vector<4,float>(1);
        }

        std::ostream& operator<<(std::ostream& os, const Shape* e) {
            os << e->ToString();
            return os;
        }


    }
}
