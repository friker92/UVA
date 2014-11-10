#include<iostream>
using namespace std;
int main()
{
    int N,e;
    while (cin>>e&& e!=0)
    {
		N=0;
            while (e>=3)
            {
                e=e-2;
				N++;
            }
			if(e==2)N++;
          cout << N << endl;
    }
    return 0;
}