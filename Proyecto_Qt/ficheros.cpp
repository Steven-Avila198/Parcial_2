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
    unsigned aux=0, aux2=0,tempAux=0,tempAux2=0;
    aux=ancho2/16,aux2=alto2/16;
    tempAux=aux;
    tempAux2=aux2;
    string llenarFichero;
    archivo.open("Grande.txt", fstream::app | fstream::ate);
    llenarFichero+="{";
    archivo<<llenarFichero;
    for(unsigned  i=tempAux;i<=(tempAux*16);i+=tempAux){
        llenarFichero="{";
        archivo<<llenarFichero;
        llenarFichero="";
        aux=i*tempAux;

        for(unsigned j=tempAux2;j<=(tempAux2*16);j+=tempAux2){
            aux2=i*tempAux2;
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

/*void Ficheros::llenarMatrizPequena(unsigned **Red3, unsigned **Green3, unsigned **Blue3, unsigned ancho3, unsigned alto3)
{
    string llenar2="{";
    archivo.open("pequena.txt",fstream ::app | fstream::ate);
    archivo<<llenar2;
    archivo.close();

    llenarPeq(Red3,ancho3,alto3);
    archivo.open("pequena.txt", fstream::app | fstream::ate);
    archivo<<",\n\n";
    archivo.close();

    llenarPeq(Green3,ancho3,alto3);
    archivo.open("pequena.txt", fstream::app | fstream::ate);
    archivo<<",\n\n";
    archivo.close();

    llenarPeq(Blue3,ancho3,alto3);
    archivo.open("pequena.txt", fstream::app | fstream::ate);
    archivo<<"};\n";
    archivo.close();
}

void Ficheros::llenarPeq(unsigned **llenarMatriz3, unsigned ancho3, unsigned alto3)
{
    unsigned au=0, au2=0,tempAu=0,tempAu2=0;
    au=ancho3/16,au2=alto3/16;
    tempAu=au;
    tempAu2=au2;
    string llenarFichero;
    archivo.open("pequena.txt", fstream::app | fstream::ate);
    llenarFichero+="{";
    archivo<<llenarFichero;
    for(unsigned  i=tempAu;i<=(tempAu*16);i+=tempAu){
        llenarFichero="{";
        archivo<<llenarFichero;
        llenarFichero="";
        au=i*tempAu;

        for(unsigned j=tempAu;j<=(tempAu2*16);j+=tempAu2){
            au=i*tempAu2;
            llenarFichero=to_string(llenarMatriz3[i][j]);
            archivo<<llenarFichero;
            if(j<alto3-1){
                archivo<<",";
            }
            llenarFichero="";
        }
        llenarFichero="}";
        archivo<<llenarFichero;
        if(i<ancho3){
            archivo<<",\n";
        }
    }
    llenarFichero="}";
    archivo<<llenarFichero;
    archivo.close();
}*/
