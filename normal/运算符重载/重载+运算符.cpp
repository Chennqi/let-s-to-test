#include <iostream>

using namespace std;

//重载“+”运算符

class CAdd
{
    public:
    int m_Operand;
    //定义构造函数
    CAdd()
    {
        m_Operand=0;
    }

    //重载构造函数
    CAdd(int value)
    {
        m_Operand=value;
    }
};

//重载“+”运算符，对类CAdd进行操作
CAdd operator+(CAdd a,int b)
{
    CAdd sum;
    sum.m_Operand=a.m_Operand+b;
    return sum;
}


int main()
{
    CAdd a(5),b;
    b=a+8;
    cout<<"the sun is:"<<b.m_Operand<<endl;


    
    return 0;
}