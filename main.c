#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int time, hour, min, sec;
    printf("input the second :");
    scanf("%i", &time);
  	 
    hour = time/3600;
   	min = (time%3600)/60;
   	sec = (time%3600)%60;
   	
   	printf("the time is %i : %i : %i\n", hour, min, sec);
   	
   	
    system("PAUSE");	
 

}
