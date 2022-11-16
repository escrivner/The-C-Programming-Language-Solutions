#include <stdio.h>

int main(){
    //Exercise 1-4. Write a program to print the corresponding Celsius to Fahrenheit table.
    float fahr, celcius;
    float lower, upper, step;
    lower = 0.0;
    upper = 100.0;
    step = 1.0;
    celcius = lower;

    printf("%s", "-----CELSIUS TO FAHRENHEIT TABLE-----");
    while(celcius <= upper){
        fahr = celcius * (9.0/5.0) + 32.0;
        printf("%10.0f %10.1f\n",celcius, fahr);
        celcius = celcius + step;
    }
    return 0;
}