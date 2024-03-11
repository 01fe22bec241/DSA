//Modular program to compute distance between two points/
#include <stdio.h>
#include <math.h>
float distance(float x1,float x2,float y1,float y2); //function prototype
//function declaration
float distance(float x1,float x2,float y1,float y2)
{
    float s;
    s=sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
    return s;
}
int main()
{
    float x1,x2,y1,y2,s;
    printf("Enter x1,x2,y1,y2\n");
    scanf("%f%f%f%f",&x1,&x2,&y1,&y2);
    s=distance(x1,x2,y1,y2);
    printf("%.2f",s);
    return 0;
}
