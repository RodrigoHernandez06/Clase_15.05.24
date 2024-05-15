#include <iostream>
using namespace std;

int main(){
    
    int edad=1;
     cout<<"Ingrese su edad: ";
     cin>>edad;
     
     if (edad<18 && edad>=1){
         cout<<"Usted es menor de edad.";
     }
     
     else if(edad>=18){
         cout<<"Usted es mayor de edad.";
     }
     
     else {
         cout<<"Ingrese una edad valida";
     }
    return 0;
}