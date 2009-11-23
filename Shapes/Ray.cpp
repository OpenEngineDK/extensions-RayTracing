#include "Ray.h"

namespace OpenEngine {
    namespace Shapes {

        std::ostream& operator<<(std::ostream& os, const Ray e) {
            os << e.ToString();
            return os;
        }

    }
}
