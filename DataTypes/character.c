#include<stdio.h>
int main()
{
    char c='A';
    
    printf("%c\n",c);

    c=66;
    printf("%c\n",c);
    
    //acquire user input
    printf("Input a character: ");
    c = getchar();
    printf("%c\n",c);
    
    return 0;
}
