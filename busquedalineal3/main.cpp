#include <iostream>
#include <fstream>

using namespace std;

void agregar(int a[], int n);
void buscar(int a[], int n, int dato);
void imprimir(int a[], int n);
void archivo(int a[], int n, int dato);


int main()
{

    setlocale(LC_CTYPE, "Spanish");
    int n, dato;
    cout<<"INGRESE EL TAMAÑO DEL ARREGLO: ";

    cin>>n;

    int arreglo1[n];

    cout<<"LOS ELEMENTOS DEL ARREGLO SON: "<<endl;



    agregar(arreglo1, n);

    cout<<endl<<"INGRESE EL ELEMENTO A BUSCAR: ";

    cin>>dato;


    buscar(arreglo1, n, dato);
    cout<<endl;
    imprimir(arreglo1, n);
    archivo(arreglo1, n, dato);




    return 0;
}

void agregar(int a[], int n)
{

    for(int i=0; i<n;i++)
    {
        cin>>a[i];

    }



}

void buscar(int a[], int n, int dato)
{


    bool c;
    c=false;



    for(int i=0; i<=n; i++)
    {
        if(a[i]==dato)
        {
            cout<<"\nELEMENTO ENCONTRADO"<<endl;
            cout<<"\nEN LA POSICIÓN "<<i+1<<endl;
            c=true;
        }
    }
    if(c==false)
    {
        cout<<"\nELEMENTO NO ENCONTRADO"<<endl;
    }


}

void imprimir(int a[], int n)
{
    for(int i=0; i<n;i++)
    {
        cout<<"|"<<a[i]<<"|";

    }

}

void archivo(int a[], int n, int dato)
{
    bool c;
    c=false;
    ofstream datos;
    datos.open("datos.txt",ios::out );
    datos<<"TAMAÑO DEL ARREGLO: ";
    datos<<n;
    datos<<"\nELEMENTOS DEL ARREGLO: ";
     for(int i=0; i<n;i++)
    {
        datos<<"|"<<a[i]<<"|";
    }



    for(int i=0; i<=n; i++)
    {
        if(a[i]==dato)
        {
            datos<<"\nELEMENTO ENCONTRADO"<<endl;
            datos<<"\nEN LA POSICIÓN "<<i+1<<endl;
            c=true;
        }
    }
    if(c==false)
    {
        datos<<"\nELEMENTO NO ENCONTRADO"<<endl;
    }





    datos.close();
}
