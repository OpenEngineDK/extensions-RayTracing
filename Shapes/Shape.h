#ifndef _RT_SHAPE_H_
#define _RT_SHAPE_H_


#include <Math/Vector.h>
#include <Geometry/Material.h>

#include "Ray.h"

namespace OpenEngine {
namespace Shapes {

    using namespace Math;
    using namespace Geometry;
    
    class Shape {
        
        

    public:
        Shape(Vector<3,float> c);

        Vector<3,float> center;

        MaterialPtr mat;
        
        virtual bool Intersect(Ray r, Vector<3,float>& point) =0;
        virtual Vector<3,float> NormalAt(Vector<3,float> point) =0;

    };

}
}

#endif
