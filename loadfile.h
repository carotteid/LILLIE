#ifndef _LOADFILE_H_
#define _LOADFILE_H_

#include <fstream>
#include <string>
#include <iostream>

using namespace std;

class LoadFile {
    public:
        LoadFile();
        LoadFile(string File);
        bool load(string File);
        bool ext(string File);

    private:
        string m_file; // Es el nombre de nuestro archivo, con todo y extensión

};

#endif