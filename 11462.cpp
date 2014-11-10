#include<algorithm>
#include<iostream>
using namespace std;
long int a[2000005],i;
int main()
{
	int n;
	cin >> n;
    while (n!=0)
    {
        for (i=0;i<n;i++)
        {
            cin >> a[i];
        }
        sort(a,a+n);
        for (i=0;i<n;i++)
        {
            cout << a[i];
            if (i<(n-1))
                cout << " ";
        }
        cout << endl;
		cin >> n;
    }
    return 0;
}