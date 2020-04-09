#include <fstream>
#include <iostream>

using namespace std;

//
int main(int argc, char *argv[])
{
    char ch;
    //判断输入三条命令
    if (argc != 3)
    {
        cout << "命令行输入错误！" << endl;
        return 1;
    }

    ifstream fin(argv[1]);

    if (!fin)
    {
        cout << "不能打开输出文件！" << endl;
        return 1;
    }
    //定位文件开头，移动第三个参数规定的距离
    //atoi ()是把字符串转换成整型数的一个函数
    fin.seekg(atoi(argv[2]), ios::beg);

    while (!fin.eof())
    {
        fin.get(ch);
        cout << ch;
    }
    fin.close();

    return 0;
}