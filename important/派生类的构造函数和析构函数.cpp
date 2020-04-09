#include <iostream>
using namespace std;
class base
{
    int i;
    public:
    base(int n)
    {
        cout<<"constructing base class\n";
        i=n;
    }
    ~base()
    {
        cout<<"destructing base class\n";
    }
    void showi()
    {
        cout<<i<<endl;
    }
  
};
class derived:public base
{
    int j;
    base obj;
    public:
    derived(int n):base(n),obj(n)
    {
        cout<<"constructing derived class"<<endl;
        j=n;
    }
    ~derived()
    {
        cout<<"destructing derived class\n";
    }
    void showj()
    {
        cout<<j<<endl;
    }
};
int main()
{
    derived ob(10);
    ob.showi();
    ob.showj();
    return 0;
}