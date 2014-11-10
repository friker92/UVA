#include <iostream>
using namespace std;

void intersectar(int r1[],int r2[],int result[]){
	result[0] = 0;
    result[1] = 0;
    result[2] = 0;
    result[3] = 0;  
	if(r1[0]<=r2[2] && r1[1] <= r2[3] && 
     r2[0]<=r1[2] && r2[1] <= r1[3]) {
		result[0] = max(r1[0],r2[0]);
		result[1] = max(r1[1],r2[1]);
		result[2] = min(r1[2],r2[2]);
		result[3] = min(r1[3],r2[3]);
  }
}

int main(){
	int n,cont=1,sec,aux,msec=0,nsec;
	int r1[4];
	int r2[4],ri[4];
	cin >> n;
	while(n--){
		cin >> r1[0] >> r1[1] >> r1[2] >> r1[3] >> r2[0] >> r2[1] >> r2[2] >> r2[3];
		intersectar(r1,r2,ri);
		msec=(ri[0]-ri[2])*(ri[1]-ri[3]);
		sec=(r1[0]-r1[2])*(r1[1]-r1[3]);
		aux=(r2[0]-r2[2])*(r2[1]-r2[3]);
		if(sec<0)sec*=(-1);
		if(aux<0)aux*=(-1);
		sec= sec+aux;
		sec=sec-msec-msec;
		nsec=10000-msec-sec;
		cout << "Night " << cont << ": " << msec << ' ' << sec << ' ' << nsec << endl;
		cont++;
	}

	return 0;
}