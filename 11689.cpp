#include<iostream>
using namespace std;
int main()
{
    int N,e,f,c,a,b,d,i;
    while (cin>>N)
    {
        for (i=0;i<N;i++)
        {
			cin >> e >> f >> c;
            e+=f;
            b=0;
            while (e>=c)
            {
                a=e/c;
                b=b+a;
                e=a+(e%c);
            }
          cout << b << endl;
        }
    }
    return 0;
}