#include <iostream>
using namespace std;



int main(int argc, char** argv)
{
    int n, m;

    long matrix[101][101];

    for(int i=0; i<101; i++)
        matrix[0][i]=0;
    
    matrix[0][0]=1;
    
    for(int i=1; i<101; i++) for(int j=0; j<101; j++)
        matrix[i][j]=((j==0)? 1 :matrix[i-1][j]+ matrix[i-1][j-1]);

    cin>>n>>m;

    while(n!=0)
    {
        cout<<n<<" things taken "<<m<<" at a time is "<<matrix[n][m]
                <<" exactly."<<endl;

        cin>>n>>m;
    }

    return 0;
}

