#include "Ellipsoid.h"

#include <Math/Vector.h>
#include <Math/Matrix.h>
#include <Logging/Logger.h>

namespace OpenEngine {
    namespace Shapes {

        using namespace std;


        Ellipsoid::Ellipsoid(Vector<3,float> c, Vector<3,float> r) : Sphere(c,1), ra(r) {}

        Vector<3,float> Ellipsoid::NormalAt(Vector<3,float> y) {
            Vector<3,float> c = center;
            Vector<3,float> yc = y - c;
            
            Vector<3,float> n = yc / yc.GetLength();
            return n;
        }

        Hit Ellipsoid::Intersect(const Ray ray, Vector<3,float>& point) {

            /*
              sphere: ||x - c||^2 = r^2
              line: x = s + td

              v = s - c
             */
            
            Matrix<3,3,float> m(Vector<3,float>(1,0,0) * ra[0],
                                Vector<3,float>(0,1,0) * ra[1],
                                Vector<3,float>(0,0,1) * ra[2]);
            //m.Transpose();
            
            Matrix<3,3,float> m2 = m.GetInverse();
            
            Ray nr;
            nr.origin = m2 * ray.origin;
            nr.direction = m2 * ray.direction;

            //logger.info << "Old: " << ray << logger.end;
            //logger.info << "New: " << nr << logger.end;

            return Sphere::Intersect(nr,point);
    }
}
}
