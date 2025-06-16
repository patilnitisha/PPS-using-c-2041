#include<stdio.h>
int main()
{    
    int a[3][3] = {{1,4,5},{3,2,6},{6,7,8}};
    int i,j;
    
    for (i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ", a [i][j]);
        }
        printf("\n");
    }
    return 0;
}
