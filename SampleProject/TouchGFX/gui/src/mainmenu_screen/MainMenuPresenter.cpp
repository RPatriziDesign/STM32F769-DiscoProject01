#include <gui/mainmenu_screen/MainMenuView.hpp>
#include <gui/mainmenu_screen/MainMenuPresenter.hpp>

#include <gui_generated/mainmenu_screen/MainMenuViewBase.hpp>
#include <touchgfx/Color.hpp>
#include "BitmapDatabase.hpp"
#include <texts/TextKeysAndLanguages.hpp>

MainMenuPresenter::MainMenuPresenter(MainMenuView& v)
    : view(v)
{

}

void MainMenuPresenter::activate()
{

}

void MainMenuPresenter::deactivate()
{

}

void MainMenuPresenter::TxButton()
{
	model->SwBtn_txTrigger();
}

/*
 *  Open Main menu for settings
 */
//void MainMenuPresenter::OpenMenu()
//{
//	// Prepared but still not used;
//
//}


void MainMenuPresenter::UserBtn_changed()
{
	static int old_status = 0;
	int  		   status;

	status = model->get_UserBtn_status();

	if (old_status != status)
	{
		old_status = status;

		view.setUserBtn(status);

	}


}
