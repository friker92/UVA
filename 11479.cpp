#include <iostream>
using namespace std;

int main(){
	long long int a,b,c,x,y;
	int T,cont=1;
	cin >> T;
	while(T--){
		cin >> a >> b >> c;
		cout << "Case " << cont << ": ";
		if ((a>b) && (a>c)) {
			if (b>c)   {x=a;a=c;c=x;}
			else   {x=a;a=b;b=c;c=x;} 
		}
		if ((b>a) && (b>c))   {
			if (a>c)   {x=c;c=b;b=a;a=x;}  
			else   {x=b;b=c;c=x;}  
		}
		if ((c>a) && (c>b))   {
			if (a>b)   {x=a;a=b;b=x;}  
		}
		if( a + b <= c ) cout << "Invalid"; // Sum of two smaller sides is greater than larger sides.
		else if (a == b && a == c ) cout << "Equilateral"; // Equilateral, if all three sides r same in value
		else if (a == b || a == c || b == c ) cout << "Isosceles"; // Isosceles, if any two sides r same in value
		else if (a !=b && b != c && a !=c ) cout << "Scalene"; // Scalene, if all three sides r distinct
		cout << endl;
		cont++;
	}
	return 0;
}