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
class B:private A
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
    ob.initt(5,7);
    cout<<ob.gett()<<endl;
    return 0;
}