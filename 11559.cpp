#include <iostream>
using namespace std;
int main(int argc, char ** argv){
    int N,min,P,W,H,aux,auxB,camas[20],precios[20];
    while(cin >>P>>N>>H>>W){
        min = aux = 0;
        for(int i=0;i<20;i++){
            camas[i]=0;
            precios[i]=0;
        }
        for(int i=0;i<H;i++){
            cin >> precios[i];
            cin >> camas[i];
            for(int j=1;j<W;j++){
                cin >> aux;
                if(aux>camas[i])camas[i]=aux;
            }
        }
        aux=1;
        for(int i=0;i<H;i++){
            if(camas[i]>=P){
                if(aux){
                    aux = 0;
                    min = P*precios[i];
                } else{
                    auxB = P*precios[i];
                    if(min > auxB)
                    min = auxB;
                }
            }
        }
        if(aux || min > N){
            cout << "stay home" << endl;
        } else {
            cout << min;
        }
     }
     return 0;
}
