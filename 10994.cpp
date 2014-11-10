#include <iostream>
using namespace std;

int s[10];
long long v[12];

long long F(int n){
    if(n <= 0) return 0;
    long long sum = 0;
    int cnt = 0;
    while(n > 0){
        int r = n%10;n/=10;
        sum += s[r] + r*v[cnt];
        cnt++;
    }
    return sum;
}

int main(){
    int p,q;
    int sum = 0;
    for(int i=0;i<10;i++){
        sum += i;
        s[i] = sum;
    }
    v[0] = 0; v[1] = 45;
    for(int i=2;i<12;i++){
        v[i] = v[i-1]*10 + 45;
    }
	cin >> p >> q;
    while(p >= 0 && q >= 0){
        cout << (F(q) - F(p-1)) << endl;
		cin >> p >> q;
    }
    return 0;
}