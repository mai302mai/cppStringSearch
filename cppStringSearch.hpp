#include <iostream>
#include <cstring>

bool strSeach(std::string& srcStr, std::string searchStr){
    int srcStrLen = srcStr.length();
    int searchStrLen = searchStr.length();
    for(int i=0; i<srcStrLen; i++){
        if(srcStr[i] == searchStr[0]){
            for(int j=i, k=0; j<(srcStrLen + searchStrLen) && k<searchStrLen; j++, k++){
                if(j==searchStrLen-1 && srcStr[j] != searchStr[k]){
                    continue;
                }else if(j=i+searchStrLen){
                    return true;
                }
            }
        }
    }
    return false;
}