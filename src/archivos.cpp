#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    ofstream archivoSalida("archivo.txt");
    if(!archivoSalida){
        cerr << "Error al leer archivo" << endl;
        return 1; // Finalizar con erro 
    }

    cout << "Escribiendo archivo" << endl;
    archivoSalida << "Hector tiene dos Hondas civics con motor spunik" << endl;

    archivoSalida.close();
    //------------------------------------------------------------------------------

    ifstream archivoEntrada("archivo.txt");
    if(!archivoEntrada){
        cerr << "Error al leer archivo" << endl;
        return 1; //Finalizar con error 
    }
    cout << "leyendo archivo" << endl;
    string linea;
    while(getline(archivoEntrada, linea)){
        cout << linea << endl;
    }
    archivoEntrada.close();

    return 0;
}