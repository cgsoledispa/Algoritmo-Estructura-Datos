#include <iostream>
#include <stdlib.h>

//libreria para archivos
#include <fstream>

using namespace std;

int main()
{


    string nombre;
    string apellido;
    int edad;
    char r;
    ofstream archivoprueba;
    string nombrearchivo;
    cout<<"INGRESE EL NOMBRE DEL ARCHIVO: ";
    getline(cin, nombrearchivo);
    archivoprueba.open(nombrearchivo.c_str(), ios::out);
    do
    {
       cout<<"\tIngrese el nombre: ";
       getline(cin, nombre, '\n');
       cout<<"\tIngrese el apellido: ";
       getline(cin, apellido, '\n');
       cout<<"\tIngrese la edad: ";
       cin>>edad;
       archivoprueba<<nombre<<" "<<apellido<<" "<<edad<<"\n";

       cout<<"DESEA INGRESAR OTRO CONTACTO? s/n: ";
       cin>>r;
       cout<<"\n";
       cin.ignore();
    }
    while(r=='s');

    archivoprueba.close();

    ifstream archivoLectura(nombrearchivo.c_str());
    string texto;
    while(!archivoLectura.eof())
    {
        archivoLectura>>nombre>>apellido>>edad;

        if(!archivoLectura.eof())
        {
        getline(archivoLectura, texto);

        cout<<"\tEl nombre es: ";
        cout<<nombre<<endl;
        cout<<"\tEl apellido es: ";
        cout<<apellido<<endl;
        cout<<"\tLa edad es: ";
        cout<<edad<<endl;
        }
    }

    archivoLectura.close();


    /*
    ofstream archivoprueba;
    archivoprueba.open("C:/Users/Algoritmos/Desktop/archivosCarpetas/prueba.txt", ios::out);
    archivoprueba<<"CHRISTIAN\n";
    archivoprueba<<"SOLEDISPA\n";
    archivoprueba<<"MENDOZA\n";

    int e;
    cout<<"Ingresa tu edad: ";
    cin>>e;
    archivoprueba<<e;

    archivoprueba.close();

    ifstream archivoLectura;
    string texto;
    archivoLectura.open("prueba.txt", ios::in);
    if(archivoLectura.fail())
    {
        cout<<"ERROR AL ABRIR EL ARCHIVO";
    }
    else
    {
        while(!archivoLectura.eof())
        {
            getline(archivoLectura, texto);
            cout<<texto<<endl;
        }
    }
    archivoLectura.close();
    */

    return 0;
}
