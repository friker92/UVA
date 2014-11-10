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


int tabla[30][2];

int getAns(long long int n, int p){
  if(n<5){
    if(p==1) return 0;
    else return n+1;
  }
  long long int pos=0,aux=n;
  while(aux>=5){
    aux/=5;
    pos++;
  }
  if(pos%2==0){
    return aux*tabla[pos][p]+getAns(n-aux*pow(5,pos),p);
  }else{
    if(aux%2==0){
      return (aux/2)*tabla[pos][1-p] + (aux/2)*tabla[pos][p] +
	getAns(n-aux*pow(5,pos),p);
    }else{
      return (aux/2)*tabla[pos][1-p]+((aux/2)+1)*tabla[pos][p] +
	getAns(n-aux*pow(5,pos),1-p);
    }
  }
}

int main(){
  long long int n;
  tabla[1][0]=5;
  tabla[1][1]=0;
  for(int i=2;i<30;i++){
    if(i%2==1){
      tabla[i][0]=5*tabla[i-1][1];
      tabla[i][1]=5*tabla[i-1][0];
    }else{
      tabla[i][0] = 3*tabla[i-1][0] +2*tabla[i-1][1];
      tabla[i][1] = 3*tabla[i-1][1] +2*tabla[i-1][0];
    }
  }
  while(scanf("%lld", &n) && n!=-1){
    cout << getAns(n,0) << endl;
  }
  return 0;
}
