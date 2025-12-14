/*Sum Difference Product*/
#include <stdio.h>

int main()
{
  int a,b,result;
  printf("Enter the number of  : ");
  scanf("%d",&a);
  printf("Enter the number of Length : ");
  scanf("%d",&b);
  result = a + b;
  printf("Sum: %d\n",result);
  result = a-b;
  printf("Difference: %d\n",result);
  result = a*b;
  printf("Product : %d",result);
  return 0;
}
