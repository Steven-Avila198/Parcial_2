#include "ficheros.h"
#include <iostream>
#include <QImage>
Ficheros::Ficheros()
{

}

Ficheros::~Ficheros()
{

}

//Para una matriz 16x16
void Ficheros::llenarMatriz(unsigned **Red, unsigned **Green, unsigned **Blue, unsigned ancho, unsigned alto)
{
    string llenar1="{";
    archivo.open("fichero.txt",fstream ::app | fstream::ate);
    archivo<<llenar1;
    archivo.close();

    llenar(Red,ancho,alto);
    archivo.open("fichero.txt", fstream::app | fstream::ate);
    archivo<<",\n\n";
    archivo.close();

    llenar(Green,ancho,alto);
    archivo.open("fichero.txt", fstream::app | fstream::ate);
    archivo<<",\n\n";
    archivo.close();

    llenar(Blue,ancho,alto);
    archivo.open("fichero.txt", fstream::app | fstream::ate);
    archivo<<"};\n";
    archivo.close();

}

void Ficheros::llenar(unsigned **llenarMatriz,unsigned  ancho, unsigned  alto)
{
    string llenarFichero;
    cout<<ancho<<"x"<<alto<<endl;
    archivo.open("fichero.txt", fstream::app | fstream::ate);
    llenarFichero+="{";
    archivo<<llenarFichero;
    for(unsigned i=0;i<ancho;i++){
        llenarFichero="{";
        archivo<<llenarFichero;
        llenarFichero="";
        for(unsigned j=0;j<alto;j++){
            llenarFichero=to_string(llenarMatriz[i][j]);
            archivo<<llenarFichero;
            if(j<alto-1){
                archivo<<",";
            }
            llenarFichero="";
        }
        llenarFichero="}";
        archivo<<llenarFichero;
        if(i<ancho){
            archivo<<",\n";
        }
    }
    llenarFichero="}";
    archivo<<llenarFichero;
    archivo.close();
}

//Para una mtriz mas grande que 16*16
void Ficheros::llenarMatrizGrande(unsigned **Red, unsigned **Green, unsigned **Blue, unsigned ancho, unsigned alto2)
{
    string llenar1="{";
    archivo.open("Grande.txt",fstream ::app | fstream::ate);
    archivo<<llenar1;
    archivo.close();

    llenarGrande(Red,ancho,alto2);
    archivo.open("Grande.txt", fstream::app | fstream::ate);
    archivo<<",\n\n";
    archivo.close();

    llenarGrande(Green,ancho,alto2);
    archivo.open("Grande.txt", fstream::app | fstream::ate);
    archivo<<",\n\n";
    archivo.close();

    llenarGrande(Blue,ancho,alto2);
    archivo.open("Grande.txt", fstream::app | fstream::ate);
    archivo<<"};\n";
    archivo.close();
}

void Ficheros::llenarGrande(unsigned **llenarMatriz2, unsigned ancho2, unsigned alto2)
{

    string llenarFichero;
    cout<<ancho2<<"x"<<alto2<<endl;
    archivo.open("Grande.txt", fstream::app | fstream::ate);
    llenarFichero+="{";
    archivo<<llenarFichero;
    for(unsigned i=0;i<ancho2;i++){
        llenarFichero="{";
        archivo<<llenarFichero;
        llenarFichero="";
        for(unsigned j=0;j<alto2;j++){
            llenarFichero=to_string(llenarMatriz2[i][j]);
            archivo<<llenarFichero;
            if(j<alto2-1){
                archivo<<",";
            }
            llenarFichero="";
        }
        llenarFichero="}";
        archivo<<llenarFichero;
        if(i<ancho2){
            archivo<<",\n";
        }
    }
    llenarFichero="}";
    archivo<<llenarFichero;
    archivo.close();
}
