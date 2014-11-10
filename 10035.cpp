
#include<iostream>
using namespace std;
int main()
{
    long long unsigned m,n,carry,count;
	cin>>m>>n;
    while (!(m==0 && n==0))
    {
          count=0,carry=0;
          while (m>0 || n>0)
          {
                carry=m%10+n%10+carry;
                if(carry>=10) count++;
                carry/=10;
                m/=10;
                n/=10;
          }
          if ( count)
          {
               if( count==1)
               cout<< "1 carry operation.\n";
               else
               cout<<count<<" carry operations.\n";
          }
          else
          cout<<"No carry operation.\n";
		  cin>>m>>n;
    }
    return 0;
}