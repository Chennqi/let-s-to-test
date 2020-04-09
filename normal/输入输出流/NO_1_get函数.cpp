#include <iostream>

using namespace std;

//get()函数的应用
//get(()函数可以通过重载实现不同功能)

int main()
{
    char s1[80],s2[80];
    cout<<"Please input a char:  ";



    cout<<cin.get()<<endl;

    //cin.get();                //如果程序正在使用 get 函数简单地暂停屏幕直到按回车键，并且不需要存储字符，则该函数也可以这样调用
                                      //不丢弃缓冲区中的Enter

    cout<<"Please input a row string:   ";
    for(int i=0 ;   i<80    ;   i++)
    {
        cin.get(s1[i]);
        
        if (s1[i]=='\n')
        {
           s1[i]='b';
           s1[i+1]='\0';
            break;
        }
        
    }
    cout<<"s1=:"<<s1<<endl;
    cout<<"Please input a row string:";
    cin.get(s2,80);
    cout<<s2<<endl;


    
    return 0;
}