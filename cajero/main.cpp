#include <iostream>
#include <stdlib.h>

using namespace std;


const int cap=100;
int menu();
void seleccionMenor(int balance[], int cont);
void seleccionMayor(int balance[], int cont);
void suma(int balance[], int cont);


int main()
{
    int bill, balance[cap], cont=0;

    cout<<"BIENVENIDO A SU TIENDA DE BARRIO POR FAVOR INGRESE SUS MONTOS DE DINERO"<<endl;
    cout<<"para terminar de ingresar sus montos ingrese 0"<<endl;
    cin>>bill;
    while((bill !=0)&& (cont<cap))
    {
        balance[cont]=bill;
        cont++;
        cin>>bill;
    }

    int opcion = menu();
    while (opcion != 0)
    {

        switch (opcion)
        {

        case 1:
        {
            seleccionMenor(balance, cont);

        }

        break;

        case 2:
        {
            seleccionMayor(balance, cont);

        }
        break;


        case 3:

        {
            suma(balance, cont);


        }
        break;


        }
        opcion = menu();


    }


    return 0;
}




int menu()
{
    int op = -1;
    while ((op < 0) || (op > 3))
    {

        cout << "\n1 - Ordenar de menor a mayor" << endl;
        cout << "2 - Ordenar de mayor a menor" << endl;
        cout << "3 - Sumar cantidades pares e impares" << endl;
        cout << "0 - Salir" << endl;
        cout << "Opcion: " << endl;
        cin >> op;
        system("cls");
        if ((op < 0) || (op > 3))
        {
            cout << "No valida" << endl;
        }
    }
    return op;
}

void seleccionMenor(int balance[], int cont)
{



    int aux, min;

    for(int i=0; i<cont; i++)
    {
        min=i;

        for(int j=i+1; j<cont; j++)
        {
            if(balance[j]<balance[min])
            {
                min=j;
            }
        }
        aux=balance[i];
        balance[i]=balance[min];
        balance[min]=aux;
    }
    for(int i=0; i<cont; i++)
    {


        cout<<"->"<<balance[i]<<endl;

    }


}


void seleccionMayor(int balance[], int cont)
{



    int aux, max;

    for(int i=0; i<cont; i++)
    {
        max=i;

        for(int j=i+1; j<cont; j++)
        {
            if(balance[j]>balance[max])
            {
                max=j;
            }
        }
        aux=balance[i];
        balance[i]=balance[max];
        balance[max]=aux;
    }
    for(int i=0; i<cont; i++)
    {


        cout<<"->"<<balance[i]<<endl;

    }


}

void suma(int balance[], int cont)
{

    int mod, par=0, imp=0;
    for(int i=0; i<cont; i++)
    {
        mod=balance[i]%2;
        if(mod==0)
        {
            par=par+balance[i];
        }
        else if(mod !=0)
        {
            imp=imp+balance[i];
        }
    }
    cout<<"La suma de los pares es "<<par<<endl;
    cout<<"La suma de los impares es "<<imp<<endl;
}

