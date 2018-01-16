/* triangle.c -- Akash Shaji */
#include <stdio.h>
#include <math.h>
main() {
	double ax,ay,bx,by,cx,cy;
	
	printf("Enter the x- and y-coordinates of point A:-");
	scanf("%d",&ax);
	scanf("%d",&ay);
	printf("Enter the x- and y-coordinates of point B:-");
	scanf("%d",&bx);
	scanf("%d",&by);
	printf("Enter the x- and y-coordinates of point C:-");
	scanf("%d",&cx);
	scanf("%d",&cy);
	
	double ab,bc,ac,circ,area;
	ab = length(ax,bx,ay,by);
	bc = length(cx,bx,cy,by);
	ac = length(ax,cx,ay,cy);
	circ = ab + bc + ac;
	area = sqrt(circ * (circ-ab) * (circ - bc) * (circ - ac));
	printf("Length of AB is %d",ab);
	printf("Length of BC is %d",bc);
	printf("Length of AC is %d",ac);
	printf("Circumference is %d",circ);
	printf("Area is %d", area);
	
}

int length(double x1,double x2,double y1,double y2){
	return sqrt(pow(x1-x2)+pow(y1-y2),2);
}


