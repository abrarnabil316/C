#include<stdio.h>

//Spaceship Thrust Challenge

typedef enum
{
    NONE = 0,   
    LOW = 5, 
    MEDIUM = 9,  
    HIGH = 12,
    MAXIMUM = 20,   
} Thrust;
int main()
{
    printf("\n=== Spaceship Thrust ===\n\n");

    Thrust none = NONE;
    Thrust low = LOW;
    Thrust medium = MEDIUM;
    Thrust high = HIGH;
    Thrust maximum = MAXIMUM;

    printf("ready to go at level: %d\n", none);
    printf("take of at level: %d\n", maximum);
    printf("entering into the ionosphere: %d\n", medium);
    printf("traveling to deep space: %d\n", low);


    return 0;
}
