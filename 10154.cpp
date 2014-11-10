#include <iostream>
#include <cmath>
#include <string>
#include <queue>
#include <utility>
#include <vector>
#include <algorithm>
using namespace std;

int dp[10000];
bool comparar(pair<int,int> a, pair<int,int> b){
	return a.second > b.second;
}
int main(){
	vector<pair<int, int> > tortu;
	int a,b,N=0,k=0;
	while(cin>>a>>b){
		tortu.push_back(pair<int,int>(a,b-a));
		N++;
	}
	sort (tortu.begin(), tortu.end(), comparar);
	dp[0] =1e9;
	for (int i = 0; i < N; i++) {
       int w = tortu[i].first, c = tortu[i].second;
        
        for(int j=k; j>=0; j--) {
            int next = min(dp[j]-w, c);
            if (next >= dp[j+1]) {
                dp[j+1] = next;
                k=max(k, j+1);
            }
        }
	}
	cout << k << endl;
	
    return 0;
}