#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
    bool primos[1000000];
    for(int i=0; i<1000000; i++)
    {
        primos[i]=true;
    }

    primos[0]=false;
    primos[1]=false;
    
    for(int i=2; i<1000000; i++)
    {
        if(primos[i])
        {
            for(int j=i+i; j<1000000; j+=i)
                primos[j]=false;
        }
    }

    int n;
    int a;

    cin>>n;

    while(n!=0)
    {
        for(int i=2; i<n; i++)
        {
            if(primos[i] && primos[n-i])
            {
                a=i;
                break;
            }
        }

        cout<<n<<" = "<< a <<" + "<<n-a<<endl;

        cin>>n;
    }

    return 0;
}

