#include <iostream>
#include <cstring>

#include "cppStringSearch.hpp"

using namespace std;

int main(){
    string srcStr = "absgrtbbrmai403maikkkkasnjwmai3056942maiacdcsddfrferfeunv";
    string searchStr = "1949";

    if(strSeach(srcStr, searchStr))
        cout<<"true";
    else
        cout<<"false";

    return 0;
}