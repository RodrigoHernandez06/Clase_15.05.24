#include <iostream>
using namespace std;

int main(){

float angulo=1;

cout<<"Ingrese un angulo: ";
cin>>angulo;

if(angulo>=1 && angulo<90){
    cout<<"El angulo es agudo";
}

else if(angulo>90 && angulo<=360){
    cout<<"El angulo es obtuso.";
}

else if(angulo==90){
    cout<<"El angulo es recto";
}

else{
    cout<<"El angulo no es valido";
}
return 0;
}