#include<stdio.h>
int main()
{
    int i,fact=1;
    
    for(i=1;i<=8;i++)
    {
        fact=fact*i;
    }
    printf("%d", fact);
    return 0;
}