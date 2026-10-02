#include <stdio.h>
#include<stdlib.h>

char* stringReverse(char* string){
    int count = 0;
    while (*string != '\0'){
        count++;
        string++;
    }

    string--;  // move back to last character

    char* answer = malloc((count + 1) * sizeof(char));
    char* start = answer;
    
    for(int i = 0; i < count; i++){
        *answer = *string; 
        string--;
        answer++;
    }
    
    *answer = '\0';

    return start;  
}
