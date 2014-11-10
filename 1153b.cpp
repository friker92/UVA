#include <iostream>
#include <climits>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstdio>
#define MAX 800008
using namespace std;

struct Turtle {
    int w,c;
};

bool compare(const Turtle& a, const Turtle& b) {
    return a.c > b.c;
}


int dp[MAX];

int main(){
  int T,n;
  int w, c, k=0;
  dp[0] = INT_MAX;
  Turtle tur;
  cin >> T;
  while(T--){
    vector<Turtle> V;
    cin >> n;
    for(int i=0;i<n;i++){
      cin >> w >> c;
      tur.w=w;
      tur.c=c-w;
      V.push_back(tur);
    }
    sort(V.begin(), V.end(), compare);
    
    for(int i=0; i<V.size(); i++) {
      int w = V[i].w, c = V[i].c;
        
      for(int j=k; j>=0; j--) {
	int next = min(dp[j]-w, c);
	if (next >= dp[j+1]) {
	  dp[j+1] = next;
	  k=max(k, j+1);
	}
      }
    }
    printf("%d\n", k);
    if(T) cout << endl;
  }

  return 0;
}
