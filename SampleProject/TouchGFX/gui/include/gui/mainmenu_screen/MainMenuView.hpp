#ifndef MAINMENUVIEW_HPP
#define MAINMENUVIEW_HPP

#include <gui_generated/mainmenu_screen/MainMenuViewBase.hpp>
#include <gui/mainmenu_screen/MainMenuPresenter.hpp>

class MainMenuView : public MainMenuViewBase
{
public:
    MainMenuView();
    virtual ~MainMenuView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();

    // Events from presenter
    virtual void setUserBtn(int flag);

//    // Prova RP pressione del tasto:
//    virtual void Res1Click()
//	{
//    	touchgfx_printf("\n Tasto Premuto";)
//    }

    // Res2Click Function Override, implement in <pagename>View.cpp
    void Res2Click();

protected:
};

#endif // MAINMENUVIEW_HPP
