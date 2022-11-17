#include <stdio.h>

#define ARRAY_LENGTH 10
int main(){
//Exercise 1-13. Write a program to print a histogram of the lengths of words in its input. It is
//easy to draw the histogram with the bars horizontal; a vertical orientation is more challenging.

    int lengthCount[ARRAY_LENGTH];
    int c;
    int currentWordLength;
    int tallest = 0;

    for (int i = 0; i < ARRAY_LENGTH; ++i) {
        lengthCount[i] = 0;
    }

    while((c = getchar()) != EOF){

        if(c != ' ' && c != '\n' && c != '\t'){
            currentWordLength++;
        } else {

            if(currentWordLength < ARRAY_LENGTH){

                lengthCount[currentWordLength-1]++;

                if(lengthCount[currentWordLength-1] > tallest)
                    tallest = lengthCount[currentWordLength-1];
            }
            currentWordLength = 0;
        }
    }

    for(int i = tallest; i > 0; i--){
        for (int j = 0; j < ARRAY_LENGTH; ++j) {

            if(lengthCount[j] >= i)
                putchar('#');
            else
                putchar(' ');
            putchar(' ');
        }
        putchar('\n');
    }
}