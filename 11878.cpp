#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

int main(){
  int sum=0;
  char str[50];
  int a,b,c;
  char s;
  while(gets(str)){
    if(sscanf(str,"%d%c%d=%d",&a,&s,&b,&c)!=4)
      continue;
    if(s=='+'&&a+b==c)sum++;
    if(s=='-'&&a-b==c)sum++;
  }
  cout << sum << endl;
	return 0;
}
