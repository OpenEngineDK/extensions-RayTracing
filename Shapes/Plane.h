#ifndef _RT_PLANE_H_
#define _RT_PLANE_H_

#include "Shape.h"

namespace OpenEngine {
namespace Shapes {
    
    class Plane : public Shape {
        
        
        Vector<3,float> p0;
        Vector<3,float> p1;
        Vector<3,float> p2;
        
        Vector<3,float> normal;
    public:

        Plane(Vector<3,float> a, Vector<3,float> b, Vector<3,float> c);




        virtual Hit Intersect(const Ray r, Vector<3,float>& point);
        virtual Vector<3,float> NormalAt(Vector<3,float> point);
        virtual std::string ToString() const {
            std::ostringstream out;
            out << "Plane";            
            return out.str();
        }

    };

}
}


#endif
