#ifndef _RT_SHAPE_NODE_H_
#define _RT_SHAPE_NODE_H_

#include <Scene/ISceneNode.h>

#include <Shapes/Shape.h>

namespace OpenEngine {
namespace Scene {

    using namespace Shapes;

    class  ShapeNode : public ISceneNode {
        OE_SCENE_NODE(ShapeNode, ISceneNode)
       
        public:
        
        Shape* shape;
        ShapeNode() {}
        ShapeNode(Shape *s) : shape(s) {}
        
    };
}
}

#endif
