#include <iostream>
#include <algorithm>

using namespace std;

int arr[3];

void solve(){
  cin >> arr[0] >> arr[1] >> arr[2];
  sort(arr,arr+3);

  if(arr[2] < arr[1]+arr[0])
    cout << "OK" << endl;
  else
    cout << "Wrong!!" << endl;
}

int main(){
  int nCasos;
  cin >> nCasos;
  while(nCasos--){
    solve();
  }

  return 0;
}
