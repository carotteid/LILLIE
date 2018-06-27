// Clase CODE
// Nos ayuda a decodificar cada palabra del lenguaje Lillie
// para que se convierta en algún código alfanumérico

#ifndef _CODE_H_
#define _CODE_H_

#include <string>

using namespace std;

class Code {
    public:
        Code();
        Code(string input);
        string Word(string input);
        string getLetter();
        string getCode();

    protected:
        string m_letter;
        string m_code;

    private:

};

#endif