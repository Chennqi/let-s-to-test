#include <iostream>

using namespace std;

//双目重载为友元函数
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
    //声明运算符重载为友元函数
    friend point operator+(point p,point q);
};

    //定义
point operator+(point p,point q)
{
        point temp;
        temp.x=p.x+q.x;
        temp.y=p.y+q.y;

        return temp;

}



int main()
{
    point ob1(1,2),ob2(3,4),ob3,ob4;

     ob3=ob1+ob2;
    //显式调用
    ob4=operator+(ob1,ob2);

    cout<<"ob3.x="<<ob3.getx()<<"   ob3.y="<<ob3.gety()<<endl;
    cout<<"ob4.x="<<ob4.getx()<<"   ob4.y="<<ob4.gety()<<endl;   


    
    return 0;
}