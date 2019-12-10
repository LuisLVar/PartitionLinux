#ifndef INTERPRETE_H
#define INTERPRETE_H

#include <string> //string
#include <vector>  // Libreria que contiene type Vector.
#include <sstream> //stringstream
#include <iostream> //cout, cin, getline, entre otras.
#include <algorithm>
#include <cctype>
#include <fstream>
#include "string.h"
#include "mount.h"


using namespace std;

class Interprete
{
public:
    Interprete();
    void interpretar();
    void lineaComando(string comando);
    void ejecutarComando(vector<string> comando);

    //COMANDOS
    void fexec(std::vector<std::string> commandArray);
    void fmkDisk(std::vector<std::string> commandArray);
    void frmDisk(std::vector<std::string> commandArray);
    void ffDisk(std::vector<std::string> commandArray);
    void fmount(std::vector<std::string> commandArray);
    void funmount(std::vector<std::string> commandArray);
    void frep(std::vector<std::string> commandArray);
    Mount montaje;
    void crearReporte(string path, string name, string id);

    //OPERACIONES DE CADENA
    string getAtributo(string comando);
    string getPath(vector<string> commandArray);
    string getFullPath(vector<string> commandArray, int j);
    string toLowerCase(string comando);
    void leerArchivo(string path);
    void errorComando(string error);
    void fpause();
};

#endif // INTERPRETE_H
