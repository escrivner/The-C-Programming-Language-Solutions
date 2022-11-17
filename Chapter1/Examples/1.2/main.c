#include <stdio.h>

int main() {
    float fahr, celsius;
    float lower, upper, step;
    lower = 0;
    upper = 300.0;
    step = 20.0;

    fahr = lower;

    printf("%s", "\n-----FAHRENHEIT TO CELCIUS TABLE-----\n");
    while(fahr <= upper){

        celsius = 5.0 * (fahr-32.0) / 9.0;
        printf("%6.0f %12.2f\n", fahr, celsius);
        fahr = fahr + step;
    }
    return 0;
}



