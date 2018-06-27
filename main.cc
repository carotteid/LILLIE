#include "loadfile.h"

using namespace std;
 
int main (int argc, char** argv) {
    if ( argc != 2 ) {
        cout << "usage: main <programName>" << endl;
        return 1;
    }

    // alias
    char* programName = argv[1];

    LoadFile loadfile;
    loadfile.load(programName);
 
 return 0;

}