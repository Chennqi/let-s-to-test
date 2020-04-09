#include <iostream>
#include <stdlib.h>

using namespace std;

//下标运算付"[ ]"的重载

class ainteger
{
private:
    int *a;
    int sz;
public:
    ainteger(int size)
     {
         sz=size;
         a= new int[size];       
     }

     //运算符重载
     int &operator[](int i)
     {
          //判断数组下标是否越界
         if(i<0||i>sz)             
         {
             cout<<"error"<<endl;
             exit(i);
         }

         return a[i];
     }
    ~ainteger()
     {
         delete[] a;
     }
};





int main()
{
    ainteger a(5);                  //size ==5;      a是个a[5;]
    a[3]=0;
    cout<<"a[3]=    "<<a[3]<<endl;
    a.operator[](3)=0;
    cout<<" a.operator[](3)="<<a[3]<<endl;
    cout<<"a[6]=";
    a.operator[](6)=6;

    
    return 0;
}