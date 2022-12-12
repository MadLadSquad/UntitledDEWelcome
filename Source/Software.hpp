#pragma once
#include <Framework.hpp>

namespace ude_welcome
{
    class UIMGUI_PUBLIC_API Software : public UImGui::InlineComponent
    {
    public:
        Software();
        virtual void begin() override;
        virtual void tick(float deltaTime) override;
        virtual void end() override;
        virtual ~Software() override;
    private:

    };
}

