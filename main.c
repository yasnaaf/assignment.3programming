#include <stdio.h>
#include <stdlib.h>

int main()
{ int x,y,z;
printf("enter the length of triangle:\n");
scanf("%f %f %f",&x,&y,&z);
if(abs(x-y)>z && (x-y)<z){printf("these lengths can make a triangle");}
else{ printf("these lengths can not make a triangle");}
    return 0;
}
