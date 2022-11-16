#include <stdio.h>

int main(){

    int chars = 0;
    int blanks = 0;
    int lines = 0;

    char c;
    while((c = getchar()) != EOF){

        if(c == '\n'){
            lines++;
        } else if(c == ' '){
            blanks++;
        } else {
            chars++;
        }
    }

    printf("Char Count: %d\n", chars);
    printf("Space Count: %d\n", blanks);
    printf("Lines Count: %d\n", lines);
    return 0;
}