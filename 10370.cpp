#include <iostream>
#include <queue>
#include <iomanip>
using namespace std;

int main(){
	int c,n,aux,a,cont;
	cin>> c;
	for (int kk=0;kk<c;kk++){
		cont = 0;
		double avg=0.0;
		cin >> n;
		priority_queue<int> v;
		for(int i=0;i<n;i++){
			cin >> aux;
			avg += double(aux);
			v.push(aux);
		}
		avg = avg/double(n);
		//cout << avg << endl;
		a=v.top();
		v.pop();
		while (a> avg){
			a=v.top();
			v.pop();
			cont++;
		}
		//cout << cont;
		double per;
		per =  (100.0/double(n)) * double(cont);
		cout << setprecision(3) << fixed << per << "%" << endl;
	}
	return 0;
}