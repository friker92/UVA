#include <iostream>
using namespace std;
const int MAXC = 1000000001, N = 1024;
int n, v, z[N];
bool possible(int x){
    int ccap = x, cv = 0;
    for(int i = 0; i < n; ++i){
        if(ccap < z[i]){
            ccap = x;
            if(++cv == v) return false;
        }
        ccap -= z[i];
    }
    return true;
}
int max(int a, int b){ return a > b ? a : b; }
int main(void){
    while(cin >> n>>v){
        int min_cap = 0, u, v, w;
		for(int i = 0; i < n; ++i) {cin>>z[i]; min_cap = max(min_cap, z[i]);}
        for(u = min_cap, v = MAXC; u < v; ){
            w = (u + v) /2;
            if(!possible(w)) u = w + 1;
            else v = w;
        }
        cout << u << endl;
    }
    return 0;
}