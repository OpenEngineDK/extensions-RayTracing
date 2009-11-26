#include "Plane.h"

#include <Logging/Logger.h>

namespace OpenEngine {
    namespace Shapes {

        Plane::Plane(Vector<3,float> a, Vector<3,float> b, Vector<3,float> c)
            : Shape(a), p0(a), p1(b), p2(c) {
            normal = (b-a) % (c-a);
            normal.Normalize();
        }
            
        

        Hit Plane::Intersect(Ray ray, Vector<3,float>& point) {
            
            /*
              p*n + d = 0

              t = (-d-la*n) / (ib-ia)*n;
              ib-ia = ray.direction

             */

            Vector<3,float> n = normal;

            float d = -p0*n;
            float disc = ray.direction * n;

            if (disc) {
                float t = (-d -ray.origin*n) / disc;

                point = ray.PointAtT(t);
                
                return (t > 0) ? HIT_OUT : HIT_IN;
            } 

            return HIT_NONE;;

        }
        
        Vector<3,float> Plane::NormalAt(Vector<3,float> point) {
            return normal;
        }
    }
}
