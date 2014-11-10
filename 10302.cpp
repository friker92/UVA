#include <iostream>
using namespace std;

int main(){
  unsigned long long int n;
  while(cin >> n){
    cout <<  n*(n+1)*n*(n+1)/4 << endl;
  }
  return 0;
}
