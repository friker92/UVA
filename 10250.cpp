#include <iostream>
#include <stdio.h>
#include <cmath>
#define eps 1e-10
using namespace std;

int main(){
  double pen,a,b,x,y,c,d,e,f,m,n,dx,dy;
  while(cin>>a>>b>>x>>y){
    m=(a+x)/2;
    n=(b+y)/2;
    dx=abs(m-a);
    dy=abs(n-b);
    pen=-1;
    if(abs(a-x)<eps && abs(b-y) < eps){
      printf("Impossible.\n");
      continue;
    }
      printf("%.10f %.10f %.10f %.10f\n",-b+n+m,a-m+n,-y+n+m,x-m+n);
  }
	return 0;
}
