#include <iostream>
#include <fstream>
using namespace std;

//

int main()
{   
    //创建一个输出流对象，同时也是写入文件对象
    ofstream fout("test.txt");
    //判断
    if (!fout)
    {
        cout<<"不能打开输出文件。"<<endl;
        return 1;
    }
    //从程序中输出，即向文件中写入
    fout<<"HelloWorld!"<<endl;
    fout<<10<<endl;
    fout<<hex<<10<<endl;
    //关闭文件
    fout.close();
    //创建输入流对象，也是读取文件对象
    ifstream fin("test.txt");
    //判断
    if(!fin)
    {
        cout<<"不能打开输入文件。"<<endl;
        return 1;
    }

    int i;
    char ch;
    char c[20];
    fin>>c;
    fin>>i;
    fin>>ch;

    cout<<c<<endl;
    cout<<i<<endl;
    cout<<ch<<endl;
    
    fin.close();


    
    return 0;
}