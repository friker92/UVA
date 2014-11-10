#include <iostream>
#include <cstdio>
using namespace std;

int main(){
  long int c,n,m,d;
  while(scanf("%ld %ld",&n,&m)==2 && !(n==0 && m==0)){
    c=d=1;
    for(int i = n; i>n-m;i--){
      if(i!=0)c*=i;
    }
    for(int i = 1;i<m;i++){
      d*=i;
    }
    c=c/d;
    printf("%ld things taken %ld at a time is %ld exactly.\n",n,m,c);
  }

  return 0;
}
