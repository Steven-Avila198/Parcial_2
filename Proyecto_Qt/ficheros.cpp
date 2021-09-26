#include "ficheros.h"

Ficheros::Ficheros()
{

}

Ficheros::~Ficheros()
{

}

void Ficheros::escrbir(unsigned int ancho, unsigned int alto)
{
    archivo.open("fichero.txt", fstream::app | fstream::ate );//Abrir el archivo
    if(archivo.fail()){
        cout<<"Error al abrir el archivo"<<endl;
        exit(1);
    }
    archivo<<ancho<<'\t'<<alto<<endl;



    archivo.close();//para cerrar el archivo
}
