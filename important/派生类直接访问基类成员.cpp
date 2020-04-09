#include <iostream>
using namespace std;
class A
{
    friend class   C;
    int x;
    protected:
    int y;
};
class B:A
{
    public:
  /*  int getx()
        {
            return x;
        }
    */
    int gety()
    {
        return y;
    }
    
};
class C:A 
{
    public:
    int getx();
};
int C::getx()
{
    C ob;
    return ob.x;
}
int main()
{
    int i;
    C ob;
    i=ob.getx();
    cout<<i<<endl;
}