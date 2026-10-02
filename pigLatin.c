#include <stdio.h>
#include <stdlib.h>

char* pigLatin(char* word){
    int count = 0;
    while(word[count]!='\0'){
        count ++;
    }
    char* answer = malloc((count+4)* sizeof(char));//the additional way +\0

    if(*word =='a' || *word =='e' || *word=='i' || *word =='o' || *word == 'u'){
        for(int i = 0;i<count; i++){
            answer[i] = word[i];
        }

        answer[count] = 'w';
        answer[count+1] = 'a';
        answer[count+2] = 'y';
        answer[count+3] = '\0';
    }
    else{
        char first = word[0];
        for(int i = 0;i<count -1; i++){
            answer[i] = word[i+1];
        }

        answer[count-1] = first;
        answer[count] = 'a';
        answer[count+1] = 'y';
        answer[count+2] = '\0';
    }
    
    return answer;
}
