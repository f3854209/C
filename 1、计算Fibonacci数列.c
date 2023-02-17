/* Displaying Fibonacci sequence up to nth term where n is entered by user. */#include <stdio.h>int main()
{
  int count, n, t1=0, t2=1, display=0;
  printf("Enter number of terms: ");
  scanf("%d",&n);
  printf("Fibonacci Series: %d+%d+", t1, t2); /* Displaying first two terms */
  count=2;    /* count=2 because first two terms are already displayed. */
  while (count<n)  
  {
      display=t1+t2;
      t1=t2;
      t2=display;
      ++count;
      printf("%d+",display);
  }
  return 0;
}


/* Displaying Fibonacci series up to certain number entered by user. */

#include <stdio.h>
int main()
{
  int t1=0, t2=1, display=0, num;
  printf("Enter an integer: ");
  scanf("%d",&num);
  printf("Fibonacci Series: %d+%d+", t1, t2); /* Displaying first two terms */
  display=t1+t2;
  while(display<num)
  {
      printf("%d+",display);
      t1=t2;
      t2=display;
      display=t1+t2;
  }
  return 0;
}
