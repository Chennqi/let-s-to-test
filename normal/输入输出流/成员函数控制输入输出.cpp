#include <iostream>

using namespace std;

//

int main()
{
    cout<<"x_width="<<cout.width()<<endl;               //设置默认域宽
    cout<<"x_fill="<<cout.fill()<<endl;                             //填充默认字符空格
    cout<<"x_precision="<<cout.precision()<<endl;               //设置默认精度
    cout<<123<<"            "<<123.456789<<endl;
    cout<<"------------------------------------------------"<<endl;


    cout.width(10);             //设置域宽为10
    cout.precision(3);          //设置精度为3
    cout<<123<<"            "<<123.456789<<endl;
    
    cout<<"x_width="<<cout.width()<<endl;               
    cout<<"x_fill="<<cout.fill()<<endl;                            
    cout<<"x_precision="<<cout.precision()<<endl;               
    cout<<"------------------------------------------------"<<endl;

    cout.width(10);             //设置域宽为10
    cout.fill('*');                     //设置填充'*'
    cout<<123<<"            "<<123.456789<<endl;
    
    cout.width(10);             //设置域宽为10
    cout.setf(ios::left);
    cout<<123<<"            "<<123.456789<<endl;

    cout<<"x_width="<<cout.width()<<endl;               //设置默认域宽
    cout<<"x_fill="<<cout.fill()<<endl;                             //填充默认字符空格
    cout<<"x_precision="<<cout.precision()<<endl;               //设置默认精度
    return 0;
}