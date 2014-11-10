/* 
 * File:   10069.cpp
 * Author: usuario_local
 *
 * Created on 15 de octubre de 2012, 19:11
 */

#include <iostream>
#include <string>

using namespace std;


void solve();

int main()
{
    int numCases;
    
    cin>>numCases;
    
    for(int i=0; i<numCases;i++)
    {
        solve();
    }
    
    return 0;
}

void solve()
{
    string larga,corta;
    
    int array[10000][100];
    
    cin>>larga;
    cin>>corta;
    
    int n=larga.size();
    int m=corta.size();
    
    for(int i=0; i<m; i++)
    {
        if(larga[0]==corta[i])
            array[0][i]=1;
        else
            array[0][i]=0;
    }
    
    for(int i=1; i<n; i++)
    {
        if(larga[i]==corta[0])
            array[i][0]=array[i-1][0]+1;
        else array[i][0]=array[i-1][0];
    }
    
    for(int i=1; i<n;i++)
    {
        for(int j=1; j<m; j++)
        {
            if(larga[i]==corta[j])
                array[i][j]=array[i-1][j]+array[i-1][j-1];
            else
                array[i][j]=array[i-1][j];
        }
    }
    
    cout<<array[n-1][m-1]<<endl;
}