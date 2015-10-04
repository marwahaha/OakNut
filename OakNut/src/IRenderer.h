#pragma once
#include "Component.h"
#include "glm/glm.hpp"

namespace onut
{
    class Camera;
    class IWindow;
    class Material;
    class Mesh;

    class IRenderer : public Component
    {
    public:
        virtual ~IRenderer();

        virtual void onCreate() = 0;
        virtual void onDraw() = 0;

        virtual void setCamera(Camera* pCamera) = 0;
        virtual void draw(Mesh* pMesh, Material* pMaterial, const glm::mat4& transform) = 0;

    protected:
        IRenderer();
    };
}
