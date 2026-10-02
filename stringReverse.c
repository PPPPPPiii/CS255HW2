#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* stringReverse(char* string){
    int len = strlen(string);  // use library function instead of manual loop
    char* result = malloc((len + 1) * sizeof(char));
    
    // Direct index mapping: result[i] = string[len-1-i]
    for(int i = 0; i < len; i++){
        result[i] = string[len - 1 - i];
    }
    
    result[len] = '\0';
    return result;
}
