#include <iostream>
using namespace std;

int main(){

float a1=0, a2=2, r=0;

cout<<"Ingrese el angulo 1: ";
cin>>a1;

cout<<"Ingrese angulo 2: ";
cin>>a2;

if(a1+a2<180){
    r=180-(a1+a2);
    cout<<"El angulo 3 es: "<<r;
}

else if(a1+a2>=180){
    cout<<"Los angulos no son validos, ingrese nuevos datos";
}
return 0;
}