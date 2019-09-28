#include<stdio.h>
#include<math.h>
struct point
{
	float x;
	float y;
};
struct rectangle
{
	float length;
	float breadth;
	float area;
};
void numofrectangles(int *n)
{
	printf("Enter the number of rectangles:\n");
	scanf("%d",n);
}
void getcoordinates(struct point *p)
{
	printf("Enter the coordinates: \n");
	scanf("%f%f",&p->x,&p->y);
}
void init_rectangle(struct rectangle *r, float d1,float d2,float d3)
{
	if ((d1>d2)&&(d1>d3))
	{
		r->length=d2;
		r->breadth=d3;
	}
	else if((d2>d1)&&(d2>d3))
	{
		r->length=d1;
		r->breadth=d3;
	}
	else 
	{
		r->length=d1;
		r->breadth=d2;
	}
	r->area=r->length*r->breadth;
}
void distance(struct point p1,struct point p2,struct point p3,float *d1,float *d2,float *d3)
{
	*d1=sqrt(pow((p2.y-p1.y),2)+pow((p2.x-p1.x),2));
	*d2=sqrt(pow((p3.x-p2.x),2)+pow((p3.y-p2.y),2));
	*d3=sqrt(pow((p3.x-p1.x),2)+pow((p3.y-p1.y),2));
}
void output(struct point p1,struct point p2,struct point p3,struct rectangle r)
{
	printf("Area of rectangle with vertices (%.1f,%.1f),(%.1f,%.1f),(%.1f,%.1f) is %.1f\n",p1.x,p1.y,p2.x,p2.y,p3.x,p3.y,r.area);
}
void main()
{
	int n;
	float d1,d2,d3;
	struct point p1,p2,p3;
	struct rectangle r;
	numofrectangles(&n);
	for(int i=0;i<n;i++)
	{
		getcoordinates(&p1);
		getcoordinates(&p2);
		getcoordinates(&p3);
		distance(p1,p2,p3,&d1,&d2,&d3);
		init_rectangle(&r,d1,d2,d3);
		output(p1,p2,p3,r);
	}
}
