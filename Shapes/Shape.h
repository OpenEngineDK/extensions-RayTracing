#ifndef _RT_SHAPE_H_
#define _RT_SHAPE_H_


#include <Math/Vector.h>
#include <Geometry/Material.h>

#include "Ray.h"

namespace OpenEngine {
namespace Shapes {

    using namespace Math;
    using namespace Geometry;

    enum Hit {
        HIT_NONE,
        HIT_OUT,
        HIT_IN
    };

    
    class Shape {


    public:
        Shape(Vector<3,float> c);

        Vector<3,float> center;

        MaterialPtr mat;
        float reflection;
        bool transparent;
        float refraction;
        
        virtual Hit Intersect(const Ray r, Vector<3,float>& point) =0;
        virtual Vector<3,float> NormalAt(Vector<3,float> point) =0;
        virtual std::string ToString() const {
            std::ostringstream out;
            out << "Shape";            
            return out.str();
        }


    };


    std::ostream& operator<<(std::ostream& os, const Shape* e);

}
}

#endif
