#include "common.h"
#include "Singleton.h"

Singleton* Singleton::singleton = NULL;

Singleton::Singleton()
{
	cout << "단일체 생성" << endl;
}

Singleton* Singleton::GetInstance()
{
	if (singleton == NULL)
	{
		singleton = new Singleton();
	}
	return singleton;
}