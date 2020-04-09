#include <iostream>

using namespace std;

//

int main()
{
    char s1[80];
    cout<<"请键入一个字符：";
    cout<<cin.get()<<endl;

    cin.get();

    cout<<"请输入一个字符串：";
    cin.getline(s1,80);

    cout<<s1<<endl;


    
    return 0;
}