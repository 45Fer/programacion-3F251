//Contenedores
#include <list>
#include <vector>
#include <map>
//Fujo de datos 
#include <iostream>
#include <fstream>
#include <sstream>
//Cadenas de texto
#include <string>

using namespace std;

//Definicion de la clase pokemon
enum TipoPokemon
{
    AGUA,
    FUEGO,
    PLANTA, 
    VOLADOR, 
    ELECTRICO,
    VENENO,
}

class Pokemon{
    private:
        string nombre;
        list <TipoPokemon> tipos;
        int nivel;
    public:
};

int main(int argc, char *argv[]){
    // artreglos clasicos
    int edades [10];
    edades [0] = 1;
    edades [1] = 10;
    edades [2] = 20;
    edades [3] = 30;
    edades [4] = 40;

    cout << "1.- Arreglos." << endl;
    cout << "Edades numero 1 : " << edades[0] << endl; // <------- acceder a un valor unico

    //Contenedor de la librearia estandar C++
    list<int> listaEdades;
    listaEdades.push_back(1);
    listaEdades.push_back(10);
    listaEdades.push_back(20);
    listaEdades.push_back(30);
    listaEdades.push_back(40);
    //No se puede seleccionar un elemento unico de forma natural
    //Ya que la lisa esta disenada para ser recorrida
    cuout << "--------------------" << endl;
    cout << "2.- Listas" << endl;
    int indice = 1;
    for(auto &&edad : listaEdades)
    {
        cout << "Edad numero " << indice << " : " << edades[indice] << endl;
        indice++; 
    }

    //Utilzas estrutura de vector la cual si se puede acceder por elemento 
    cout << "---------------------" << endl;
    cout << "3.-  Vectores" << endl;
    vector<int> vectorEntero;
    vectorEntero.push_back(1);
    vectorEntero.push_back(2);
    vectorEntero.push_back(3);
    vectorEntero.push_back(4);
    vectorEntero[5] = 5; // <----- aqui utilizamos el operador 

    for(int i = 0; i < 5; i++){
        cout << "Edad" << i << " : " << vectorEntero[i] << endl;
    }

    cout << "--------------------" << endl;
    cout << "4.- Mapas" << endl;
    map<string, Pokemon> pokedex;

}
