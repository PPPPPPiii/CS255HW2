#include <stdio.h>
#include <string.h>

void stringReverse(char* string){
    int len = strlen(string);
    
    // Swap characters from both ends moving toward the middle
    for(int i = 0; i < len / 2; i++){
        char temp = string[i];
        string[i] = string[len - 1 - i];
        string[len - 1 - i] = temp;
    }
}
