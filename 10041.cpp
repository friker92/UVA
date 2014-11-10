
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int cases,R,t,M,below,above,here,sum;
    cin>>cases;
    vector<int> family;
    while (cases--)
    {
          int street[30001]={0};
          cin>>R;
          for ( int i=0;i<R;i++)
          {
              cin>>t;
              family.push_back(t);
              street[t]++;
          }
          sort(family.begin(),family.end());
          sum=0;
          here=family[family.size()/2];
          for ( int i=0; i<R; i++ )
          {
			  if(family[i]>here) sum += (family[i]-here);
			  else sum += here-family[i];
          }
          cout<<sum<<endl;
          family.clear();
    }
    return 0;
}