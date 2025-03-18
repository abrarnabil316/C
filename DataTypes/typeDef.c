#include<stdio.h>

typedef enum
{
    TEA,    //0
    COFFEE, //1
    JUICE,  //2
    BEER,   //3
} Menu;
int main()
{
    Menu mario = COFFEE;
    Menu me = BEER;

    printf("mario ordered: %d\n", mario);
    printf("me ordered: %d\n", me);

    return 0;
}
