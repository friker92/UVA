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

using namespace std;


int main(int argc, char** argv) {
    int n,k;
    double x1,y1,x2,y2;
    double x3,y3,x4,y4;
    double aux1,aux2;

    while(!cin.eof()){
        cin >>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;

        if(cin.eof()){ return 0;}
        if(x1==x3 && y1 ==y3){
            aux1=x4-x3;
            aux2=y4-y3;

            aux1+=x2;
            aux2+=y2;
        }
        else if(x1==x4&&y1==y4){
            aux1=x3-x4;
            aux2=y3-y4;

            aux1+=x2;
            aux2+=y2;
        }
        else if(x2==x3&&y2==y3){
            aux1=x4-x3;
            aux2=y4-y3;

            aux1+=x1;
            aux2+=y1;
        }
        else{
            aux1=x3-x4;
            aux2=y3-y4;

            aux1+=x1;
            aux2+=y1;
        }

        cout <<fixed<< setprecision(3)<< aux1<<" "<<aux2<<endl;
  
    }


    return 0;
}