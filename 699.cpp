#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
const int N = 100000;
int arr[N];
int maxi,mini;

void lee(int n){
  int a;
  cin >> a;

  if(a==-1)
    return;
  else{
    if(n>maxi) maxi=n;
    if(n<mini) mini=n;

    arr[n]+=a;
    lee(n-1);
    lee(n+1);
  }
}

int main(){
	int nC = 1;
	do{
		memset(arr, 0, sizeof(int)*N);
		maxi=mini=N/2;
		lee(N/2);
		if(arr[mini]!=0) cout << "Case " << nC++ << ":" << endl;
		for(int i=mini;arr[i]!=0;i++){
			cout << arr[i];
			if(i!=maxi)cout << " ";
			else cout << endl <<endl;
		}
	}while(arr[maxi]!=0);
	return 0;
}