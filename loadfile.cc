#include "loadfile.h"
#include "split.h"
#include "decode.h"
#include <vector>

LoadFile::LoadFile(){
    m_file = "\0";
}

LoadFile::LoadFile(string File){
    load(File);
}

// Abrimos el archivo y verificamos que este en orden
bool LoadFile::load(string File){
    ifstream program; // Variable para manipular el archivo
    string frase; // En frase, se guarda todo lo que contenga el archivo

    // Verificamos que nuestro archivo si sea de tipo .lillie
    if(!ext(File))
       return false;

    // Abrimos el archivo, si hay error manda mensaje
    program.open(File);
    if ( !program.is_open() ) {
        cout << "El programa no pudo abrirse, quizá no se encuentra en el directorio o está dañado." << endl;
        return false;
    }
    
    // Si no hay error, obtenemos los datos del archivo
    getline(program, frase);

    // Se cierra el archivo
    program.close();
    
    //cout << "Lillie code: " << frase << endl;

    // Llamamos nuestra clase Decode para poder decodificar nuestro archivo
    // Se le manda nuestro string 
    Decode ds(frase);

    return true;

}

// Verificamos que sea de la extensión correcta
bool LoadFile::ext(string File){
    vector<string> extension;
    Split d;

    // Creamos un vector y llamamos la clase Split para
    // separar el string dado por puntos
    extension = d.split_string(File, ".");

    // Checamos el último valor del vector para saber su tipo
    if(extension.back() == "lillie"){
        // De ser exitoso, manda el mensaje 
        cout << "Programa válido :D" << endl; 
        return true;
    }
    else{
        // De lo contrario, te da una advertencia
        cout << "El programa ingresado no es de lenguaje \"lillie\"\n Favor de ingresar un archivo correcto" << endl;
        return false;
    }
    
}