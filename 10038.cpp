#include <queue>
#include <iostream>
using namespace std;


int main(){
	priority_queue<int> q1;
	int n=0;
	int a,b;
	int res;
	while (cin >> n){
		cin >> b;
		for (int i = 1; i < n ; i++){
			a=b;
			cin >> b;
			if (a>b){
				res = a-b;
			}
			else {
				res = b-a;
			}
			q1.push(res);
		}
		bool jok = true;
		for (int i = n-1; i >0; i--){
			//cout << q1.top();
			if(q1.top()!=i) jok = false;
			q1.pop(); 
		}
		if(jok) cout << "Jolly" << endl;
		else cout << "Not jolly" << endl;

	}




	return 0;
}