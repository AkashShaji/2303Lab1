/* triangle.c -- Akash Shaji */
#include <stdio.h>
#include <math.h>
int main() {

	float  ax,ay,bx,by,cx,cy;

	//Takes user input
	
	printf("Enter the x- and y-coordinates of point A:- ");
	scanf("%f %f",&ax,&ay);
	printf("Enter the x- and y-coordinates of point B:- ");
	scanf("%f %f",&bx,&by);
	printf("Enter the x- and y-coordinates of point C:- ");
	scanf("%f %f",&cx,&cy);
	
	//Calculates output values 
	float  ab,bc,ac,circ,area,s;
	ab = sqrt((ax-bx)*(ax-bx) + (ay-by)*(ay-by));
	bc =  sqrt((cx-bx)*(cx-bx) + (cy-by)*(cy-by));
	ac =  sqrt((ax-cx)*(ax-cx) + (ay-cx)*(ay-cy));
	circ = ab + bc + ac;
	s = circ/2;
	area = sqrt(s * (s-ab) * (s - bc) * (s- ac));
	
	//formats output and pritns to console
	printf("Length of AB is %f\n",ab);
	printf("Length of BC is %f\n",bc);
	printf("Length of AC is %f\n",ac);
	printf("Circumference is %f\n",circ);
	printf("Area is %f", area);
	return 0;
}




