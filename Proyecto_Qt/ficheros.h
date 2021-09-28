#ifndef FICHEROS_H
#define FICHEROS_H
#include <fstream>
#include <iostream>
#include <QImage>
 using namespace std;

class Ficheros
{
public:
    Ficheros();
    ~Ficheros();

    void llenarMatriz(unsigned **Red, unsigned **Green, unsigned **Blue, unsigned ancho, unsigned alto);//para imagen16x16
    void llenar(unsigned **llenarMatriz, unsigned ancho, unsigned alto);

    void llenarMatrizGrande(unsigned **Red2, unsigned **Green2, unsigned **Blue2, unsigned ancho2, unsigned alto2);//para imagen mayor que 16x16
    void llenarGrande(unsigned **llenarMatriz2,unsigned  ancho2, unsigned  alto2);
private:
    ofstream archivo;

};

#endif // FICHEROS_H
