#include <iostream>


using namespace std;

//
template<typename   T>
const   T   &Min(const  T   &t1,const   T   &t2)
{
    return  t1>t2?t2:t1;
}

template<typename   T>
const   T   &Max(const  T   &t1,const  T   &t2)
{
    return  t1<t2?t2:t1;
}

int main()
{
    int a,b;
    int mn,mx;
    cout<<"Please input 2 numbers:"<<endl;
    cin>>a>>b;
    mn=Min(a,b);
    mx=Max(a,b);
    cout<<"The min is :"<<mn<<endl;
    cout<<"The max is :"<<mx<<endl;



    
    return 0;
}