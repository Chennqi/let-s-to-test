#include <iostream>
#include <stack>

using namespace std;

//

int main(   int argc,char   *argv[])
{
    const   int ia_size =   10;
    int ia[ia_size]={0,1,2,3,4,5,6,7,8,9};
    int ix=0;
    stack<int>  intStack;

    for(    int ix=0;   ix<ia_size; ++ix)
    {
        intStack.push(ia[ix]);
    }

    if( intStack.size()!=   ia_size)
    {
        cout<<"error!"<<endl;
        return -1;
    }

    int value;
    while(!intStack.empty())
    {
        value   =   intStack.top();
        cout<<"value:"<<"   "<<value;
        intStack.pop();
        cout<<endl;
    }

    
    return 0;
}