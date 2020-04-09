#include <iostream>
#include <iomanip>

using namespace std;

//
ostream &output1(ostream &out)
{
    cout.setf(ios::left);
    cout<<setw(10)<<dec<<setfill('*');



    return  out;
}

int main()
{
    cout<<345<<endl;
    cout<<output1<<345<<endl;



    
    return 0;
}