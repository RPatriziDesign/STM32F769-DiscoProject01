#ifndef SETTINGSMENUVIEW_HPP
#define SETTINGSMENUVIEW_HPP

#include <gui_generated/settingsmenu_screen/SettingsMenuViewBase.hpp>
#include <gui/settingsmenu_screen/SettingsMenuPresenter.hpp>

class SettingsMenuView : public SettingsMenuViewBase
{
public:
    SettingsMenuView();
    virtual ~SettingsMenuView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // SETTINGSMENUVIEW_HPP
