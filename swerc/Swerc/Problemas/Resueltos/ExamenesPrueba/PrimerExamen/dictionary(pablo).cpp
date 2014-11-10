//*/
#define dout cout
/*/
#define dout if(true){}else cout
//*/


#include <cstdlib>
#include <cstdio>
#include <iostream>
#include <climits>
#include <stack>
#include <queue>
#include <deque>
#include <map>
#include <iomanip>
#include <set>

using namespace std;

string tolower(string str){
    for(int i=0;i<str.size();i++){
        if(str[i]>='A'&&str[i]<='Z') str[i]=str[i]-'A'+'a';
    }
    return str;
}

int main(int argc, char** argv) {
    string map;
    set<string> dic;
    string str;
    int it;

    for(int i=' '+1;i<128;i++)
        if(i<'a' || i>'z')
            map=map+char(i);

    while(!cin.eof()){
        it=0;
        cin >>str;
        if(cin.eof()){
            for(set<string>::iterator IT=dic.begin(); IT!=dic.end(); IT++){
                if(*IT != "") cout << *IT <<endl;
            }
            return 0;
        }

        str=tolower(str);
        
        while(it!= str.npos){
            it=str.find_first_of(map);
            if(it!=str.npos){
                dic.insert(str.substr(0,it));
                str=str.substr(it+1);
            }
        }
        dic.insert(str);

    }


    return 0;
}