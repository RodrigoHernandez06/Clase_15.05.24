#include <iostream>
using namespace std;

int main(){

    int cant=0, ticket=0, r=0;

    cout<<"Bienvenido a la boleteria electronica del estadio XYZ. Que entrada desea comprar: \n"
        <<"MAXIMO 4 POR PERSONA\n"
        <<"1 - Sol General ($3.00)\n"
        <<"2 - Sol Preferente ($5.00)\n"
        <<"3 - Sombra ($8.00)\n"
        <<"4 - Tribuna ($15.00)\n"
        <<"5 - Platea ($20.00)\n";
    cin>>ticket;

    switch(ticket){
        case 1:
        cout<<"Cuantas entradas desea comprar? \n";
        cin>>cant;
        if(cant<=4){
        r=cant*3;
        cout<<"El total es de: $"<<r<<".00";
        break;
        }
        else if(cant>4){
            cout<<"Lo sentimos, el maximo es de 4 entradas por persona.\n";
        }

        case 2:
        cout<<"Cuantas entradas desea comprar? \n";
        cin>>cant;
        if(cant<=4){
        r=cant*5;
        cout<<"El total es de: $"<<r<<".00";
        break;
        }
        else if(cant>4){
            cout<<"Lo sentimos, el maximo es de 4 entradas por persona.\n";
        }

        case 3:
        cout<<"Cuantas entradas desea comprar? \n";
        cin>>cant;
        if(cant<=4){
        r=cant*8;
        cout<<"El total es de: $"<<r<<".00";
        break;
        }
        else if(cant>4){
            cout<<"Lo sentimos, el maximo es de 4 entradas por persona.\n";
        }

        case 4:
        cout<<"Cuantas entradas desea comprar? \n";
        cin>>cant;
        if(cant<=4){
        r=cant*15;
        cout<<"El total es de: $"<<r<<".00";
        break;
        }
        else if(cant>4){
            cout<<"Lo sentimos, el maximo es de 4 entradas por persona.\n";
        }

        case 5:
        cout<<"Cuantas entradas desea comprar? \n";
        cin>>cant;
        if(cant<=4){
        r=cant*20;
        cout<<"El total es de: $"<<r<<".00";
        break;
        }
        else if(cant>4){
            cout<<"Lo sentimos, el maximo es de 4 entradas por persona.\n";
        }
    }
    return 0;
}