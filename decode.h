#ifndef _DECODE_H_
#define _DECODE_H_

#include <string>
#include <vector>
#include "code.h"

using namespace std;

class Decode : public Code{
    public:
        Decode();
        Decode(string code);
        void Chain(string code);
        vector<string> Separate(string chain);
};

#endif