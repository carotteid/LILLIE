#include "code.h"

Code::Code(){
    m_code = "\0";
    m_letter = "\0";
}

Code::Code(string input){
    Word(input);
}

string Code::Word(string input){
    string word;
    m_code = input;

    // Verificamos los caracteres
    // Primero las letras en MAYÚSCULAS
    if(input == "LillIe")
        word = "A";
    else if(input == "LilliE")
        word = "B";
    else if(input == "LILlie")
        word = "C";
    else if(input == "LIlLie")
        word = "D";
    else if(input == "LIllIe")
        word = "E";
    else if(input == "LIlliE")
        word = "F";
    else if(input == "LILLie")
        word = "G";
    else if(input == "LILlIe")
        word = "H";
    else if(input == "LILlIe")
        word = "I";
    else if(input == "LiLLiE")
        word = "J";
    else if(input == "LILLIe")
        word = "K";
    else if(input == "LILLIE")
        word = "L";
    else if(input == "lillIE")
        word = "M";
    else if(input == "lilLiE")
        word = "N";
    else if(input == "liLliE")
        word = "O";
    else if(input == "lIlliE")
        word = "P";
    else if(input == "lilLIE")
        word = "Q";
    else if(input == "liLlIE")
        word = "R";
    else if(input == "lIllIE")
        word = "S";
    else if(input == "LillIE")
        word = "T";
    else if(input == "liLLIE")
        word = "U";
    else if(input == "LIlliE")
        word = "V";
    else if(input == "LilLIE")
        word = "W";
    else if(input == "liLLIE")
        word = "X";
    else if(input == "lILLIE")
        word = "Y";
    else if(input == "LiLLIE")
        word = "Z";

    // Después valoramos los números
    else if(input == "lillie")
        word = "0";
    else if(input == "Lillie")
        word = "1";
    else if(input == "lIllie")
        word = "2";
    else if(input == "liLlie")
        word = "3";
    else if(input == "lilLie")
        word = "4";
    else if(input == "lillIe")
        word = "5";
    else if(input == "lilliE")
        word = "6";
    else if(input == "LIllie")
        word = "7";
    else if(input == "LiLlie")
        word = "8";
    else if(input == "LilLie")
        word = "9";

    // Al final valoramos un espacio,
    // Para saber cuando termina una palabra de otra
    else if(input == "LiLlIe")
        word = " ";

    // De lo contrario, mandamos un mensaje de error 
    // en vez de la codificación del caracter para indicar
    // si no se ingreso un valor correcto
    else
        word = "ErRoR!";

    m_letter = word;

    return word;
}

// Obtenemos la palabra codificada
string Code::getLetter(){
    return m_letter;
}

// Obtenemos la palabra en el lenguaje Lillie
string Code::getCode(){
    return m_code;
}