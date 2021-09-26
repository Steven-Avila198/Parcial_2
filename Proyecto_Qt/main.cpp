<<<<<<< Updated upstream
#include <iostream>
#include <QImage>
#include <QString>
=======

#include "ficheros.h"
>>>>>>> Stashed changes



//bool QImage::load(const QString &fileName, const char *format=nullptr);

int main()
{
<<<<<<< Updated upstream
    //Solicitud de nombre para cargar la imagen
=======
    Ficheros obj1;
>>>>>>> Stashed changes


    //Solicitud de nombre para cargar la imagen
    string filename = "";
    cout <<"Ingrese el nombre del archivo jpg"<<endl;
    cin >> filename;
    string ruta = "../Proyecto_Qt/Banderas/"+filename;
    QImage img(ruta.c_str());  //imagen ya cargada

    unsigned int ancho = img.width();  // ancho de la imagen
    unsigned int alto = img.height();  // altura de la imagen

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
<<<<<<< Updated upstream
            cout << indx << ", " << indy << " = " <<img.pixelColor(indx,indy).red() <<endl;
=======
            cout << indx << ", " << indy << " = " <<"Rojo"<<img.pixelColor(indx,indy).red() <<endl;
            cout << indx << ", " << indy << " = " <<"Verde"<<img.pixelColor(indx,indy).red() <<endl;
            cout << indx << ", " << indy << " = " <<"Azuk"<<img.pixelColor(indx,indy).red() <<endl;
>>>>>>> Stashed changes

            //capa de color rojo de la imagen
            Red[indx][indy]= img.pixelColor(indx,indy).red();
            //capa de color verde de la imagen
            Green[indx][indy]= img.pixelColor(indx,indy).green();
            //capa de color azul de la imagen
            Blue[indx][indy]= img.pixelColor(indx,indy).blue();
        }

    }
<<<<<<< Updated upstream
=======



>>>>>>> Stashed changes
    /* //Ciclo para imprimir matriz de pixeles por color para comparar con los pixeles de la imagen original//
    for(unsigned int i=0;i<ancho;i++)
    {
        for(unsigned int j = 0 ; j <alto;j++){
            cout<<Green[i][j]<<" ";
            }
        cout<<endl;
    }*/

    //obj1.escrbir(ancho,alto);

    delete [] Red;
    delete [] Green;
    delete [] Blue;

    return 0;
}
