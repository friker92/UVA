/* 
 * Author: LUISMA COSTERO
 * Problem: 10469.- Carry or not to carry
 *
 * Description: Dados dos numeros decimales, hacer la suma bit a bit sin acarreo y mostrar 
				el resultado en decimal.
 * Time limit: 1 seg
 * Mem size: 32 MB
 */

#include <iostream>
using namespace std;

typedef unsigned long int ulint;
const ulint NUMBITS=32;


//funciones varias
void init(bool numeroBinario1[NUMBITS], bool numeroBinario2[NUMBITS]);
void decimalToBinary(ulint decimal, bool binary[]);
ulint binaryToDecimal(bool binary[]);
void sumaBinaria(bool binary1[], bool binary2[], bool suma[]);

// ---- INT MAIN ----
int main(int argc, char** argv)
{
    bool numeroBinario1[NUMBITS];
    bool numeroBinario2[NUMBITS];
    bool sumBinaria[NUMBITS];
    ulint n1,n2;
    cin >> n1;
    init(numeroBinario1, numeroBinario2);
    
    while(!cin.eof())
    {
        cin >> n2;
  
        init(numeroBinario1, numeroBinario2);
        decimalToBinary(n1,numeroBinario1);
        decimalToBinary(n2, numeroBinario2);
        
        sumaBinaria(numeroBinario1, numeroBinario2, sumBinaria);
        
        cout << binaryToDecimal(sumBinaria) << endl;
        //preparamos la siguiente vuelta
        cin >> n1;
    }
 
    
    return 0;
}

// ------ FUNCIONES VARIOPINTAS ------

void init(bool numeroBinario1[NUMBITS], bool numeroBinario2[NUMBITS])
{
    for(int i=0; i<NUMBITS; i++)
    {
        numeroBinario1[i]=false;
        numeroBinario2[i]=false;
    }
}

void decimalToBinary(ulint decimal, bool binary[]) //FUNCIONA CORRECTAMENTE
{
    unsigned short int r=0;
    unsigned short int cuenta=0;
        
    while(decimal!=0)
    {
        r=decimal%2;
        decimal=int(decimal/2);
        if(r==1)
               binary[cuenta]=true;
        else
               binary[cuenta]=false;
        cuenta++;
    }
    cuenta--;

    bool temporal=false;
  
    //trasponemos
    for(ulint i=0; i<int((NUMBITS-1)/2); i++)
    {
        temporal=binary[i];
        binary[i]=binary[(NUMBITS-1)-i];
        binary[(NUMBITS-1)-i]=temporal;
    }

}

ulint binaryToDecimal(bool binary[]) //FUNCIONA CORRECTAMENTE
{
    ulint suma=0;
    ulint indice=1;
    
    for(int i=NUMBITS-1; i>=0; i--)
    {
        if(binary[i])
            suma+=indice;
        indice*=2;
    }
    
    return suma;
}


//suma bit a bit sin acarreo
void sumaBinaria(bool binary1[], bool binary2[], bool suma[])
{
    for(ulint i=0; i<NUMBITS; i++)
    {
        if(binary1[i]==0)
            suma[i]=binary2[i];
        else if(binary2[i]==0)
            suma[i]=binary1[i];
        else
            suma[i]=0;
    }
}
