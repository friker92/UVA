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
#include <cmath>
#include <sstream>
#include <string>

using namespace std;

bool esMatrioska(stringstream &linea){
    stack <int> pilaJ;
    stack <int> pilaS;
    bool buena=true;
    int n;
    while (buena && linea >> n){
        if (n>0){
            if (pilaJ.empty() && pilaS.empty()) buena=false;
            else if (pilaJ.top()!=n) buena=false;
            else if (pilaJ.top()<=pilaS.top()) buena=false;
            else{
                pilaJ.pop();
                pilaS.pop();
            }
        }

        if (n<0){
            if (!pilaS.empty()){
                int x=pilaS.top()-n;
                pilaS.pop();
                pilaS.push(x);
            }
            pilaS.push(0);
            pilaJ.push(-n);
        }
    }

    if (!pilaJ.empty()) buena=false;
    return buena;

}



int main(int argc, char** argv) {
    int n,k;
    string str;

    while(!cin.eof()){
        getline(cin,str);
        stringstream linea(str);

        if(cin.eof()) return 0;

        if (esMatrioska(linea)) cout << ":-) Matrioshka!" << endl;
        else cout << ":-( Try again." << endl;
    }

    return 0;
}

