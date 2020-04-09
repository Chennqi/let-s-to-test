#include <iostream>
#include <fstream>

using namespace std;

int main(int argc,char *argv[])
{
    char ch;
    //main( int argc, char* argv[], char **env ) 
    //第一个参数，int型的argc，为整型，用来统计程序运行时发送给main函数的命令行参数的个数，在VS中默认值为1。 
    //第二个参数，char*型的argv[]，为字符串数组，用来存放指向的字符串参数的指针数组，每一个元素指向一个参数。各成员含义如下： 
    /*argv[0]指向程序运行的全路径名 
        argv[1]指向在DOS命令行中执行程序名后的第一个字符串 
        argv[2]指向执行程序名后的第二个字符串 
        argv[3]指向执行程序名后的第三个字符串 
        argv[argc]为NULL 
        第三个参数，char**型的env，为字符串数组。env[]的每一个元素都包含ENVVAR=value形式的字符串，其中ENVVAR为环境变量，
        value为其对应的值。平时使用到的比较少。
    */
    
    if (argc!=3)                
    {
        cout<<"命令行输入错误！"<<endl;
        return 1;
    }

    ifstream  fin(argv[1]);

    if(!fin)
    {
        cout<<"不能打开源文件。"<<endl;
        return 1;
    }

    ofstream fout(argv[2]);
    if(!fout)
    {
        cout<<"不能打开目标文件"<<endl;
        return 1;
    }

    while (fin)
    {
        fin.get(ch);
        fout.put(ch);
    }

    fin.close();
    fout.close();

    




    return 0;
}