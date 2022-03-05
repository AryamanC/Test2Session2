#include<stdio.h>
void input(float *x1,float *x2,float *x3,float *y1,float *y2,float *y3)
{
	printf("enter points");
	scanf("%f %f %f %f %f %f",x1,x2,x3,y1,y2,y3);
}
int is_triangle(float x1,float x2,float x3,float y1,float y2,float y3)
{
	int istriangle;
  float a=x1*(y2-y3) + x2*(y3-y1) + x3*(y1-y2);
	float area=1/2*a;
	if(area>0)
	{
		istriangle=1;
	}
	else
	{
		istriangle=0;
	}
	return istriangle;
} 
void output(float x1,float x2,float x3,float y1,float y2,float y3, int istriangle)
{
	if(istriangle==1)
	{
		printf("it is a triangle");
		
	}
	else
	{
		printf("it is not a triangle");
	}
	
}

int main()
{
	float x1,x2,x3,y1,y2,y3;
	input(&x1,&x2,&x3,&y1,&y2,&y3);
	float istriangle;
	istriangle= is_triangle(x1,x2,x3,y1,y2,y3);
	output(x1,x2,x3,y1,y2,y3,istriangle);
	return 0;
}