#include <iostream>
using namespace std;

bool cart[53];
int a,b,c,x,y,z;
int calcula(int z){
	while(cart[z])z++;
	if(z==53)z=-1;
	return z;
}

void read(){
	cart[a]=cart[b]=cart[c]=cart[x]=cart[y]=false;
	a=b=c=x=y=0;
	int tmp;
	int i=3;
	while(i--){
		cin >> tmp;
		cart[tmp]=true;
		if(tmp > a) { c=b;b=a;a=tmp;}
		else if(tmp > b) {c=b;b=tmp;}
		else c=tmp;
	}
	i=2;
	while(i--){
		cin >> tmp;
		cart[tmp]=true;
		if(tmp > x) { y=x;x=tmp;}
		else y = tmp;
	}
}

int main(){
	int i = 0;
	for( i = 0; i < 53; ++i){
		cart[i]=false;
	}
	
	read();
	while(!(!a&&!b&&!c&&!x&&!y)){
		if(x <= b || (x<=a && y<=b)) z=-1;
		else if (x >= a && y >= a) z= calcula(1);
		else if (x >= a && y <= b) z= calcula(a);
		else if(y>=b) z=calcula(b);
		cout << z << endl;

		read();
	}

	return 0;
}