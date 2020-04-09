#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;

//
int len(char  str[]);
void open(char str[])
{
    int i=0;
    ifstream fin;
    fin.open("ok.txt",ios::in);

    if(!fin)
    {
        cout<<"not open"<<endl;
        return;
    }
    while(fin)
    {
        fin.get(str[i]);
       // cout<<len(str)<<i<<str[i]<<endl;
       cout<<str<<endl;
        i++ ;
      // str[i]='\0';
    }
    str[i]='\0';          //会报错，多输出一个无效字符

     cout<<len(str)<<i<<str[i]<<endl;
     fin.close();
    

     
    cout<<str<<endl;


}
//文本长度

int len(char str[])
{
    int temp=0;   
    for(int i=0;str[i]!='\0';i++)
        temp++;
    return temp;
}

//查询位置

int index(char a[],char b[])
{
    int i,j,temp;
    for(i=0;i<len(a)-len(b);i++)
    {
        temp = i;
        j = 0 ;
        while (j <= len(b) && a[temp] == b [j] )
        {
            temp++;
            j++;
        }
        if(j == len(b))
            return i;        
    }
    return -1;
}
//统计单词的个数
int count(char str[])
{
    int i,c=0;
    for(i=0;i<len(str);i++)
        if(str[i]==' ')
        c++;
    return c+1;
}
void output(char str[],int j)
{

    int n=0;
        for(int i=0;i<len(str);i++)
    {
        if(str[i]==' ')
            {
                n++;
              //  break;
            }
        else
        {
            if(n==(j-1))
            cout<<str[i];
        }   
    }
    cout<<endl;
}

void output(char a[])
{
    for(int i=0;i<(len(a)-1);i++)
    {   

        cout<<i;
        cout<<a[i]<<endl;
    }
    cout<<endl;
}
int main()
{ 
    char m[100];                //存放文件内容
    char n[]="three";              //定义需要查找的子串
    open (m);

    cout<<"单词长度："<<len(m)<<endl;
    //cout<<"目标首次出现的位置："<<index(m,n)<<endl;
    //cout<<"单词数："<<count(m)<<endl;
    //output(m);
    //output(m,1);




    
    return 0;
}