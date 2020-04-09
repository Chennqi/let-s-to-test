#include <iostream>
#include <map>

using namespace std;

//

int main()
{
    map< char, int, less<char> >    map1;               //定义变量
    map< char, int, less<char> >::iterator  mapIter;

    map1['c'] = 3;
    map1['d'] = 4;
    map1['a'] = 1;
    map1['b'] = 2;
    
    for(mapIter=map1.begin() ; mapIter != map1.end() ; ++mapIter)
        cout<<" "<< (*mapIter).first <<": "<< (*mapIter).second;
    cout<<endl;

    map< char , int , less<char>>::const_iterator    ptr;
    ptr = map1.find('d');
    cout<<""<<" "<<(*ptr).first<<"键对应于值："<<(*ptr).second<<endl;




    
    return 0;
}