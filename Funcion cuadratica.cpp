#include <iostream>
#include <math.h>
using namespace std;

int main(){
    
    double a=0, b=0, c=0, r1=0, r2=0, raiz=0.0;
    
    cout<<"Ingrese el primer numero: ";
    cin>>a;
    
    cout<<"Ingrese el segundo numero: ";
    cin>>b;
    
    cout<<"Ingrese el tercer numero: ";
    cin>>c;
    
    raiz = sqrt((b*b)-(4*a*c));
    r1= (-b+raiz)/2;
    r2= (-b-raiz)/2;
    
    cout<<"La primera raiz es: "<<r1<<"\n"
        <<"La raiz negativa es: "<<r2;
    return 0;
}