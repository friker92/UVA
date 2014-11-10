#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool ordenabs(int a, int b){
	if(a<0) a*=-1;
	if(b<0) b*=-1;
	if(a<=b) return true;
	else return false;
}
int main (){
	int p,n,num,aux;
	bool next,last;
	cin >> p;
	while(p--){
		vector<int> pisos;
		cin >> n;
		for (int i=0;i<n;i++){
			cin >> aux; 
			pisos.push_back(aux);
		}
		sort(pisos.begin(),pisos.end(),ordenabs);
		num=1;
		last=pisos[0]<0?false:true;
		for(int i=1;i<n;i++)
        {
            next=pisos[i]>0?true:false;
            if(next!=last) num++;
            last=next;
        }
		cout << num << endl;
	}
	return 0;
}