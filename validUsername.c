#include <ctype.h>
#include <stdio.h>

int validUsername(char* name){
    char* point = name;
    int count = 0;
    while(*point!='\0'){
        count += 1;
        if (!isalnum(*point) && count >= 3){
            return 0;
        }
        point += 1;
    }

    if(count < 3){
        return 0;
    }
    return 1;
}
