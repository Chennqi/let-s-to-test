#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;

int main()
{   
    ofstream outf("test.txt");
    if(!outf)
    {
        cout<<"不能打开输出文件！"<<endl;
        return 1;
    }
    double n=123.44;
    char str[]="向文件写入双精度数和字符串";

    outf.write((char *)&n,sizeof(double));
    outf.write(str,strlen(str));
    outf.close();

    ifstream inf("test.txt");
    if(!inf)
    {
        cout<<"不能打开输入文件！"<<endl;
        return 1;
    }

    inf.read((char *)&n,sizeof(double));
    inf.read(str,26);
    cout<<n<<endl<<str<<endl;
    inf.close();

    



    return 0;
}