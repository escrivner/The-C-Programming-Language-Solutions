#include <stdio.h>

#define IN 1
#define OUT 0

int main(){

    int c, lineCount, wordCount, charCount, state;
    state = OUT;
    lineCount = 0;
    wordCount = 0;
    charCount = 0;

    while((c = getchar()) != EOF){
        charCount++;

        if(c == '\n'){
            lineCount++;
        }
    }
    return 0;
}