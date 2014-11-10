/*Problem ID:11207
url:http://uva.onlinejudge.org/external/112/11207.html
Author: luisma
Date:15/10/12
*/
#include <iostream>
using namespace std;

//variables globales
float tamMejor;
unsigned int casoMejor;

unsigned int casoAct;
float largo;
float corto;

//tipos y funciones
void init();
void read();
void solve();

int main()
{
	int N=0;
	cin >> N;
	while(N!=0){
		init();
		for(int i=0; i<N; i++){
			read();
			solve();
		}
		cout << casoMejor << endl;
		cin >> N;
	}

	return 0;
}

void solve(){
	casoAct++; //aumentamos el numero de caso en el que estamos
	float tamAct=0;
	//caso 1
	if(largo/corto>=4)
		tamAct=corto;
	else if(largo/4>corto)
		tamAct=corto;
	else if(largo/4>corto/2)
		tamAct=largo/4;
	else
		tamAct=corto/2;
	

	//asignamos
	if(tamAct>tamMejor){
		casoMejor=casoAct;
		tamMejor=tamAct;
	}	

}
void read(){
	int a,b;
	cin >> a >> b;

	if(a>b){
		largo=a;
		corto=b;
	}
	else {
		largo=b;
		corto=a;
	}
}

void init(){
	casoMejor=0;
	tamMejor=0;
	casoAct=0;
}