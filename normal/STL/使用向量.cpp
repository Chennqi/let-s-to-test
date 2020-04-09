#include <iostream>
#include <vector>

using namespace std;

//
const char *szHW= "Hello Word";               //是字符数组，以“\0"结尾
int main(   int argc,   char *argv[])
{   
    vector<char>   vec;             //声明一个字符向量（stl中的数组）
    vector<char> ::iterator vi;             //为字符数组定义一个游标iterator

    const char    *cptr=  szHW;               //将一个指针指向"Hello World"字符串

    while ( *cptr   !=  '\0')
    {
        //      push_back()h函数将数据放在向量的尾部
        //      将cptr指向的字符串，依次复制到vec中。z
        vec.push_back(  *cptr);
        cptr++;
    }   
   
   //这是STL的规范化循环------->通常使用"   !=",    而不是"  <",    因为"   <"在一些容器中没有定义
   //begin()返回向量起始元素的游标( iterator),end()返回向量末尾元素的游标
    for(    vi=vec.begin(); vi!=vec.end();    vi++)
        cout<<  *vi;
    
    cout<<  endl;


    
    return 0;
}