
/*Code by G. Likhitheshwar (works on termux)
Feb 23, 2023
Link to License("https://github.com/likhith1101/fwcassgn/blob/main/LICENSE.md")
Find the equation of circle with centre (-2,3) and radius 4 
*/ 
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include"lib.h"

int main()
{
	// Declaring the variables
	double **c, **u;
	int r, f,y;
	int m=2, n=1;

	// Loading the matrices from the text files
	u = loadtxt("u.dat", m, n);

	// Converting the value of c to negative(u=-c)
	c = neg(u, m, n);
	f = -2;
	y =pow(linalg_norm(u,2),2)-f;
	r=sqrt(y);
	

	// Printing and saving the results
	print(c, m, n);
	printf("\n radius is %d",r);
	save(c,2,1,"c.dat");
	save_r(r);
}
