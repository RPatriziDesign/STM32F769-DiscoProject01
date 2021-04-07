#include <gui/model/Model.hpp>
#include <gui/model/ModelListener.hpp>


extern "C" {
	extern void VCP_txMsg(void);
}


Model::Model() : modelListener(0)
{

}

void Model::tick()
{

}

/**
 * @brief 	Enable tx of button related data
 */
void Model::SwBtn_txTrigger()
{
	VCP_txMsg();
}
