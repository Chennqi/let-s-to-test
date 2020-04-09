#include <iostream>

using namespace std;

//

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
    //声明重载函数
    point operator++();
    point operator--(int);
};

point point::operator++()
{
    ++x;
    ++y;
    return *this;
}

point point::operator--(int)
{
    x--;
    y--;
    return *this;
}
int main()
{
    point ob(3,4);
    cout<<"ob.x="<<ob.getx()<<"      ob.y="<<ob.gety()<<endl;
    ++ob;
    cout<<"ob.x="<<ob.getx()<<"      ob.y="<<ob.gety()<<endl;
    ob.operator--(0);
    cout<<"ob.x="<<ob.getx()<<"      ob.y="<<ob.gety()<<endl;


    
    return 0;
}