#ifndef _RT_RAY_H_
#define _RT_RAY_H_

#include <Math/Vector.h>

namespace OpenEngine {
namespace Shapes {

    using namespace Math;

    class Ray  {
    public:

        Vector<3,float> origin;
        Vector<3,float> direction;
        
        bool operator!=(const Ray& r) {
            return (origin != r.origin) && (direction != r.direction);
        }

        Vector<3,float> PointAtT(float t) {
            return origin + t*direction;
        }

        std::string ToString() const {
            std::ostringstream out;

            out << origin.ToString() << "\t" 
                << direction.ToString();
            

            return out.str();
        }


    };


    std::ostream& operator<<(std::ostream& os, const Ray e);

}
}


#endif
