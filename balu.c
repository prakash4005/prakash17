#include <stdio.h>
<<<<<<< HEAD
int main()
{
int c;
/* for loop */
for (c = 1; c <= 10; c++)
printf("%d\n", c);
return 0;
=======
 
int main()
{
  int n, c;
 
  printf("Enter a number\n");
  scanf("%d", &n);
 
  if (n == 2)
    printf("Prime number.\n");
  else
  {
    for (c = 2; c <= n - 1; c++)
    {
      if (n % c == 0)
        break;
    }
    if (c != n)
      printf("Not prime.\n");
     else
       printf("Prime number.\n");
  }
  return 0;
}
>>>>>>> mech

