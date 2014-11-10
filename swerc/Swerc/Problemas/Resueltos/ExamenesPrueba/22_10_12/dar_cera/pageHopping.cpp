/* 
 * Problem: 821
 */

#include <cstdlib>
#include <cstring>

#include <iomanip>
#include <iostream>

using namespace std;


int main(int argc, char** argv) {
    bool links[100][100];
    
    int n1,n2,N=0;

    while((cin >> n1 >> n2) && (n1||n2) ){
        N++;
        memset(links,0,sizeof(bool)*100*100);
        
        do links[n1-1][n2-1]=true;
        while((cin >> n1 >> n2) && (n1||n2) );          
       
        int cn=100; //cantidad de nodos

        int path[100][100];
        for(int i=0;i<100;i++)
            for(int j=0;j<100;j++)
                path[i][j]= links[i][j]?1:9999;

        for(int i = 0; i < cn; i++)
            path[i][i] = 0;

        for(int k = 0; k < cn; k++)
            for(int i = 0; i < cn; i++)
                for(int j = 0; j < cn; j++){
                        int dt = path[i][k] + path[k][j];
                        if(path[i][j] > dt)
                            path[i][j] = dt;
                    }
        int acum=0,num=0;
        
        for(int i=0;i<100;i++){
            for(int j=0;j<100;j++){
                if(path[i][j]!=9999){
                    if(path[i][j]!=0)num++;
                    acum+=path[i][j];
                }  
            }
        }
        
        cout << "Case " << N <<": average length between pages = " 
             << fixed << setprecision(3) << (double)acum / num 
             << " clicks" << endl;
        }  
    return 0;
}

