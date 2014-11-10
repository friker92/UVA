#include<iostream>
#include<limits.h>
#include<queue>
using namespace std;

//variables globales
bool matriz[20][20];

//queue<int> cola = queue<int>();

//tipos y funciones
bool readMatriz();
void solve(int testSet);

int main()
{
    int testSet=0;
    while(readMatriz()){
        testSet++;
        solve(testSet);
    }
    return 0;
}

bool readMatriz(){
    //iniciamos los costes
/*    for(int i=0; i<20; i++)
        costes[i]=INT_MAX;
*/    //iniciamos la diagonal
    for(int i=0; i<20; i++)
        for(int j=0; j<20; j++)
        matriz[i][j]=false;
    
    //leemos la adyacencias
    for(int i=0; i<19; i++){
        int n;
        if(!(cin >> n)) //numero de ady
            return false; 
        for(int j=0; j<n; j++){
            int aux;
            cin >> aux;
            matriz[i][aux-1]=true;
            matriz[aux-1][i]=true;
        }
    }
    
    return true;
}

void solve(int testSet){
    int numCasos;
    cin >> numCasos;
    if(testSet!=1)
        cout << endl;
    if(numCasos!=0)
        cout << "Test Set #" << testSet << endl ;
    
    int costes[20][20];
    for(int i=0; i<20; i++)
        for(int j=0; j<20; j++){
            if(matriz[i][j])
                costes[i][j]=1;
            else
                costes[i][j]=999;
        }
 
        for(int i = 0; i < 20; i++)
                costes[i][i] = 0;
 
        for(int k = 0; k < 20; k++)
                for(int i = 0; i < 20; i++)
                        for(int j = 0; j < 20; j++){
                                int dt = costes[i][k] + costes[k][j];
                                if(costes[i][j] > dt)
                                        costes[i][j] = dt;
                        }
    for(int i=0; i<numCasos; i++){
        int inicio,fin;
        cin>>inicio >>fin;
              
        //imprimimos la solucion
        cout << inicio << " to " << fin << ": " << costes[inicio-1][fin-1] << endl;
    }
}