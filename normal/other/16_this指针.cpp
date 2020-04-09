#include <iostream>
#include <string.h>

using namespace std;


class Date
{
private:
    int mo,da,yr;
    char *month;
public:
    Date(int m=0, int d=0,int y=0);    
    ~Date();
    Date &operator=(const Date &);
    void display();
};

Date::Date(int m,int d,int y)
{
    static char *mos[]=
    {
        "January","February","March","April","May","June",
        "July","August","September","October","November","December"
    };
    mo=m;   da=d;   yr=y;

    if(m!=0)
    {
        //字符数组，字符串后的"\0"问题，和下面对照
        month=new char[ strlen ( mos [ m-1 ] )+1];
        strcpy(month ,mos[m-1]);
    }
    else
    {
        month=0;
    }
}

Date::~Date()
{
    delete[] month;
}

void Date::display()
{
    if(month!=0)
    {
        cout<<month<<"  "<<da<<","<<yr<<endl;
    }
}

Date &Date::operator=(const Date &dt)
{
    if(this != &dt )
    {
        mo  =   dt.mo;
        da  =   dt.da;
        yr  =   dt.yr;
        delete[] month;
        if(dt.month !=  0)
        {
            month   =   new char[   strlen(dt.month)    +1  ];
            strcpy( month,  dt.month);
        }      
        else
        {
            month=0;
        }
    }
    return *this;
}
int main()
{
    Date birthday(  4,  19, 1979);
    Date oldday,newday;

    oldday =newday  =birthday;
    birthday.display();
    oldday.display();
    newday.display();
}