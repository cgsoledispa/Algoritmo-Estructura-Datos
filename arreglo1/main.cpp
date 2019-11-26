#include <iostream>

using namespace std;

void ingresar(int a[], int n);
void burbujar(int a[], int n);
void imprimir(int a[], int n);

int main()
{
    int a[5];
    ingresar(a, 5);
    burbujar(a, 5);
    imprimir(a, 5);



    return 0;
}

void ingresar(int a[], int n){
    for(int i=0; i<n; i++){
            cout<<"Elemento "<<i<<": ";
        cin>>a[i];
    }


}
void burbujar(int a[], int n){
    for(int i=0; i<n; i++){
            for(int j=i+1; j<=n; j++)
        {
            if(a[j]>a[i])
            {
                int aux=a[i];
                a[i]=a[j];
                a[j]=aux;
            }
        }

    }
}
void imprimir(int a[], int n){
    for(int i=0; i<n; i++){
        cout<<"-"<<a[i]<<"--";
    }
}
