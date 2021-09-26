#ifndef FICHEROS_H
#define FICHEROS_H
#include <fstream>
#include <iostream>
 using namespace std;

class Ficheros
{
public:
    Ficheros();
    ~Ficheros();
    void escrbir(unsigned int ancho,unsigned int  alto);
private:
    ofstream archivo;
};

#endif // FICHEROS_H
