/*########################
 *Promblema Nº: 514
 * Titulo: Rails
 * Url: http://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=455
 * Autor: Luisma
 * Fecha: 7/03/12
 * Comentarios: Es el ejercicio que viene en las hojas de EDA.
 *              Time limit: 3.00 s
 * #######################
 */


#include <iostream>
using namespace std;

#include <queue>
#include <stack>


//Variables globales
unsigned int N;
stack<int> estacion;
queue<int> tren;

void solve(queue<int> op);
void init();
void readAndSolve();

int main()
{
    cin >> N;
    while(N!=0)
    {
        readAndSolve();
        
        cin >> N;
    }
    
    
    
    return 0;
}

void init() //vacia la estacion y prepara el tren
{
    //vacia la estacion
    estacion=stack<int>();
    
    //vacia el tren
    tren=queue<int>();
    
    //Rellena el tren
    for(int i=0; i<N; i++)
        tren.push(i+1);   
}

void readAndSolve()
{
    queue<int> op; //Operaciones que hay que hacer
    int aux;
    
    cin >> aux;
    op.push(aux);

    while(op.front()!=0)
    {
        //leemos las operaciones que hay que hacer
        for(int i=0; i<N-1; i++)
        {
            cin >> aux;
            op.push(aux);
        }

        init();
        solve(op);
        
        //SIGUIENTE RONDA
        //vaciamos la pila
        op=queue<int>();
        
        //leemos el primero
        cin >> aux;
        op.push(aux);
    }
    
    cout << endl;
    
}

void solve(queue<int> op)
{ 
    while(!op.empty())
    {
        //Buscamos si esta en el tren
        if(!tren.empty() && tren.front()==op.front())
            tren.pop();
        //Buscamos si esta en la estacion
        else if(!estacion.empty() && estacion.top()==op.front())
            estacion.pop();
        //Metemos el tren en la estacion hasta que encontremos el vagon
        else
        {
            while(!tren.empty() && tren.front()!=op.front())
            {
                estacion.push(tren.front());
                tren.pop();
            }
            
            //Si el tren esta vacio, MAL
            if(tren.empty())
            {
                cout << "No" << endl;
                return;
            }
            //Si no, quitamos el vagon del tren (esta el primero)
            tren.pop();
        }
        
        op.pop();
        
    }
    
    cout << "Yes" << endl;
}
