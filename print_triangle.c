#include <stdio.h>
int main()
{//use two for loop to complete thi
int s,i,j;
printf("Please enter the number of layers in the triangle: ");
scanf("%d",&s);
for(i=1;i<=s;++i)
    {
        for(j=1;j<=i;++j)
        {
            printf("*");
        }
        printf("\n");
    }
return 0;

}

