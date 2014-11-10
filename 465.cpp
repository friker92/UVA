#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main ()
{
	long double x, y;
	string a,b;
	char c;
	while ( cin>> a >> c >> b) {
		x = atof (a.c_str());
		y = atof (b.c_str());
		cout << a << " " << c << " " << b << endl;

		if ( x > 2147483647 )
			cout << "first number too big\n";
		if ( y > 2147483647 )
			cout << "second number too big\n";
		if ( c == '+' ) {
			x = x + y;
			if ( x > 2147483647 )
			cout << "result too big\n";
		}
		else {
			x = x * y;
			if ( x > 2147483647 )
			cout << "result too big\n";
		}
	}
	return 0;
}
