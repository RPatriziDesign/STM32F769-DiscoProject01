#ifndef MODEL_HPP
#define MODEL_HPP

class ModelListener;

class Model
{
public:
    Model();

    void bind(ModelListener* listener)
    {
        modelListener = listener;
    }

    void SwBtn_txTrigger(void);

    int get_UserBtn_status(void)
    {
    	return UserBtn_status;
    };

    void tick();
protected:
    ModelListener* modelListener;

private:
    int UserBtn_status = 0;		/// \TODO definire gli stati con define
};

#endif // MODEL_HPP
