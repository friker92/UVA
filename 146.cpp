
#include <stdio.h>
#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main () 
{
	string A ;
	cin >> A;
	while (A!="#") {
		if (next_permutation (A.begin(),A.end()))
			cout << A << endl;
		else
			cout << "No Successor\n";
		cin>>A;
	}

	return 0;
}

