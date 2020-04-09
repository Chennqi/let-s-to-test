#include  <iostream>
using namespace std;
class base1
{
    int x1;
    public:
    base1(int y1)
    {
        x1=y1;
        cout<<"constructing base1,x1="<<x1<<endl;
    }
    ~base1()
    {
        cout<<"destructing base1"<<endl;
    }
};
class base2
{
    int x2;
    public:
    base2(int y2)
    {
        x2=y2;
        cout<<"constructing base2,x2="<<x2<<endl;
    }
    ~base2()
    {
         cout<<"destructing base2"<<endl;
    }
};
class base3
{
    int x3;
    public:
    base3()
    {
        cout<<"constructing base3,x3="<<x3<<endl;
    }
    ~base3()
    {
         cout<<"destructing base3"<<endl;
    }
};
class derived:public base2,public base1,public base3
{
    base1 ob1;
    base2 ob2;
    base3 ob3;
    public:
    derived(int x,int y,int z,int v):base1(x),base2(y),ob1(z),ob2(v)
    {
        cout<<"construvting derived"<<endl;
    }
};
int main()
{
    derived ob(1,2,3,4);
}
