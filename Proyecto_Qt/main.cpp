#include "ficheros.h"

int main()
{
    Ficheros obj1;
    //Solicitud de nombre para cargar la imagen

    string filename = "";
    cout <<"Ingrese el nombre del archivo jpg"<<endl;
    cin >> filename;
    string ruta = "../Proyecto_Qt/Banderas/"+filename;
    QImage img(ruta.c_str());  //imagen ya cargada

    unsigned  ancho = img.width (); // ancho de la imagen
    unsigned  alto = img.height(); // altura de la imagen

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
    //seleccion del tamaño de la imagen
    if(alto==16 && ancho==16){//16*16
        obj1.llenarMatriz(Red,Green,Blue,ancho,alto);        
    }
    else if(alto>16 && ancho>16){//mayor a 16x16
        obj1.llenarMatrizGrande(Red,Green,Blue,ancho,alto);
    }
    else if(alto<16 && ancho<16){
        cout<<"Vuelva el LUNES"<<endl;
    }


    //obj1.escrbir(ancho,alto);
    delete [] Red;
    delete [] Green;
    delete [] Blue;
    return 0;
}
