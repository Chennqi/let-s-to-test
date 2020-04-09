#include <iostream>

using namespace std;

//
class Myint
{

    int  m_Num;
    public:
    Myint()
    {
        m_Num=0;
    }
    friend ostream &operator<<(ostream &cout,Myint myint);
};
//重载<<运算符
ostream &operator<<(ostream &cout,Myint myint)
{
    cout<<myint.m_Num;
    return cout;
}

void test01()
{
     Myint myint;
    cout<<myint<<endl;
}
int main()
{
    test01();


    
    return 0;
}