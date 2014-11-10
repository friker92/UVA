#include <stdio.h>
#include <iostream>
using namespace std;
unsigned  long long int dp[51][2];
unsigned long long int nSequence(int n,int last)
{

 if(dp[n][last]!=-1)
  return dp[n][last];
 else if(last)
  return dp[n][last] =nSequence(n-1,0);
 else
  return dp[n][last] = nSequence(n-1,1) + nSequence(n-1,0);
}
int main()
{
 int i,c,cc;
 /*for(i=0;i<51;i++)
  dp[i][0]=dp[i][1]=-1;
 dp[1][0]=2;
 dp[1][1]=1;*/
 cc = 1;
 scanf("%d",&c);/*
 for(int i = 1; i < 52;i++){
	cout << nSequence(i,0) << ",";
	if(!i%10) cout << endl;
 }*/
 unsigned long long int sol[]={0,2,3,5,8,13,21,34,55,89,144,233,377,610,987,1597,2584,4181,6765,10946,17711,28657,46368,75025,121393,196418,317811,514229,832040,1346269,2178309,3524578,5702887,9227465,14930352,24157817,39088169,63245986,102334155,165580141,267914296,433494437,701408733,1134903170,1836311903,2971215073,4807526976,7778742049,12586269025,20365011074,32951280099};
 
 while(c--)
 {
  scanf("%d",&i);
  printf("Scenario #%d:\n",cc++);
	printf("%llu\n\n",sol[i]);
  //printf("%llu\n\n",nSequence(i,0));
 }
 return 0;
}