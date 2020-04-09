#include <iostream>

using namespace std;


//纯虚函数和抽象类

class Base
{
    public:
    //纯虚函数
    //抽象类
    virtual void func()=0;
};

class Son:public Base
{
    public:
    virtual void func()
    {
        cout<<"func函数调用"<<endl;
    };
}; 
void test01()
{
    //Base b;
    //抽象类无法实例化对象
    //Son s;      //子类必须重写父类中的纯虚函数，否则无法实例化
    Base *base=new Son;
    base->func();
    delete base;
    //父类的指针或引用指向子类
}
int main()
{
    test01();
    return 0; 
}