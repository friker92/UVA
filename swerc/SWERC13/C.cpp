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
typedef pair<double,int> di;
typedef pair<int,double> id;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector<ll> vll;
typedef vector<vi> vvi;

vector <vector<id> > AdjList;
vector< pair<int, ii > > EdgeList;

vi parent;

struct Point{
  int x,y,z;
};

double euclD(Point p, Point q){
  return sqrt(abs(p.x-q.x)*abs(p.x-q.x)+ abs(p.y-q.y)*abs(p.y-q.y) +
	      abs(p.z-q.z)*abs(p.z-q.z));
}

vector <double> d;

void dijkstra(int s){
  vector <double> dist(AdjList.size(),10000000000.0);dist[s]=0.0;
  priority_queue<di, vector<di>, greater<di> > pq;
  pq.push(di(0.0,s));
  while(!pq.empty()){
    di front=pq.top();pq.pop();
    double d=front.first; int u=front.second;
    if(d>dist[u])continue;
    for(int j=0;j<AdjList[u].size();j++){
	id v=AdjList[u][j];
	if(dist[u]+v.second<  dist[v.first]){
	  dist[v.first]=dist[u]+v.second;
	  pq.push(id(dist[v.first],v.first));
	  parent[v.first]=u;
	}
      }
  }
}


int main(){
  int n,m;
  scanf("%d %d",&n, &m);
  AdjList=vector<vector<id> > (n);
  vector<Point> points(n);
  for(int i=0;i<n;i++){
    int x,y,z;
    scanf("%d %d %d",&x,&y,&z);
    Point p;
    p.x=x;p.y=y;p.z=z;
    points[i]=p;
  }

  for(int i=0; i<m;i++){
    int u,v;
    cin >> u >> v;
    string s;
    cin >> s;
    if(s[0]=='w' || s[0]=='s'){
      AdjList[u].push_back(make_pair(v,euclD(points[u], points[v])));
      AdjList[v].push_back(make_pair(u,euclD(points[u], points[v])));
    }
    if(s[0]=='l'){
      AdjList[u].push_back(make_pair(v,1.0));
      AdjList[v].push_back(make_pair(u,1.0));
    }
    if(s[0]=='e'){
      AdjList[u].push_back(make_pair(v,1.0));
      AdjList[v].push_back(make_pair(u,3.0*euclD(points[u], points[v])));
    }
  }
  int queries;
  scanf("%d",&queries);
  while(queries--){
    stack<int> way;
    int src,dst;
    scanf("%d %d", &src,&dst);
    parent = vi(n,-1);
    dijkstra(src);
    int aux = dst;
    while(aux!=src){
      way.push(aux);
      aux=parent[aux];
    }
    cout << src;
    while(!way.empty()){
      cout << " " << way.top(); way.pop();
    }
    cout <<endl;
  }
  return 0;
}
