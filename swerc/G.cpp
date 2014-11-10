/* 
 * File:   G.cpp
 * Author: usuario_local
 *
 * Created on 31 de octubre de 2012, 16:57
 */

#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int n;
    cin >> n;
    cin.ignore();
    for (int i=0; i < n;i++){
        string str;
        getline(cin,str);
        int mm=0;
        int ff=0;
        int mf=0;
        int fm=0;
        for(int i = 0; i<str.length();i++){
            if(str[i]!='M'&& str[i]!='F'){
            }else if(str[i]=='M'&& str[i+1]=='M'){
                mm++;
                i++;
            }else if(str[i]=='F'&& str[i+1]=='F'){
                ff++;
                i++;
            }else if(str[i]=='M'&& str[i+1]=='F'){
                mf++;
                i++;
            }else if(str[i]=='F'&& str[i+1]=='M'){
                fm++;
                i++;
            }
        }
        if(mf+fm+mm+ff ==1)cout << "NO LOOP" <<endl;
        else if(mm==ff)cout <<"LOOP"<<endl;
        else cout << "NO LOOP" <<endl;
    }
    return 0;
}

