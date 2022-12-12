#pragma once
#include <Framework.hpp>
#include <Welcome.hpp>

namespace ude_welcome
{
    class UIMGUI_PUBLIC_API Instance : public UImGui::Instance
    {
    public:
        Instance();
        virtual void begin() override;
        virtual void tick(float deltaTime) override;
        virtual void end() override;
        virtual ~Instance() override;

        virtual void onEventConfigureStyle(ImGuiStyle& style, ImGuiIO& io) override;

        void next() noexcept;
    private:
        Welcome welcome;

        UImGui::InlineComponent* components = { &welcome };


        size_t page = 0;
    };
}

