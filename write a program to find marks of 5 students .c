#include<stdio.h>
int main()
{
    int marks[5],i;
    for (i=0;i<5;i++)
    {
        printf("Enter marks of %d student",i+1);
        scanf("%d",&marks [i]);
    }
    for(i=0;i<5;i++)
    {
        printf("Marks of %d are %d\n",i+1,marks[i]);
    }
    return 0;
}