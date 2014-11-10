#include <iostream>
using namespace std;
int main()
{
    long n, total, count, avg, a [105], set = 0, i;
    while(cin >> n){
        total = 0;
		count = 0;
        if(n == 0)
            return 0;
        for(i = 0; i < n; i++) {
            cin >> a[i];
            total += a [i];
        }
        avg = total / n;
        for(i = 0; i < n; i++){
            if( a[i] > avg)
                count += (a [i] - avg);
        }
        cout << "Set #" << ++set << endl;
       cout << "The minimum number of moves is " << count << ".\n\n";
    }
    return 0;
}
