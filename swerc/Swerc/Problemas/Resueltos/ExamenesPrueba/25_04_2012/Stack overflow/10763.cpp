#include<iostream>
using namespace std;

#include <algorithm>
#include<vector>
#include <complex>


struct par
{
	int a;
	int b;

	par(int n1, int n2)
	{
		this->a=n1;
		this->b=n2;
	}
};


bool operator < (const par& a, const par& p)
{
	return a.a<p.a;
}

bool operator == (const par& a, const par& p)
{
	return a.a==p.a && a.b==p.b;
}

bool operator <= (const par& a, const par& p)
{
		return (a<p || a==p);
}

vector<par > v1;
vector<par > v2;

bool read();
void init();
void solve();

int main()
{
	init();

    while(read())
    {
        solve();
		init();
    }
    return 0;
}


bool read()
{
    int aux;
    cin >> aux;

    if(aux==0)
        return false;

    int n1,n2;

    for(int i=0; i<aux; i++)
    {
        cin >> n1 >> n2;

        if(n2<n1)
			v2.push_back(par(n2,n1));
        else
            v1.push_back(par(n1,n2));
    }


    return true;
}


void init()
{
    v1=vector<par>();
    v2=vector<par>();
}

void solve()
{
    stable_sort(v1.begin(), v1.end());
	stable_sort(v2.begin(), v2.end());
	
	if(v1==v2)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}