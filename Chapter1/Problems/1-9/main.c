#include <stdio.h>

int main(){

    int lastChar = getchar();
    int currentChar = lastChar;

    while(currentChar != EOF){

        if(currentChar != ' ' || lastChar != ' '){
            putchar(currentChar);
        }

        lastChar = currentChar;
        currentChar = getchar();
    }
}