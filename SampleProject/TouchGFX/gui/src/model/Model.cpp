#include <gui/model/Model.hpp>
#include <gui/model/ModelListener.hpp>
#include "main.h"



extern "C" {
	extern void VCP_txMsg(void);
}


Model::Model() : modelListener(0)
{

}

/*
 * Function called beetween each screen
 *
 *
 */
void Model::tick()
{
	if ( 1 == HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_0)) //(UserBtn_GPIO_Port, UserBtn_Pin ) )
		UserBtn_status = 1;
	else
		UserBtn_status = 0;


	  // \todo Verify that button status has been changed and then notify

	  // Notify the currently active Presenter new button status.
	  // The modelListener pointer points to the currently active Presenter.
	  if (modelListener != 0)
	  {
		  modelListener->UserBtn_changed();
	  }

}

/*
 * Returns current user button status
 *
 * \retval 1	User button presssed
 * \retval 0	User button relased
 */
//int Model::get_UserBtn_status(void)
//{
//	return UserBtn_status;
//}


/**
 * @brief 	Enable tx of button related data
 */
void Model::SwBtn_txTrigger()
{
	VCP_txMsg();
}
