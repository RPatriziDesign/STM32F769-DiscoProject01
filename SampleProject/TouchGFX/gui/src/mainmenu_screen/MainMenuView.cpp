#include <gui/mainmenu_screen/MainMenuView.hpp>

#include "main.h"
#include "cmsis_os.h"
#include "app_touchgfx.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */
#include "../mx25l512/mx25l512.h"
#include "../otm8009a/otm8009a.h"



extern UART_HandleTypeDef * huart1;


MainMenuView::MainMenuView()
{

}

void MainMenuView::setupScreen()
{
    MainMenuViewBase::setupScreen();
}

void MainMenuView::tearDownScreen()
{
    MainMenuViewBase::tearDownScreen();
}

void MainMenuView::setUserBtn(int flag)
{
	if (flag)
	{
		Resource2.setAlpha(125);
	}
	else
	{
		Resource2.setAlpha(255);
	}
	Resource2.invalidate();
}

void Res1Click()
{
//	uint8_t msg[]="\nButton Pressed";
	// Override and implement this function in MainMenu
	//HAL_StatusTypeDef HAL_UART_Transmit(UART_HandleTypeDef *huart, uint8_t *pData, uint16_t Size, uint32_t Timeout)
//	HAL_UART_Transmit(huart1, msg, 16, 50);
}

// each button has same behavior different data, so implement just one function
// and pass right data
void MainMenuView::Res2Click()
{
    presenter->TxButton();
}
