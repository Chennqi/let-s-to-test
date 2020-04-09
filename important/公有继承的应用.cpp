#include <iostream>
using namespace std;
class A
{
    int s;
    public:
    void inits(int n)
    { 
        s=n;
    }
    int gets()
    {
        return s;
    }
};
class B:public A
{
    int t;
    public:
    void initt(int n)
    {
        t=n;
    }
    int gett()
    {
        return t*gets();
    }
};
int main()
{
    B ob;
    ob.inits(12);
    ob.initt(5);
    cout<<"the result of ob.gett() is: "<<ob.gett()<<endl;
    return 0;
}