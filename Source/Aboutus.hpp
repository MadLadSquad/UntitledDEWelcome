#pragma once
#include <Framework.hpp>

namespace ude_welcome
{
    class UIMGUI_PUBLIC_API Aboutus : public UImGui::InlineComponent
    {
    public:
        Aboutus();
        virtual void begin() override;
        virtual void tick(float deltaTime) override;
        virtual void end() override;
        virtual ~Aboutus() override;
    private:

    };
}

