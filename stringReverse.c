#include <stdio.h>
#include<stdlib.h>

void stringReverse(char* string){

    int count = 0;
    while (*string != '\0'){
        count = count +1;
        string++;
    }

    string = string - 1;//now string gets to '\0'

    char* answer = malloc((count+1)*sizeof(char));//allocate space for the null terminator
    char* start =answer;//needs to re-study
    for(int i = 0; i < count; i++){
        *answer = *string; 
        string--;
        answer++;
    }
    
    *answer = '\0';//important

    printf("%s\n", start);
    free(start);//free using orginal address
}
