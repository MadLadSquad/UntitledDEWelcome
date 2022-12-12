#pragma once
#include <Framework.hpp>

namespace ude_welcome
{
    class UIMGUI_PUBLIC_API Welcome : public UImGui::InlineComponent
    {
    public:
        Welcome();
        virtual void begin() override;
        virtual void tick(float deltaTime) override;
        virtual void end() override;
        virtual ~Welcome() override;
    private:

    };
}

