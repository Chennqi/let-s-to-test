#include <iostream>
#include <algorithm>
#include <functional>
#include <vector>

using namespace std;

//

class myclass
{
private:
    
public:
    myclass(    int a,  int b):first(a),second(b) 
    {

    }
    
    int first;
    int second;
    bool    operator<(  const myclass   &m) const
    {
        return  first<  m.first;
    }
    ~myclass() {}
};

bool    less_second(const   myclass &m1,    const   myclass &m2)
{
    return m1.second<   m2.second;
}

int main()
{
    //创建对象
    vector< myclass>    vect;               //创建对象


    for (int    i = 0;  i < 10;   i++)
    {
        myclass my( 10-i,   i*3) ;              //创建对象并初始化
        vect.push_back(my); 
    }

    //输出未排序的向量
    for (int i = 0; i < vect.size(); i++)
    {
        cout<<"("<<vect[i].first<<","<<vect[i].second<<")\n";
    }

    //调用排序算法
    sort(vect.begin(),  vect.end());

    //输出按第一个值排序的结果
    cout<<"after sorted by first:"<<endl;
    for(    int i=0;    i<vect.size();  i++)
        cout<<"("<<vect[i].first<<","<<vect[i].second<<")\n";
        
    //调用排序算法
    cout<<"after sorted by second:"<<endl;
    sort(vect.begin(),vect.end(),less_second);

    //输出按第二个值排序的结果
    for(    int i=0;    i<vect.size();  i++)
        cout<<"("<<vect[i].first<<","<<vect[i].second<<")\n";


    return 0;
}