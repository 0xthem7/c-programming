/*Find percentage of stdudent marks*/
#include <stdio.h>

int main()
{
  int sub1,sub2,sub3,sub4,sub5;
  float percentage,markGot;
  printf("Enter the subject 1 of Length : ");
  scanf("%d",&sub1);
  printf("Enter the subject 2 of Length : ");
  scanf("%d",&sub2);
  printf("Enter the subject 3 of Length : ");
  scanf("%d",&sub3);
  printf("Enter the subject 4 of Length : ");
  scanf("%d",&sub4);
  printf("Enter the subject 5 of Length : ");
  scanf("%d",&sub5);
  markGot = sub1 + sub2 + sub3 + sub4 + sub5; 
  percentage = (markGot/500) *100;
  printf("Percentage: %0.0f%\n",percentage);
  return 0;
}
