#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<vector>
#include<cmath>
#define eps 0.0004
using namespace std;

struct rectan{
  double a;
  double b;
  double x;
  double y;
};

rectan rect[11];

int leerR(){
  int n=0;
  char c;
  while(cin >> c && c!='*'){
    cin >> rect[n].a >> rect[n].b >> rect[n].x >> rect[n].y;
    n++;
    // cout << "rectan: " << n << endl;
  }
  return n;
}
bool isIn(int i, double a, double b){
  return (rect[i].a<a && rect[i].x>a)&&(rect[i].b>b &&rect[i].y<b);
}

int main(){
  int p = 1;  
  double a,b;
  int n = leerR();
  bool alguno = false;
  while(cin >> a >> b ){
    if(fabs(a-9999.9)<=eps && abs(b-9999.9)<=eps)break;
    alguno = false;
    for(int i = 0; i < n; i++){
      if(isIn(i,a,b)){
	alguno = true;
	cout << "Point " << p << " is contained in figure " << i+1 <<  endl;
      }
    }
    if(!alguno){
      cout << "Point " << p << " is not contained in any figure" << endl;
    }
    p++;
  }


  return 0;
}
