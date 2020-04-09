#include <iostream>
#include <iomanip>

using namespace std;

//

int main()
{
    //设置域宽为10,格式符setw()只对靠近它的输出起作用。
    cout<<setw(10)<<987<<654<<endl;
    cout<<987<<setiosflags(ios::scientific)<<setw(15)<<987.654321<<endl;
    cout<<987<<setw(10)<<hex<<987<<endl;
    cout<<987<<setw(10)<<oct<<987<<endl;
    cout<<987<<setw(10)<<dec<<987<<endl;
    //格式符setprecision()输出时会四舍五入处理。
    cout<<resetiosflags(ios::scientific)<<setprecision(3)<<987.654321<<endl;
    cout<<setiosflags(ios::left)<<setfill('&')<<setw(7)<<987<<endl;
    cout<<setiosflags(ios::right)<<setfill('#')<<setw(7)<<987<<endl;


    
    return 0;
}