//factorial

#include <iostream>
using namespace std;

int main(){

    int pisoa=0, pison=0;

    cout<<"En que piso esta? ";
    cin>>pisoa;

    cout<<"A que piso desea ir? ";
    cin>>pison;
    
    
    if(pisoa<pison){
        cout<<"Subiendo...\n"
            <<"Ha llegado al piso: "<<pison;
    }

    else if(pisoa>pison){
        cout<<"Bajando... \n"
            <<"Ha llegado al piso: "<<pison;
    }
    
    return 0;
}