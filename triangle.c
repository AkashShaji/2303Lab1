/* triangle.c -- Akash Shaji */
#include <stdio.h>
#include <math.h>
main() {

	float  ax,ay,bx,by,cx,cy;
	
	printf("Enter the x- and y-coordinates of point A:-");
	scanf("%f",&ax);
	scanf("%f",&ay);
	printf("Enter the x- and y-coordinates of point B:-");
	scanf("%f",&bx);
	scanf("%f",&by);
	printf("Enter the x- and y-coordinates of point C:-");
	scanf("%f",&cx);
	scanf("%f",&cy);
	
	float  ab,bc,ac,circ,area;
	ab = sqrt((ax-bx)*(ax-bx) + (ay-by)*(ay-by));
	bc =  sqrt((cx-bx)*(cx-bx) + (cy-by)*(cy-by));
	ac =  sqrt((ax-cx)*(ax-cx) + (ay-cx)*(ay-cy));
	circ = ab + bc + ac;
	area = sqrt(circ/2 * (circ/2-ab) * (circ/2 - bc) * (circ/2- ac));
	printf("Length of AB is %f\n",ab);
	printf("Length of BC is %f\n",bc);
	printf("Length of AC is %f\n",ac);
	printf("Circumference is %f\n",circ);
	printf("Area is %f", area);
	return 0;
}




