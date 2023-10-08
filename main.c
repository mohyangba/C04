#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int num1, num2;
  int x, y, z, m;
  float k;
  
  printf("Enter the first integers: ");
  scanf("%d", &num1);
  
  printf("Enter the second integers: ");
  scanf("%d", &num2);
  
  if (num2 == 0){
        printf("Error: You can't divide a number with 0");
        }
        else {
             x = num1 + num2;
             y = num1 - num2;
             z = num1*num2;
             k = (float)num1/num2;
             m = num1 % num2;
             }
             
  printf("+ result is %d\n", x);
  printf("- result is %d\n", y);
  printf("* result is %d\n", z);
  printf("/ result is %.2f\n", k);
  printf("%% result is %d\n", m);
  
  system("PAUSE");
  return 0;
}
