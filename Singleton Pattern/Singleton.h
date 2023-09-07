#pragma once
class Singleton
{
private:
	static Singleton *singleton;

private:
	Singleton();

public:
	static Singleton* GetInstance();

};

