#define ARRIBA     72      // NUMEROS ASOCIADOS A LAS FLECHAS DEL TECLADO
#define IZQUIERDA  75
#define DERECHA    77
#define ABAJO      80
#define ESC        27
#include <windows.h>
#include <conio.h>
#include <cstdlib> 
#include <cstdio>  
#include <ctime>   
using namespace std;

void gotoxy(int x, int y)  {
    HANDLE hCon;
    COORD dwPos;

    dwPos.X = x;
    dwPos.Y = y;
    hCon = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(hCon,dwPos);
}

void OcultaCursor() {
    CONSOLE_CURSOR_INFO cci = {100, FALSE}; // El segundo miembro de la estructura indica si se muestra el cursor o no.

    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cci);
}
void pintar(){  
     // Líneas horizontales
     for(int i=2; i < 78; i++){
        gotoxy (i, 3); printf ("%c", 205);  // los números hacen referencia al código acsii
        gotoxy(i, 23); printf ("%c", 205);
     }
     //Líneas verticales
     for(int v=4; v < 23; v++){
        gotoxy (2,v);  printf ("%c", 186);
        gotoxy(77,v);  printf ("%c", 186);
     }
     // Esquinas
     gotoxy  (2,3);    printf ("%c", 201);
     gotoxy (2,23);    printf ("%c", 200);
     gotoxy (77,3);    printf ("%c", 187);
     gotoxy(77,23);    printf ("%c", 188);
}

class Comida{
   int xc,yc;                      // coordenadas de la comida
   public:
          Comida(int _x ,int _y);  // constructor
          void pintar_comida();
          int X() {return xc;}  // Interfaz
          int Y() {return yc;}
          void AsignaCoordenadas(int _x, int _y) { 
            xc = _x;
            yc = _y;
          }// Asigna nuevas coordenadas a la comida.

};
Comida::Comida(int _x ,int _y) : xc(_x), yc(_y) {}
void Comida::pintar_comida(){
    gotoxy(xc,yc); printf("%c",4); // pintar comida
}
class serpiente{
     int cuerpo[10][2]; 
     int n;                     // Variable para controlar los índices del cuerpo
     int x , y;                //  coordenadas de la serpiente
     int tam;                // Tamaño del cuerpo
     int dir;                  // Variable control de la dirección de la serpiente
     int score;             
     int h;                     // control para la velocidad 

public:
    
     int velocidad;
     char tecla;                            
     serpiente(int _x , int _y);   // Constructor
     void guardar_posicion();
     void dibujar_cuerpo() const;
     void borrar_cuerpo() const;
     bool game_over();           
     void teclear();                 
     void cambiar_pos();       
     void comparar_coordenadas(Comida &); 
     void cambiar_velocidad();
     void puntos() const;

};
serpiente::serpiente(int _x , int _y) : x(_x), y(_y), tam(3), n(0), dir(3), score(0), h(1), velocidad(100) {}
void serpiente::guardar_posicion(){
     cuerpo[n][0] = x;
     cuerpo[n][1] = y;
     n++;
     if(n == tam)      // sobrescribimos la matriz cuerpo
          n=0;
}
void serpiente::dibujar_cuerpo() const{
     gotoxy(x,y); printf("*"); // pintamos la cabaza
}
void serpiente::borrar_cuerpo() const{
     gotoxy(cuerpo[n][0],cuerpo[n][1]); printf(" "); 
}
void serpiente::teclear(){
     if(kbhit()){
            tecla = getch();
            switch(tecla){
               case ARRIBA:    if(dir != 2) dir = 1; break;
               case ABAJO:     if(dir != 1) dir = 2; break;
               case DERECHA:   if(dir != 4) dir = 3; break;
               case IZQUIERDA: if(dir != 3) dir = 4; break;
            }

     }
}

void serpiente::cambiar_pos(){
     if(dir == 3) x++;
     else if(dir == 1) y--;
     else if(dir == 4) x--;
     else if(dir == 2) y++;
}
bool serpiente::game_over(){
     //if(y == 3 || y == 23 || x == 2 || x == 77) return true;  // Choque con las paredes

     for(int j = 0; j <tam; j++){                      // Choque con su cuerpo
        if( x == cuerpo[j][0] && y == cuerpo[j][1] )   // He modificado el bucle para incluir la posición 0
             return true;
    }
    return false;
}


void serpiente::cambiar_velocidad(){
     if(score == h*20){             
         velocidad-=10;
          h++;
     }
}  
void serpiente::puntos() const{
     gotoxy(3,1); printf("Score %5d", score); 
}
void serpiente::comparar_coordenadas(Comida &c){
     if(c.X() == x && c.Y() == y){ 
        score+= 10;          
        tam++;
        cambiar_velocidad();
        c.AsignaCoordenadas((rand()%73)+4, (rand()%19)+4);
        c.pintar_comida();                                 
        puntos();    // Mostramos contador actualizado.
     }
}
/*
int main(){
    srand(time(NULL));

    OcultaCursor();

    pintar();
    serpiente A(5,10);
    Comida C ((rand()%73)+4 , (rand()%19)+4);
    C.pintar_comida();
    do{
       A.comparar_coordenadas(C);
       A.borrar_cuerpo();
       A.guardar_posicion();
       A.dibujar_cuerpo();

       Sleep(A.velocidad); // control del tiempo de espara para cada iteracion
       A.teclear();
       A.teclear();
       A.cambiar_pos();

    }while(A.tecla != ESC && !A.game_over());// FIN DEL WHILE
	
    return 0;
}*/