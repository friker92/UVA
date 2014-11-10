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

using namespace std;


int main(int argc, char** argv) {
    int n,k;
    string s, t;

    while(!cin.eof()){
        cin >> s;
        cin >> t;
        if(cin.eof())return 0;

        int N=t.length();
        int M=s.length();

        if(M>N) cout << "No"<<endl;
        else{

            int j=0;
            for (int i =0; i < N && j<M ; i++)
            {
               if (t[i] == s[j]) j++;
            }
            if (j== M) cout << "Yes"<<endl;
            else cout << "No" <<endl;
        }

    }


    return 0;
}

