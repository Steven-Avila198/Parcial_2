#include <iostream>
#include <QImage>
#include <QString>

using namespace std;

//bool QImage::load(const QString &fileName, const char *format=nullptr);

int main()
{
    //Solicitud de nombre para cargar la imagen

    string filename = "";
    cout <<"Ingrese el nombre del archivo jpg"<<endl;
    cin >> filename;
    string ruta = "../Proyecto_Qt/Banderas/"+filename;
    QImage img(ruta.c_str());  //imagen ya cargada

    int ancho = img.width (); // ancho de la imagen
    int alto = img.height(); // altura de la imagen

    int MatrizRed[ancho][alto];
    //capa de color rojo de la imagen
    for (int indx = 0; indx < img.width(); ++indx){
        for(int indy = 0; indy < img.height(); ++indy){
            //cout << indx << ", " << indy << " = " <<img.pixelColor(indx,indy).red() <<endl;
            MatrizRed[indx][indy]= img.pixelColor(indx,indy).red();
        }

    }

    int MatrizGreen[ancho][alto];
    //capa de color verde de la imagen
    for (int indx = 0; indx < img.width(); ++indx){
        for(int indy = 0; indy < img.height(); ++indy){
            cout << indx << ", " << indy << " = " <<img.pixelColor(indx,indy).green() <<endl;
            MatrizGreen[indx][indy]= img.pixelColor(indx,indy).green();
        }
    }

    int MatrizBlue[ancho][alto];
    //capa de color azul de la imagen
    for (int indx = 0; indx < img.width(); ++indx){
        for(int indy = 0; indy < img.height(); ++indy){
            cout << indx << ", " << indy << " = " <<img.pixelColor(indx,indy).blue() <<endl;
            MatrizBlue[indx][indy]= img.pixelColor(indx,indy).blue();
        }
    }




    return 0;
}
