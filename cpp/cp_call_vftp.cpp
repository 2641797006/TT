#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class zoo
{
public:
	virtual void speak()
	{
		cout << "动物在叫" << endl;
	}
	virtual void eat() = 0;
};

class car :public zoo
{
public:
	void speak()
	{
		cout << "猫在叫" << endl;
	}
};

class dog :public zoo
{
public:
	void speak()
	{
		cout << "狗在叫" << endl;
	}
	void eat()
	{
		cout << "狗在吃屎" << endl;
	}
};

//void test01(zoo& p)
//{
//	p.speak();
//}

//void test011()
//{
//	zoo* p = new dog;
//	p->speak();
//}


void test()
{
	zoo* p = new dog;
	//((返回值（函数指针））（解引用（（每次偏移步长）解引用（每次偏移步长）类指针+偏移步长））（形参）；
//64bit:
	((void(*)())(*((uint64_t*)((char*)*(uint64_t*)p + 8))))();
//32bit:
//	((void(*)())(*((int*)((char*)*(int*)p + 4))))();
}
void test111()
{
	zoo* p = new dog;
	//创建具有一个int形参的使用C++调用惯例无返回值类型指针
	typedef void( *LIANXI)(int);
	((LIANXI)(*((int*)*(int*)p + 1)))(10);
}
int main()
{
	//dog di;
	//test01(di);

	test();
	//test111();


	system("pause");
	return EXIT_SUCCESS;
}
