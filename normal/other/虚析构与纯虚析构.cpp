#include <iostream>
#include <string>

using namespace std;

//虚析构与纯虚析构

class Animal
{
    public:
    Animal()
    {
        cout<<"Animal的构造函数调用"<<endl;
    }
    //利用虚析构可以解决，父类指针释放时无法调用子类析构的问题。
    //virtual   ~Animal()
    //{
     //   cout<<"Animal的虚析构函数调用"<<endl;
    //}

    //纯虚析构
    virtual ~Animal()=0;

    //纯虚函数
    virtual void speak()=0;
};

    Animal::~Animal()
    {
        cout<<"Animal的纯虚析构函数调用"<<endl;
    }


class Cat: public Animal
{
    public:
    Cat(string name)
    {
        cout<<"Cat构造函数的调用"<<endl;
        m_Name=new string(name); 
        //new   数据类型(初始值)
        //new   数据类型
        //new   数据类型[常量表达式]
    }

     virtual  void speak()
    {
        cout<<*m_Name<<"小猫在说话"<<endl;
    }

    ~Cat()
    {
        if(m_Name!=NULL)
        {
            cout<<"Cat析构函数调用"<<endl;
            delete m_Name;
             m_Name=NULL;
        }
        
    }
    string  *m_Name;
};

void test01()
{
    Animal *animal=new Cat("Tom");
    animal ->speak(); 
    delete  animal;

}
int main()
{
    test01();



    
    return 0;
}