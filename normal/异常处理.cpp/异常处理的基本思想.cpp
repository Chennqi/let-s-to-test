#include <iostream>
#include <stdio.h>

using namespace std;

//
double  fuc(double  x,double    y)
{
    if(y==0)
    {
        cout<<"error    of  dividing    zero.\n";
        //exit()-->退出程序，exit(0正常退出程序,    exit(1)异常退出程序
        exit(1);
    }
    return  x/y;
}

int main()
{
    double  res;
    res=fuc(2,3);
    cout<<"The result of x/y is:"<<res<<endl;
    res=fuc(4,0);
    cout<<"The result of x/y is:"<<res<<endl;


    
    return 0;
}