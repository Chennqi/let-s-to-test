#include <iostream>

using namespace std;

//单目运算符重载为成员函数

class point
{
    private:
    int x,y;
    
    public:
    point(int xx=0,int yy=0)
    {
        x=xx;
        y=yy;
    }
    int getx()
    {
        return x;
    }
    int gety()
    {
        return y;
    }
    //声明运算符重载为成员函数
    point operator++();
};
//声明函数
point point::operator++()
{
    ++ x;
    ++y;
    return *this;
}

int main()
{
    point ob(3,4);
    cout<<"ob.x"<<ob.getx()<<"      ob.y="<<ob.gety()<<endl;
    ++ob;
    cout<<"ob.x"<<ob.getx()<<"      ob.y="<<ob.gety()<<endl;
    ob.operator++();
    cout<<"ob.x"<<ob.getx()<<"      ob.y="<<ob.gety()<<endl;



    
    return 0;
}