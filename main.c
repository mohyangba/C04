#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int seconds, hours, minutes, resultseconds;
    
    printf("input the total seconds : ");
    scanf("%d", &seconds);

    hours = seconds / 3600;
    seconds %= 3600;
    minutes = seconds / 60;
    resultseconds = seconds % 60;

    printf("%d:%02d:%02d\n", hours, minutes, resultseconds);

  system("PAUSE");
  return 0;
}
