#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	int a=0,A,b=0,B,c=0,C,M,d=0,D,i=1;
    int arr[5845];
	arr[0]=1;
    string str;
	while(i<5845)
    {
        A=arr[a]*2;
        B=arr[b]*3;
        C=arr[c]*5;
        D=arr[d]*7;
        M=min(A,min(B,min(C,D)));
        if(A==M)
        {
            arr[i++]=A;
            a++;
        }
        else if(B==M)
        {
            arr[i++]=B;
            b++;
        }
        else if(C==M)
        {
            arr[i++]=C;
            c++;
        }
        else if(D==M)
        {
            arr[i++]=D;
            d++;
        }
        if(i>=2)
        if(arr[i-1]==arr[i-2])i--;
    }

	cin >>M;
	while(M!=0)
    {
        a=arr[M-1];
        b=M%100;
		cout<<"The "<<M;
        if(b<=19 && b>=11) cout<<"th";
        else if(M%10==1) cout<<"st";
        else if(M%10==2) cout<<"nd";
        else if(M%10==3) cout<<"rd";
        else cout<<"th";
        cout <<" humble number is "<<arr[M-1]<<"."<<endl;
		cin>>M;
    }
	return 0;
}