#include <iostream>

using namespace std;

//制作饮品的大致步骤：
//煮水—冲泡—倒入杯中—加入辅料
//利用多态技术实现，提供抽象制作饮品类，提供子类制作咖啡和茶叶
 
class AbstractDrinking
{
    public:
    //煮水
    virtual void Boil()=0;

    //冲泡
    virtual void Brew()=0;

    //倒入杯中
    virtual void PourCup()=0;

    //加入辅料
    virtual void PutSomething()=0;

    //制作饮品
    void makeDrink()
    {
        Boil();
        Brew();
        PourCup();
        PutSomething();
    }
};

//制作咖啡
class Coffee: public AbstractDrinking
{
    public:
    //煮水
    virtual void Boil()
    {
        cout<<"煮农夫山泉"<<endl;
    }

    //冲泡
    virtual void Brew()
    {
         cout<<"冲泡咖啡"<<endl;
    }

    //倒入杯中
    virtual void PourCup()
    {
         cout<<"倒入杯中"<<endl;
    }

    //加入辅料
    virtual void PutSomething()
    {
         cout<<"加入糖和牛奶"<<endl;
    }

};


//制作茶叶
class Tea: public AbstractDrinking
{
    public:
    //煮水
    virtual void Boil()
    {
        cout<<"煮泉水"<<endl;
    }

    //冲泡
    virtual void Brew()
    {
         cout<<"冲泡茶叶"<<endl;
    }

    //倒入杯中
    virtual void PourCup()
    {
         cout<<"倒入杯中"<<endl;
    }

    //加入辅料
    virtual void PutSomething()
    {
         cout<<"加入枸杞"<<endl;
    }

};

//具体实现
void doWork(AbstractDrinking *abs)
{
     abs->makeDrink();
     delete abs;//释放
}
void test01()
{
    //制作咖啡
    doWork(new Coffee);
    cout<<"--------------------------------"<<endl;
    //制作茶叶
    doWork(new Tea);
}

int main()
{
    test01();
    return 0;
}