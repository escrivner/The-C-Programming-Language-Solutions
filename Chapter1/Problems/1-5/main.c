#include <stdio.h>

#define UPPER 300
#define LOWER 0
#define DECREMENT 20

main(){

    float fahr;
    for( fahr = UPPER; fahr >= LOWER; fahr = fahr - DECREMENT){

        printf("%10.0f %10.2f\n", fahr, (5.0/9.0)*(fahr-32));
    }


}