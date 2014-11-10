#include <iostream>
using namespace std;

struct cubo{
    cubo(int x, int y, int z, int ancho){
        this->x=x;
        this->y=y;
        this->z=z;
        
        this->x2=x+ancho;
        this->y2=y+ancho;
        this->z2=z+ancho;
    }
    
    void corte(cubo punto2){
        //primera coordenada los puntos
        this->x = this->x < punto2.x ? punto2.x : this->x;
        this->y = this->y < punto2.y ? punto2.y : this->y;
        this->z = this->z < punto2.z ? punto2.z : this->z;
        //segunda coordenada los maximos
        this->x2 = this->x2 > punto2.x2 ? punto2.x2 : this->x2;
        this->y2 = this->y2 > punto2.y2 ? punto2.y2 : this->y2;
        this->z2 = this->z2 > punto2.z2 ? punto2.z2 : this->z2;
    }
    
    int x,y,z,x2,y2,z2;
};

int main() {

    int caso;
    cin >> caso;
    while(caso!=0)
    {
        //puntos iniciales
        int a,b,c,d;
        cin >> a >> b >>c >> d;
        cubo cubo1=cubo(a,b,c,d);
        
        cin >> a >> b >> c >> d;
        cubo1.corte(cubo(a,b,c,d));
        
        
        for(int i=0; i<caso-2; i++){
            cin >>a>>b>>c>>d;
            
            cubo1.corte(cubo(a,b,c,d));
        }
        
        //comprobamos que el orden sea bueno
        if(cubo1.x<=cubo1.x2 && cubo1.y<=cubo1.y2 && cubo1.z<=cubo1.z2)
            cout << (cubo1.x2-cubo1.x) * (cubo1.y2-cubo1.y)* (cubo1.z2-cubo1.z) << endl;
        else
            cout << 0 << endl;
        //proximo caso
        cin >> caso;
    }
    return 0;
}

