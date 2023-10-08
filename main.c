#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int a;
    
    //1. 4로 나누어 떨어져야 함
    
    //2. 100으로 나누어 떨어지지 않아야 함
    
    //3. 위를 만족하지 않아도 400으로 나누어 떨어짐
    
    printf("input a year : "); 
    scanf("%i", &a);
    
    if ( (a%4==0 && a%100!=0) || (a%400==0) )
    {
         printf("%i is leap year.\n", a);
    }
    else
    {

        printf("%i is not leap year.\n", a);
    }
    
  system("PAUSE");
  return 0;
}
