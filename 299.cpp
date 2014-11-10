
#include <iostream>
using namespace std;

int main ()
{
	long long int Case, A[52], Num, Count, Temp;
	cin>>Case;
	while ( Case ){
		cin>> Num;
		for (int i = 0; i < Num; i++)
			cin>>A[i];
		Count = 0;
		for (int i = 0; i < Num; i++){
			for (int j = i+1; j < Num; j++){
				if (A [i] > A [j]){
					Temp = A [i];
					A [i] = A [j];
					A [j] = Temp;
					Count++;
				}
			}
		}
		cout << "Optimal train swapping takes " << Count << " swaps.\n";

		Case--;
	}
	return 0;
}

