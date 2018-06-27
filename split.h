#ifndef _SPLIT_H_
#define _SPLIT_H_

#include <iostream>
#include <string>
#include <vector>

class Split{
    public:
        bool is_in( char c, std::string sep ) {
            for ( auto s : sep ) {
                if ( c == s ) return true;
            }
            return false;
        }

        std::vector<std::string> split_string( std::string line,
                                            std::string sep=" \t\n\r\v" ) {
            std::string temp;
            std::vector<std::string> out;

            int i = 0;
            while ( i < (int)line.size() ) {
                while ( is_in(line[i], sep) && i < (int)line.size() ) i++;

                temp.clear();
                while ( !is_in(line[i], sep) && i < (int)line.size() ) {
                    temp.push_back(line[i]);
                    i ++;
                }

                if ( temp.size() > 0 ) out.push_back(temp);
            }

            return out;
        }
};

#endif

