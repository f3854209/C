#include <stdio.h>
int main()
{
    int i,j,rows;
    printf("Enter the number of rows: ");
    scanf("%d",&rows);
    for(i=1;i<=rows;++i)
    {
        for(j=1;j<=i;++j)
        {
           printf("* ");
        }
        printf("\n");
    }
    return 0;
}


#include <stdio.h>
int main()
{
    int i,j,rows;
    printf("Enter the number of rows: ");
    scanf("%d",&rows);
    for(i=1;i<=rows;++i)
    {
        for(j=1;j<=i;++j)
        {
           printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}


#include <stdio.h>
int main()
{
    int i,j,rows;
    printf("Enter the number of rows: ");
    scanf("%d",&rows);
    for(i=rows;i>=1;--i)
    {
        for(j=1;j<=i;++j)
        {
           printf("* ");
        }
    printf("\n");
    }
    return 0;
}


#include <stdio.h>
int main()
{
    int i,space,rows,k=0;
    printf("Enter the number of rows: ");
    scanf("%d",&rows);
    for(i=1;i<=rows;++i)
    {
        for(space=1;space<=rows-i;++space)
        {
           printf("  ");
        }
        while(k!=2*i-1)
        {
           printf("* ");
           ++k;
        }
        k=0;
        printf("\n");
    }
    return 0;
}



#include<stdio.h>
int main()
{
    int rows,i,j,space;
    printf("Enter number of rows: ");
    scanf("%d",&rows);
    for(i=rows;i>=1;--i)
    {
        for(space=0;space<rows-i;++space)
           printf("  ");
        for(j=i;j<=2*i-1;++j)
          printf("* ");
        for(j=0;j<i-1;++j)
            printf("* ");
        printf("\n");
    }
    return 0;
}