/*Code by M.Vaibhava Praneeth (works on termux)
Feb 15, 2023 
 This code will help to find the magnitude of 3 vectors A,B,C 
 This code is open source to all 
 https://github.com/vaibhavapraneeth/FWC/blob/main/LICENCE.md
 */
#include<stdio.h>       
#include<stdlib.h>
#include<math.h>
#include"lib.h"			//Functions
int main()                 
{
	double **a,**b,**c;		//initializing the variables as matrices
	double d,e,f;
	int m=3,n=1;
	a=loadtxt("a.dat",3,1);		//loading the point A from the text file
	b=loadtxt("b.dat",3,1);		//loading the point B from the text file
	c=loadtxt("c.dat",3,1);		//loading the point C from the text file
	d=linalg_norm(a,m);		//Finding the norm of the matrix A
	e=linalg_norm(b,m);		//Finding the norm of the matrix B
	f=linalg_norm(c,m);		//finding the norm of the matrix C
	printf("\nMagnitude of Vector A is %lf",d);	//printing magnitude of A
	printf("\nMagnitude of Vector B is %lf",e);	//printing magnitude of B
	printf("\nMagnitude of Vector C is %lf\n",f);	//printing magnitude of C
}
