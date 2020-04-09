#include <iostream>

using namespace std;

//运算符重载 转换运算符

class Test
{
private:
    
public:

    int a;

    Test(int a=0)
     {
         cout<<this<<"  :载入构造函数"<<endl;
         Test::a=a;     
    }
    Test(Test &temp)
    {
        cout<<"载入拷贝构造函数"<<endl;
        Test::a=temp.a;     
    }

    ~Test()
     {
            cout<<this<<"  :载入析构函数"<<this->a<<endl;
            cin.get();
     }

     //转换运算符
     operator int()
     {
         cout<<this<<"  :载入转换运算符函数"<<this->a<<endl;
         return Test::a;
     }
};

int main()
{

    Test b(99);
    cout<<"b的内存地址"<<endl;
    //强转换
    cout<<(int )b<<endl;


    
    return 0;
}