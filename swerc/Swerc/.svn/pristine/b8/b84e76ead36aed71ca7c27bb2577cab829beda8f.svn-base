/*/
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
#include <string>

using namespace std;

bool divM(string & str, int m){
    int j=0;
    for(int i=0;i<str.length();i++){
        j=j*10 + (str[i]-'0');
        j=j%m;
    }
    if(j%m==0) return true;
    else return false;
}

bool divcuatro(const string & str){
    return atoi(str.substr(str.size()-2,str.size()).c_str())%4==0;
}
bool divcien(string & str){
    return (str[str.size()-1]=='0' && str[str.size()-2]=='0');
}
bool div400(string & str){
    return (divcien(str) && divcuatro(str.substr(0,str.size()-2)));
}

bool div11(string & str){
    int sum=0;
    int N=str.length();
    for(int i=0 ; i<N;i++){
        if(i%2==0) sum=sum+(str[i]-'0');
        else sum=sum-(str[i]-'0');
        sum=sum%11;
    }
    return (sum==0);
}

bool div5(string & str){
    return (str[str.length()-1]=='0' || str[str.length()-1]=='5');
}
bool div3(string & str){
    int sum=0;
    int N=str.length();
    for(int i=0 ; i<N;i++){
        sum=sum+(str[i]-'0');
        sum=sum%3;
    }
    return (sum%3==0);
}


int main(int argc, char** argv) {
    long long int n;
    string str;
    bool first=true;
    while(!cin.eof()){
        getline(cin,str);
        if(cin.eof()) return 0;
        
        if(first) first=false;
        else cout << endl;
        
        bool e = false; //No es leap
        bool alguno=false;
        if( divM(str,400) || (!divM(str,100) && divM(str,4)))
        {
            //Leap year
            cout << "This is leap year.\n";
            e=true;
            alguno=true;
        }
        if(divM(str,15)) {
            cout << "This is huluculu festival year.\n";
            alguno=true;
        }
        if(divM(str,55) && e){
            cout << "This is bulukulu festival year.\n";
        }
        if(!alguno) cout <<"This is an ordinary year.\n";
    }


    return 0;
}

