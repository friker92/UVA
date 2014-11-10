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
#include <set>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<ll,ll> ll_ll;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector<ll> vll;
typedef vector<vi> vvi;

bool mas7 = false;
map<string,int> day[7];
map<string,int> tot;
int hoy=0;

struct orden{
  bool operator()(pair<string,int> a,pair<string,int>b)const
  {
    if(a.second >b.second)
      return true;
    else if(a.second == b.second)
      return a.first<b.first;
    return false;
  }
};

void resta(){
  int man=(hoy);//+1)%7;
  if(mas7){
    map<string, int>::iterator itaux;
    for(map<string,int>::iterator it=day[man].begin();it!=day[man].end();it++)
      {
	itaux=tot.find((*it).first);
	(*itaux).second-=(*it).second;
	if((*itaux).second==0){
	  tot.erase(itaux);
	}
      }
	  day[man] = map<string,int>();
  }
}

void rtext(){
  resta();
  string w;
  while(cin>>w){
    if(w=="</text>")break;
    if(w.length()<4)continue;
    map<string,int>::iterator it1,it2;
    it1=day[hoy].find(w);
    it2=tot.find(w);

    if(it1==day[hoy].end())
      day[hoy].insert(make_pair(w,1));
    else
      (*it1).second++;

    if(it2==tot.end())
      tot.insert(make_pair(w,1));
    else
      (*it2).second++;
  }
  hoy++;
  hoy%=7;
  if(hoy==0)mas7=true;
}

void top(){
  int query;
  scanf("%d",&query);

  set<pair<string,int>, orden> final;
  for(map<string,int>::iterator it=tot.begin(); it!=tot.end();it++){
    final.insert(*it);
  }

  int nUlt = 0;
  set<pair<string,int> >::iterator it=final.begin();

  printf("<top %d>\n",query);
  for(;it!=final.end() && query!=0;it++){
    nUlt=(*it).second;
	printf ("%s %d\n",(*it).first.c_str(),(*it).second);
    query--;
  }

  while(it!=final.end() && (*it).second==nUlt){
  	printf ("%s %d\n",(*it).first.c_str(),(*it).second);
   // cout << (*it).first << " " << (*it).second << endl;
    it++;
  }

  puts("</top>");
}

int main(){
  string w;
  hoy=0;
  while(cin >> w){
    if(w=="<text>")
      rtext();
    else{
      top();
	  //scanf("%s",&w);
      cin >> w;
    }
  }
  return 0;
}
