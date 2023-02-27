
/*Code by M.Vaibhava Praneeth (works on termux)(
Feb 27, 2023
This code will help to find the centre and radius of a given circle equation 
This code is open source to all 
https://github.com/vaibhavapraneeth/FWC/blob/main/LICENCE.md */
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
