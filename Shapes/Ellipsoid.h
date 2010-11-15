#ifndef _RT_ELLIPSOID_H_
#define _RT_ELLIPSOID_H_

#include "Sphere.h"

namespace OpenEngine {
namespace Shapes {
    
    class Ellipsoid : public Sphere {
        
        

    public:

        Ellipsoid(Vector<3,float> c, Vector<3,float> r);

        Vector<3,float> ra;

        virtual Hit Intersect(const Ray r, Vector<3,float>& point);
        virtual Vector<3,float> NormalAt(Vector<3,float> point);
        virtual std::string ToString() const {
            std::ostringstream out;
            out << "Ellipsoid";            
            return out.str();
        }

    };

}
}


#endif
