/* 
 * File:   b.cpp
 * Author: usuario_local
 *
 * Created on 12 de diciembre de 2012, 17:34
 */

#include <cstdlib>
#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
#include <vector>
#include <queue>
#include <stack>
#include <map>
using namespace std;

/*
 * 1
4
0.0 0.0 1.0 
-1.5 -1.5 0.5
1.5 1.5 0.5
-2.0 2.0 3.5

 */

int main(int argc, char** argv) {
    int n, m, num, max=0;
    cin >> m;
    for (int i=0;i<m;i++){
        cin  >> n;
        const int w=n;
        float d[4][100];
        for (int j=0;j<n;j++){
            cin >> d[0][j] >> d[1][j] >> d[2][j];
            d[3][j]=-1;
        }
        for (int j=0;j<n;j++){
            num=0;
            if (d[3][j]<0){
                d[3][j]=0;
                for (int l=j;l<n;l++){
                    if (d[3][l]==0)
                        for (int k=j;k<n;k++)
                            if (l!=k && d[3][k]<0 && (d[2][l]+d[2][k])*(d[2][l] + d[2][k])>((d[1][l]-d[1][k])*(d[1][l]-d[1][k])+(d[0][l]-d[0][k])*(d[0][l]-d[0][k])) && (d[2][l]-d[2][k])*(d[2][l] - d[2][k])<((d[1][l]-d[1][k])*(d[1][l]-d[1][k])+(d[0][l]-d[0][k])*(d[0][l]-d[0][k]))){
                                num++;
                                d[3][k]=0;
                
                            
                                }
                    d[3][l]==1;
                }
                for (int k=j;k<n;k++)
                    if (d[3][k]=0)
                        d[3][k]=1;
            } 
            if (max<num)
                max=num;
        }
        if(max!=0)cout << "The largest component contains " << max+1 << " rings.\n";
        else cout << "The largest component contains " << max+1 << " ring.\n";
    }
    return 0;
}


