
#include<iostream>

using namespace std;
int main()
{
    int N;
    cout<<"PERFECTION OUTPUT\n";
    bool abundant;
	cin >> N;
    while(N)
    {
        abundant=false;
        long long unsigned int sum=0;
        for(int i=1;i<N;i++)
        {
            if(N%i==0)
            {
                sum+=i;
                if(sum>N)
                {
                    abundant=true;
                    i=N;
                }
            }
        }
		if(N <10000) cout << " ";
		if(N <1000) cout << " ";
		if(N<100) cout << " ";
		if(N<10) cout << " ";
        if(abundant)
        cout << N << "  ABUNDANT\n";
        else if(sum==N)
        cout << N << "  PERFECT\n";
        else
        cout << N << "  DEFICIENT\n";
		cin >> N;
    }
    cout<<"END OF OUTPUT\n";
    return 0;
}