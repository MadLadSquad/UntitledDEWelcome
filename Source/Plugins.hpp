#pragma once
#include <Framework.hpp>

namespace ude_welcome
{
    class UIMGUI_PUBLIC_API Plugins : public UImGui::InlineComponent
    {
    public:
        Plugins();
        virtual void begin() override;
        virtual void tick(float deltaTime) override;
        virtual void end() override;
        virtual ~Plugins() override;
    private:

    };
}

