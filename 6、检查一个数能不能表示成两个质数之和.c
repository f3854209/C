#include <stdio.h>
int prime(int n);
int main()
{
    int n, i, flag=0;
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    for(i=2; i<=n/2; ++i)
    {
        if (prime(i)!=0)
        {
            if ( prime(n-i)!=0)
            {
                printf("%d = %d + %d\n", n, i, n-i);
                flag=1;
            }

        }
    }
    if (flag==0)
      printf("%d can't be expressed as sum of two prime numbers.",n);
    return 0;}int prime(int n)      /* Function to check prime number */{
    int i, flag=1;
    for(i=2; i<=n/2; ++i)
       if(n%i==0)
          flag=0;
    return flag;
}
