#include "decode.h"
#include "split.h"

Decode::Decode(){}

Decode::Decode(string code){
    Chain(code);
}

// Creamos un vector donde separamos todo lo que contenía el archivo
vector<string> Decode::Separate(string chain){
    Split s;
    vector<string> sep;

    // Separamos el string en espacios
    // Automáticamente separa por espacios si no mandamos argumentos
    sep = s.split_string(chain);
    
    // Regresamos nuestro vector
    return sep;
}

// Codficaremos nuestro vector a los caracteres que corresponden
void Decode::Chain(string code){
    Code cd;
    vector<string> cadena;

    // A "cadena" se le manda nuestro string con todo lo que contiene el archivo
    cadena = Separate(code);
    
    for(auto s : cadena){
        // Llamamos la función Word para obtener el valor de cada palabra
        cout << cd.Word(s);
    }

    cout << endl;
}