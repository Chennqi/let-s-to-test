#include    <iostream>
#include    <cstdio>
#include    <string.h>

using   namespace   std;

 const  int Max=30;

class   Student;
void    setData(Student &s);
void    count(Student   &s);
void    sort(Student    S[],    int N);
double  getAverage(Student  s[],    int N);
void    print(Student   &S);
int     search(Student  S[],    int N,char  *n);
class   Student
{
    public:
    char    number[Max];
    char    name[Max];
    double  chinese;
    double  math;
    double  english;
    double  total;
    double  average;
    int rank;

};
//-------------------------------------------------------------------------------------
void    setData(Student &s)
{
    cout<<"输入学号，姓名，语文，数学，英语成绩："<<endl;
    cin>>s.number>>s.name>>s.chinese>>s.math>>s.english;
    s.total=0;
    s.average=0;
    s.rank=0;
}

void    count(Student   &s)
{
    s.total=s.chinese+s.math+s.english;
    s.average=s.total/3;
}

void    sort(Student    S[],int N)
{
    int index;
    Student inserter;
    for(int i=1;i<N;i++)
    {
        inserter=S[i];
        index=i-1;
        while (index>=0&&inserter.average>S[index].average) 
        {
            S[index+1]=S[index];
            index--;
        }
        S[index+1]=inserter;
    }
    for(int j=0;j<N;j++)
        S[j].rank=j+1;
}

double  getAverage(Student  S[],int N)
{
    double  Average=0;
    for(int i=0; i<N;i++)
        Average +=(S[i].chinese+S[i].math+S[i].english);
    Average/=(N*3);
    return  Average;
}

void    print(Student   &s)
{
    cout<<"排名"<<"\t"<<"学号"<<"\t"<<"姓名"<<"\t"<<"语文"<<"数学"<<"\t"<<"英语"<<"\t"<<"总分"<<"\t"<<"平均分"<<"\t"<<endl;
    cout<<s.rank<<"\t"<<s.number<<"\t"<<s.name<<"\t"<<s.chinese<<s.math<<"\t"<<s.english<<"\t"<<s.total<<"\t"<<s.average<<"\t"<<endl;

}

int search(Student  S[],    int N,  char    *n)
{
    for(int i=0;i<N;i++)
    {
        if(strcmp(S[i].number,n)==0)
            return  i;
    }
    return  -1;
}

int main()
{
    const   int M=3;
    Student S[M];
    for (int i = 0; i < M; i++)
    {
        cout<<"下面输入第"<<i+1<<"位同学的数据："<<endl;
        setData(S[i]);
        count(S[i]);
        cout<<endl;
    }

    sort(S,M);
    int order=1;
    while (order!=4)
    {
        cout<<"×××××××××××××命令菜单×××××××××××××"<<endl;
        cout<<"1.   打印所有排名"<<endl;
        cout<<"2.   打印出成绩在全班平均分以上的学生名单和数据信息"<<endl;
        cout<<"3.   任意输入一个学号，查找出该学生在班级中的排名及其考试成绩"<<endl;
        cout<<"4.   退出系统"<<endl;
        cout<<"××××××××××××××××××××××××××××××"<<endl;
        cout<<"请输入命令选择：";
        cin>>order;
        switch(order)
        {
            case    1:
                {
                    for(int j=0;j<M;j++)
                    print(S[j]);
                }
                break;
            case    2:
                {
                    double  compare=getAverage(S,M);
                    for(int k=0;k<M;k++)
                    {
                        if(S[k].average>compare)
                            print(S[k]);
                    }
                }
                break;
            case    3:
                {
                    char    code[Max];
                    cout<<"请输入您要查找的学号：";
                    cin>>code;
                    int result=search(S,M,code);
                    if(result==-1)
                        cout<<"您输入的学号不存在！！！"<<endl;
                    else
                        print(S[result]);
                }
                break;
            case    4:
                break;
            default:
                cout<<"输入的命令不存在！！！"<<endl;
        }
    }
    return  0;
}