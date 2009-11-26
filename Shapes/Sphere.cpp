#include "Sphere.h"

#include <Math/Vector.h>

namespace OpenEngine {
    namespace Shapes {

        using namespace std;


        Sphere::Sphere(Vector<3,float> c, float r) : Shape(c), radius(r) {}

        Vector<3,float> Sphere::NormalAt(Vector<3,float> y) {
            Vector<3,float> c = center;
            Vector<3,float> yc = y - c;
            
            Vector<3,float> n = yc / yc.GetLength();
            return n;
        }

        Hit Sphere::Intersect(Ray ray, Vector<3,float>& point) {

            /*
              sphere: ||x - c||^2 = r^2
              line: x = s + td

              v = s - c
             */
            
            Vector<3,float> s = ray.origin;
            Vector<3,float> c = center;
            Vector<3,float> d = ray.direction;
            float r = radius;
            
            Vector<3,float> v = s - c;



            float vd = v * d;

            float disc = vd * vd - (v * v - r * r);
            
            if (disc > 0) {
                float t1 = -vd + sqrt(disc);
                float t2 = -vd - sqrt(disc);

                if (t1 > 0 && t2 > 0) {                    

                    float t = min(t1,t2);                    
                    point = ray.PointAtT(t);

                    return HIT_OUT;

                }

            }

            return HIT_NONE;
        }

    }
}
