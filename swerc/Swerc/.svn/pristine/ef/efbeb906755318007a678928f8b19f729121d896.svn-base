/* 
 * File:   bicoloring.cpp
 * Author: Jose Pablo Cabeza Garcia
 * Problem: 10004-Bicoloring (UVA)
 * 
 * Dado un grafo conexo, decidir si es bicolorable o no
 * La entrada es en forma de:
 * n //Nodos
 * m //Aristas
 * a1 b1 //El nodo a1 esta conectado con el b1
 * a2 b2
 * ...
 * am bm
 * Termina cuando recibe n=m=0 
 */

#include <cstdlib>
#include <cstdio>
#include <vector>
#include <queue>
using namespace std;

/*Estructura que represesta un nodo con
 * id: identificador unico del id
 * visited: true si ya a sido coloreado o false en caso contrario
 * color: el color asignado de una paleta de dos colores
 */
struct node{
    int id;
    bool visited;
    bool color;
    node(int i=0){
        id=i;
        visited=color=false;
    }
};

/*Estructura qeu uso para la cola de la busqueda en anchura, contiene
 * pnode: un puntero al nodo que se tiene que investigar
 * expectedColor: el color que se supone que deberia de tener este, y por consiguiente
 *      los adyacentes deberia tener !expectedColor
 */
struct nqueue{
    node* pnode;
    bool expectedColor;
    nqueue(node* pnode=0,bool Color=0){
        this->pnode=pnode;
        expectedColor=Color;
    }
};


int main(int argc, char** argv) {
    int n,m;
    int aux1,aux2,ind;
    vector<vector<node*> > nodes; //Lista de adyacencia para representar el grafo
    vector<node> cont; //Vector que contiene los nodos
    queue<nqueue> q; 
    
    char c;
    
    bool ok=true; //Booleano que representa que el grafo es bicolorable
    
    while(scanf("%i",&n) && n){        
        scanf("%d",&m);
        
        //Creo los nodos y las entradas de la lista de adyacencia
        for(int i=0;i<n;i++){
                cont.push_back(node(i));
                nodes.push_back(vector<node*>() );
        }
        
        //Voy leyendo las arista y las incluyo en la lista de adyacencia
        while(m--){
            scanf("%i%i",&aux1,&aux2);
            nodes[aux1].push_back(&cont[aux2]);
            nodes[aux2].push_back(&cont[aux1]);            
        }
        
        //Incluyo el primer elemento en la cola, con color T
        q.push(nqueue(&cont[0],true));
        
        /*Implemento un algoritmo voraz de coloreado de vertices.
         *Cada nodo que sale de la cola se le pone visited=true y
         *color=expectedColor
         *
         *Por cada nodo adyacente comparo si tiene otro color al de
         *este nodo, si no es asi pongo ok=false. Ademas, cada nodo
         * no visitado es introducido en la pila
         */
        while(ok && q.size()!=0){
            //Indice del nodo en el vector de nodos y la lista de adyacencia
            ind=q.front().pnode->id;
            
            //Establezco visited y color
            q.front().pnode->visited=true;
            q.front().pnode->color=q.front().expectedColor;
            
            /*Por cada nodo adyacente, compruebo si ha sido visitado o no.
             *  Si ha sido visitado compruebo si tiene un color correcto
             *  Si no ha sido visitado lo meto en la cola      
            */
            for(int i=0;i<nodes[ind].size();i++){
                if(!(nodes[ind][i]->visited))
                        q.push(nqueue(nodes[ind][i],!(q.front().expectedColor)));
                else
                    ok=(nodes[ind][i]->color)==!(q.front().expectedColor);    
            }
            q.pop(); //quito el nodo de la cola
        }
        
        if(ok)printf("BICOLORABLE.\n");
        else printf("NOT BICOLORABLE.\n"); 
        
        //Reinicio del bucle
        ok=true;
        q=queue<nqueue>();
        nodes.clear();
        cont.clear();
    }
    return 0;
}

