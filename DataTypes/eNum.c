#include<stdio.h>
enum menu
{
    TEA,    //0
    COFFEE, //1
    JUICE,  //2
    BEER,   //3
};
int main()
{
    enum menu mario = COFFEE;
    enum menu me = BEER;

    printf("mario ordered: %d\n", mario);
    printf("me ordered: %d\n", me);
  
    return 0;
}


#include<stdio.h>
enum menu
{
    TEA=10,    //10
    COFFEE=20, //20
    JUICE=30,  //30
    BEER=40,   //40
};
int main()
{
    enum menu mario = COFFEE;
    enum menu me = BEER;

    printf("mario ordered: %d\n", mario);
    printf("me ordered: %d\n", me);
  
    return 0;
}


#include<stdio.h>
enum menu
{
    TEA,    //0
    COFFEE, //1
    JUICE=30,  //30
    BEER,   //31
};
int main()
{
    enum menu mario = COFFEE;
    enum menu me = BEER;

    printf("mario ordered: %d\n", mario);
    printf("me ordered: %d\n", me);

    return 0;
}
