#include <iostream>
#include <string.h>
using namespace std;

//


class Internet
{
public:
     char *name;
     char *url;
public:
    Internet( char *name, char *url) 
    {
        Internet::name=new char[strlen(name)+1];
        Internet::url=new char[strlen(url)+1];

        if(name)
        {
            strcpy(Internet::name,name);
        }
        if(url)
        {
            strcpy(Internet::url,url);
        }
    }
    Internet(Internet &temp)
    {
        Internet::name=new char[strlen(name)+1];
        Internet::url=new char[strlen(url)+1];
        if(name)
        {
            strcpy(Internet::name,temp.name);
        }
        if(url)
        {
            strcpy(Internet::url,temp.url);
        }
    }
    ~Internet() 
    {
        delete[] name;
        delete[] url;
    }
    //赋值运算符重载函数
    Internet &operator =(Internet &temp)
    {
        delete[] this->name;
        delete[] this->url;

        this->name =new char[strlen(temp.name)+1];
        this->url=new char[strlen(temp.url)+1];

         if(this->name)
        {
            strcpy(Internet::name,temp.name);
        }
        if(this->url)
        {
            strcpy(Internet::url,temp.url);
        }
        return *this;
        
    }
};
int main()
{
    
    Internet a ("education", "www.edu.cn") ;
    Internet b=a;

    cout<<b.name<<endl<<b.url<<endl;
    Internet c("Tsinghua","www.tsinghua.edu.cn");
    b=c;

    cout<<b.name<<endl<<b.url<<endl;

    
    return 0;
}