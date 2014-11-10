#include <iostream>
#include <queue>
using namespace std;
struct compare 
{
  bool operator()(const long long int& l, const long long int& r) 
  {
      return l > r;
  }
};
 
int main(){
	priority_queue<long long int,vector<long long int>,compare> pq;
	long long int n,m;
	long long int aux,sum=0;
	cin >> n;
	while(n!=0){
		sum=0;
		for(int i = 0; i <n;i++){
			cin >> m;
			pq.push(m);
		}
		for(int i = 0; i<n-1;i++){
			aux = 0;
			aux = pq.top();
			pq.pop();
			aux += pq.top();
			pq.pop();
			sum += aux;
			pq.push(aux);
		}
		pq.pop();
		if(n==1) sum = n;
		cout << sum << endl;
		cin >> n;
	}
	return 0;

}