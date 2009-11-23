#ifndef _RT_SHPERE_H_
#define _RT_SHPERE_H_

#include "Shape.h"

namespace OpenEngine {
namespace Shapes {
    
    class Sphere : public Shape {
        
        

    public:

        Sphere(Vector<3,float> c, float r);

        float radius;

        virtual bool Intersect(Ray r, Vector<3,float>& point);
        virtual Vector<3,float> NormalAt(Vector<3,float> point);

    };

}
}


#endif
