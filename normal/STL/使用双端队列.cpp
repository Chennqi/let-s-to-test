#include <iostream>
#include <deque>

using namespace std;

//
typedef deque<int>  INTDEQUE;               //定义双端队列容器


//从前向后显示队列中的全部元素
void put_deque(INTDEQUE deque,  char    *name)
{
    INTDEQUE::iterator  pdeque;             //定义一个游标iterator
    cout<<"The contents of"<<name<<";";
    for(    pdeque=deque.begin();   pdeque!=deque.end();    pdeque++)
        cout<<  *pdeque<<"      ";
    cout<<endl;
}


int main()
{
    INTDEQUE    deq1;
    INTDEQUE    deq2(   10, 6);                 //deq2最初有10个值为6的元素
    INTDEQUE::iterator  i;

    put_deque(  deq1,   "deq1");                //调用显示函数
    put_deque(  deq2,   "deq2");

    deq1.push_back(2);              //从序列后添加值为“2”的元素
    deq1.push_back(4);               //从序列后添加值为“4”的元素
    cout<<" deq1.push_back(2)   and    deq1.back(4) :"<<endl;
    put_deque(  deq1,   "deq1");

    deq1.push_front(5);             //从序列前添加两个元素
    deq1.push_front(7);
    cout<<" deq1.push_front(5)   and    deq1.front(7) :"<<endl;
    put_deque(  deq1,   "deq1");

    deq1.insert(    deq1.begin()+   1,3,9);             //在序列中间插入数据,3个值为9的数据，位置为"deq1.begin()+1"
    cout<<"deq1.insert(    deq1.begin()+1,3,9);"<<endl;
    put_deque(  deq1,   "deq1");

    //deque.at()返回在特定位置元素的引用，并检查其合法性
    cout<<"deq1.at(4)="<<deq1.at(4)<<endl;              //测试引用类函数
    cout<<"deq1[4]="<<deq1[4]<<endl;

    deq1.at(1)=10;
    deq1[2]=12;
    cout<<"deq1.at(1)=10    and deq1[2]=12:"<<endl;
    put_deque(deq1,"deq1");
    
    //从deq1序列的前后个移去一个元素
    deq1.pop_front();
    deq1.pop_back();
    cout<<"deq1.pop_front()    and   deq1.pop_back() :"<<endl;
    put_deque(deq1,"deq1");
   
    deq1.erase(deq1.begin());               //删除容器中的元素
    cout<<"deq1.erase(deq1.begin()+1):"<<endl;
    put_deque(deq1,"deq1");
   
    deq2.assign(8,1);               //给容器赋值
    cout<<"deq2.assign(8,1);"<<endl;
    put_deque(deq2,"deq2");

    
    return 0;
}