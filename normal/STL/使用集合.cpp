#include <iostream>
#include <set>
#include <string>

using namespace std;

//

int main(int argc,char *argv[])
{   
    set<string>     strset;
    set<string>::iterator       si;

    strset.insert("cantaloupes");
    strset.insert("apple");
    strset.insert("orange");
    strset.insert("banana");
    strset.insert("grapes");
    strset.insert("grapes");
    
    for(    si=strset.begin();  si!=strset.end();   si++)
    {
        cout<<*si<<"    ";
    }
    cout<<endl;





    
    return 0;
}