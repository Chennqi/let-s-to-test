#include <iostream>
#include <fstream>
using namespace std;

//

int main ()
{
    ofstream ou("\\noraml\\file_create.txt");

    ifstream in;
    ou<<"Hello Word!Welcome to 21 C+";
    in.open("file_create.txt"  );
    if(in.fail())
    cout<<"文件不存在，打开失败！"<<endl;
    else
    cout<<"文件已打开，可以进行读写操作"<<endl;
    in.close();
    



    
    return 0;
}