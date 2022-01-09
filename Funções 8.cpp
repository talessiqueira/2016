#include <iostream> 
using namespace std;

int funcao (int X, int Y){
    int i, j, cont=0;
    for (i=X;i<=Y;i++) {
        for (j=1;j<=i;j++) {
            if (i%j==0){
               cont=cont+1;
            }
        }
    if(cont<=2) {
                cout<<i<<" ";
    }
    cont=0;
    }
}
                

int main () {
    int X, Y;
    cout<<"Digite os pares (o valor de X deve ser menor que Y): ";
    cout<<"\nX: ";
    cin>>X;
    cout<<"Y: ";
    cin>>Y;
    while (X!=Y) {
          funcao(X, Y);
          cout<<"\nX: ";
          cin>>X;
          cout<<"Y: ";
          cin>>Y;
    }
    system ("PAUSE");
}
