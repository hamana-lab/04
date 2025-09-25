#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int x,y,a,b,c,d,e;
    printf("input two integer :");
    scanf("%i %i", &x, &y);
    a = x+y;
    b = x-y;
    c = x*y;
    d = x/y;
    e = x%y;
    
    printf("+ result is %i\n",a);
    printf("- result is %i\n",b);
    printf("* result is %i\n",c);
    printf("/ result is %i\n",d);
    printf("%% result is %i\n",e);

    system("PAUSE");	

}
