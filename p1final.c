#include <stdio.h>
#include <math.h>
void input(float *x1,float *x2,float *y1,float *y2)
{
	printf("enter values");
	scanf("%f %f %f %f",x1,x2,y1,y2);
}
void distance(float x1,float x2,float y1,float y2,float *area)
{
	float a=(x2-x1)*(x2-x1) + (y2-y1)*(y2-y1);
	*area= sqrt(a);
}
void output(float x1,float x2,float y1,float y2,float area)
{
	printf("distance between the points are %f",area);
}
int main()
{
	float x1,x2, y1,y2,area;
	input(&x1,&x2,&y1,&y2);
	distance(x1,x2,y1,y2,&area);
	output(x1,x2,y1,y2,area);
	return 0;
}