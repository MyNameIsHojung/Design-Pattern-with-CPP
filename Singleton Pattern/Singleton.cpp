#include "common.h"
#include "Singleton.h"

Singleton* Singleton::singleton = NULL;

Singleton::Singleton()
{
	cout << "����ü ����" << endl;
}

Singleton* Singleton::GetInstance()
{
	if (singleton == NULL)
	{
		singleton = new Singleton();
	}
	return singleton;
}