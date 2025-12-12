/*Simple interest*/
#include <stdio.h>

int main()
{
  int p,t,r;
  float SI;
  printf("Enter the value of principal : ");
  scanf("%d",&p);
  printf("Enter the value of time : ");
  scanf("%d",&t);
  printf("Enter the value of rate : ");
  scanf("%d",&r);
  SI = p*t*r;
  printf("Simple Interest: %f\n",SI);
  return 0;
}
