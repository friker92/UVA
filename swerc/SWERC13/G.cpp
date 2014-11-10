#include <iostream>
#include <iomanip>
#include <sstream>
#include <cstdlib>
#include <cstdio>
#include <vector>
#include <queue>
#include <map>
#include <stack>
#include <algorithm>
#include <utility>
#include <complex>
#include <climits>
#include <limits>
#include <cmath>
#include <cstring>
#include <string>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<ll,ll> ll_ll;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector<ll> vll;
typedef vector<vi> vvi;

int N;
int colors[200];
vector<vii> AdjList;
vii sol;

bool backtrack(int n){
  bool good=true;
  if(n==N) return true;
  else{
    for(int c=0;c<4;c++){
      good=true;
      for(int i=0;i<AdjList[n].size();i++){
	if(colors[AdjList[n][i].first]==c){
	  good=false;
	  break;
	}
      }
      if(good){
	colors[n]=c;
	sol.push_back(make_pair(n,c));
	if(backtrack(n+1)) return true;
	colors[n]=-1;
      }
    }
    return good;
  }
}

int main(){
  scanf("%d",&N);
  int u,v;
  char ch;
  AdjList = vector<vii>(N);
  while(cin >> u >> ch >>v){
    AdjList[u-1].push_back(make_pair(v-1,0));
    AdjList[v-1].push_back(make_pair(u-1,0));
  }
  for(int i=0;i<N;i++) colors[i]=-1;
  backtrack(0);
  for(int i =0;i<N;i++){
    cout << sol[i].first +1 << " " << sol[i].second +1 << endl;
  }
  return 0;
}
