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
#include <cstring>

using namespace std;

int main(int argc, char** argv) {
    int n,k;
    long long int tabla[101][101];
    
    //memset(tabla,0,101*101*4);


    for(int i=0;i<101;i++){
        for(int j=0;j<=i;j++){
            if(j==0) tabla[i][j]=1;
            else if(j<i)tabla[i][j]=tabla[i-1][j-1]+tabla[i-1][j];
            else tabla[i][j]=1;
        }
    }

    while(cin >> n >> k && (n!=0 || k!=0)){
        cout <<n<<" things taken "<<k<<" at a time is "<< tabla[n][k]<<" exactly."<<endl;
    }


    return 0;
}