#ifndef _RT_SHAPE_H_
#define _RT_SHAPE_H_


#include <Math/Vector.h>

#include "Ray.h"

namespace OpenEngine {
namespace Shapes {

    using namespace Math;
    
    class Shape {
        
        

    public:
        Shape(Vector<3,float> c);

        Vector<3,float> center;
        Vector<4,float> diffuse;
        
        virtual bool Intersect(Ray r, Vector<3,float>& point) =0;
        virtual Vector<3,float> NormalAt(Vector<3,float> point) =0;

    };

}
}

#endif
