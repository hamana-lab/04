#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int time, min, sec;
    printf("input the second :");
    scanf("%i", &time);
   	
   	min = time/60;
   	sec = time%60;
   	
   	printf("the time is %i : %i\n", min, sec);
   	
   	system("PAUSE");

}
