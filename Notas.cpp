#include <iostream>
using namespace std;
int main(){
    float c1=0, c2=0, p1=0, p2=0, lab=0, pro=0, r=0;
    string nombre;
    
    cout<<"Ingrese su nombre: ";
    cin>>nombre;
    cout<<"Bienvenido "<<nombre<<"\n";
    
    cout<<"Ingrese la nota del corto 1: ";
    cin>>c1;
    
    cout<<"Ingrese la nota del corto 2: ";
    cin>>c2;
    
    cout<<"Ingrese la nota del parcial 1: ";
    cin>>p1;
    
    cout<<"Ingrese la nota del parcial 2: ";
    cin>>p2;
    
    cout<<"Ingrese la nota del laboratorio: ";
    cin>>lab;
    
    cout<<"Ingrese la nota del proyecto: ";
    cin>>pro;
    
    r=(c1*0.10)+(c2*0.10)+(p1*0.15)+(p2*0.20)+(lab*0.20)+(pro*0.25);
    
    if(r>=6 && r<=10){
        cout<<"Felicidades "<<nombre<<" paso la materia con: "<<r;
    }
    
    else if(r>=1 && r<6){
        cout<<"Lo sentimos "<<nombre<<" reprobo la materia con "<<r<<". Nos vemos en interciclo :)";
    }
    
    else {
        cout<<"Alguno de los datos ingresados no es valido, intente nuevamente";
    }
    return 0;
}