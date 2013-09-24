#include "singleton.h"

Singleton::Singleton()
{
	this->var = 20;
	std::cout << "Singleton Constructor" << std::endl;
}

Singleton* Singleton::_instance = 0;

Singleton* Singleton::GetInstance()
{
	if (0 == _instance)
		_instance = new Singleton();
	return _instance;
}

// setter & getter
int Singleton::getVar()
{
	return this->var;
}

void Singleton::setVar(int var)
{
	this->var = var;
}

Singleton::~Singleton()
{
	std::cout << "Singleton Destructor" << std::endl;
	if (0 != _instance) {
		_instance = 0;
	}
}
