//分别利用普通技术和多态技术，设计实现两个操作数进行运算的计算器类
#include <iostream>
#include<string.h>
using namespace std;

//普通写法
class Calculator
{
    public:
    int getResult(string oper)
    {
            if (oper=="+")
        return m_Num1+m_Num2;
        else if (oper=="-")
          return m_Num1-m_Num2;
        else if (oper=="*")
          return m_Num1*m_Num2; 
    }
    int m_Num1;
    int m_Num2;
};
void test01()
{
    Calculator c;
    c.m_Num1=10;
    c.m_Num2=10;

    cout<< c.m_Num1<<"+"<<c.m_Num2<<"="<<c.getResult("+")<<endl;
}
//利用多态实现计算器


//实现计算器的基类
class AbstractCalculator
{
        public:
        int m_Num1;
        int m_Num2;

        virtual int getResult()
        {
                return 0;
        }
};
//加法计算器类
class   AddCalculator: public AbstractCalculator
{
        public:

        int getResult()
        {
                return m_Num1+m_Num2;
        }
};
//减法计算器类
class   SubCalculator: public AbstractCalculator
{
        public:

        int getResult()
        {
                return m_Num1-m_Num2;
        }
};
//乘法计算器类
class   MulCalculator: public AbstractCalculator
{
        public:

        int getResult()
        {
                return m_Num1*m_Num2;
        }
};

void test02()
{
        //父类指针或引用指向子类对象

        //加法运算
        AbstractCalculator *abc=new AddCalculator;
        abc->m_Num1=10;
        abc->m_Num2=10;
        cout<<abc->m_Num1<<"+"<<abc->m_Num2<<"="<<abc->getResult()<<endl;
        //销毁内存,数据不在了，但是指针还在
        delete abc;

}

int main()
{
       // test01();
       test02();
       return 0;
}