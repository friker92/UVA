
#include <iostream>
using namespace std;

int main ()
{
	unsigned long long int N, Sum;
	bool fin = false;
	while (cin >> N && N != 0) {
		fin = false;
		while (!fin){
			fin = true;
		Sum = 0;
		while (N) {
			Sum += (N % 10);
			N/=10;
		}

		if (Sum/10==0)
			cout << Sum << endl;
		else {
			N = Sum;
			fin = false;
		}
		}
	}

	return 0;
}

