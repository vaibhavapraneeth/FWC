/*Code by M.Vaibhava Praneeth (works on termux)(
Feb 23, 2023
This code will show the line perpendicular to other line when there is a intercept on x -axis
This code is open source to all 
https://github.com/vaibhavapraneeth/FWC/blob/main/LICENCE.md */
#include<stdio.h>       
#include<stdlib.h>
#include<math.h>
#include"lib.h"			//Functions
int main()                 
{
	double **a,**b,**z,**n,**c;		//initializing the variables as matrices

	a=loadtxt("a.dat",2,1);		//loading  a
	b=loadtxt("b.dat",2,1);		//loading  b
	z=loadtxt("z.dat",2,2);		//loading  c
	c=transpose(a,2,1);		// transposing a for finding it's perpendicular vector
	n=matmul(c,z,1,2,2);		// finding the perpenducal line matrix
	print(n,1,2);			//printing the perpendicular matrix				
	save(n,1,2,"n.dat");		// saving the matrix 
}
