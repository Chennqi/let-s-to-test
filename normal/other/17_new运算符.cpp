#include <iostream>

using namespace std;
int   main()
{
    int *pa;
    pa  =   new int;
    *pa = 100;
    cout<<"*pa= "<<*pa  <<endl;

    int *pb;
    pb=new int[5];
    for (   int i = 1; i < 5; i++)
    {   
        *(pb+i)=i;
    }
    cout<<"*(pb+2)= "<<*(pb+2)<<endl;

    int     (*pc)[3];                //数组指针
    int     j;
    pc=new int[2][3];
    for(    int  i=0;    i<2;    i++)
    {
        for(    j=0;    j<3;    j++)
        *(pc[i]+j)=1;
    }
    cout<<" *(pc[1]+1)="<<*(pc[1]+1)<<endl;



    return 0;
    
}