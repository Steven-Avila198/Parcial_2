#include <iostream>
#include <QImage>
#include "ficheros.h"

using namespace std;


int main()
{
    Ficheros obj1;
    //Solicitud de nombre para cargar la imagen

    string filename = "";
    cout <<"Ingrese el nombre del archivo jpg"<<endl;
    cin >> filename;
    string ruta = "../Proyecto_Qt/Banderas/"+filename;
    QImage img(ruta.c_str());  //imagen ya cargada

    unsigned int ancho = img.width (); // ancho de la imagen
    unsigned int alto = img.height(); // altura de la imagen

    //-------------Asignacion de memoria dinamica para arreglo de punteros----------------//
    unsigned int **Red=new unsigned*[ancho];
    unsigned int **Green=new unsigned*[ancho];
    unsigned int **Blue=new unsigned*[ancho];
    //-------------------Esto para crear matrices bidimencionales con memoria dinamica----//

    for (unsigned int indx = 0; indx < ancho; ++indx){

        //----Asignacion de memoria para cada una de las filas de la matriz----//
        Red[indx]=new unsigned [alto];
        Green[indx]=new unsigned [alto];
        Blue[indx]=new unsigned [alto];
        //----------------------------------------------------------------//

        for(unsigned int indy = 0; indy < alto; ++indy){
            //cout << indx << ", " << indy << " = " <<img.pixelColor(indx,indy).red() <<endl;

            //capa de color rojo de la imagen
            Red[indx][indy]= img.pixelColor(indx,indy).red();
            //capa de color verde de la imagen
            Green[indx][indy]= img.pixelColor(indx,indy).green();
            //capa de color azul de la imagen
            Blue[indx][indy]= img.pixelColor(indx,indy).blue();
        }

    }

    /* //Ciclo para imprimir matriz de pixeles por color para comparar con los pixeles de la imagen original//
    for(unsigned int i=0;i<ancho;i++)
    {
        for(unsigned int j = 0 ; j <alto;j++){
            cout<<Green[i][j]<<" ";
            }
        cout<<endl;
    }*/

    delete [] Red;
    delete [] Green;
    delete [] Blue;
    obj1.escrbir(ancho,alto);
    return 0;
}
