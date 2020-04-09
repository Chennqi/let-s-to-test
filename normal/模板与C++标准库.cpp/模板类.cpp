#include <iostream>

using namespace std;

//

const   int size=10;

//声明类模板
template<class  T>
class   Stack
{
    T   stack[size];
    int t;
    public:
    Stack()
    {
        t=0;
    }
    int push (const     T   &ch);
    T   &pop();
};

//定义入栈成员函数的功能
template<class  T>
int  Stack<T>::push( const   T   &ob)
{
    if(t==size)
    {
        cout<<"Stack    is  full!"<<endl;
        return  0;
    }
    stack[t]=ob;
    t++;
    return 0;
}

//定义出栈成员函数的功能
template<class T>
T   &Stack<T>::pop()
{
    if(t==0)
    {
        cout<<"Stack    is  empty!"<<endl;
        //return  0;
    }
    t--;
    return  stack[t];
}

int main()
{
    Stack<char>cs1,cs2;
    int i;
    cs1.push('a');
    cs2.push('x');
    cs1.push('b');
    cs2.push('y');
    cs1.push('c');
    cs2.push('z');

    for(i=0;i<3;i++)
        cout<<"pop  cs1:"<<cs1.pop()<<endl;
    for(i=0;i<3;i++)
        cout<<"pop  cs2:"<<cs2.pop()<<endl;

    Stack<int>is1,is2;
    is1.push(1);
    is2.push(2);
    is1.push(3);
    is2.push(4);
    is1.push(5);
    is2.push(6);

     for(i=0;i<3;i++)
        cout<<"pop  is1:"<<is1.pop()<<endl;
    for(i=0;i<3;i++)
        cout<<"pop  is2:"<<is2.pop()<<endl;



    
    return 0;
}