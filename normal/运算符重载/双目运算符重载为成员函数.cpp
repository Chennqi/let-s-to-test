#include <iostream>

using namespace std;

//双目运算符重载为成员函数
class point
{
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
    point operator+(point p);
};
//定义重载函数
point point ::operator+(point p)
{
    point temp;
    temp.x=x+p.x;
    temp.y=y+p.y;
    return temp;
}

int main()
{
    point ob1(1,2),ob2(3,4),ob3,ob4;
  
    //隐式调用
    ob3=ob1+ob2;
    //显示调用
    ob4=ob1.operator+(ob2);


  
    cout<<"ob3.x="<<ob3.getx()<<"   ob3.y="<<ob3.gety()<<endl;
    cout<<"ob4.x="<<ob4.getx()<<"   ob4.y="<<ob4.gety()<<endl;


    
    return 0;
}