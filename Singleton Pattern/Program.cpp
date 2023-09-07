#include "common.h"
#include "Singleton.h"
int main()
{
	Singleton* instance1 = Singleton::GetInstance();
	Singleton* instance2 = Singleton::GetInstance();

	return 0;
}