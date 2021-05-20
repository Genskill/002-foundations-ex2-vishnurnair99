#include <stdio.h>
#include <cs50.h>
#include <math.h>
int main(void){
     int side1,side2, side3,a,b,c;
     side1 = get_int("enter side 1\n");
     side2 = get_int("enter side 2\n");
     side3 = get_int("enter side 3\n");
     if (side1 > side2 && side1 > side3){
     	a = side1;
     	b = side2;
     	c = side3;
     }
     else if (side2 > side1 && side2 > side3){
     	a = side2;
     	b = side1;
     	c = side3;
     }

     else{
     	a = side3;
     	b = side2;
     	c = side1;
     }

	 a =a*a;
	 b =(b*b) + (c*c);
	 if(a==b){
	 	printf ("Yes\n");
	 }
	 else{
	 	printf("no\n" );
	 }
}
