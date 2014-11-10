#include <iostream>
#include <string>
using namespace std;

int main ()
{
    int T; cin>>T;
    int cases = 0;

    while ( T-- ) {
        int n,  k;
        string str;
        int vis [31];
        for(int i=0; i <31;i++)vis[i]=0;
        int ret = 0;
		cin >> n >> k;
		cin >> str;
        for ( int i = 0; i < n; i++ ) {
            if (vis [str[i] - 'A'] ) ret++;
            vis [str [i] - 'A']++;
            if ( i - k >= 0 ) {
                vis [str [i - k] - 'A']--;
            }
        }
		cout << "Case " << ++cases << ": "<< ret << endl;
    }
	return 0;
}

