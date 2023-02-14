/*Code by M.Vaibhava Praneeth (works on termux)
Feb 14, 2023
If Q =(0,1) is equidistant from P= (5,-3) and R=(x,6)  Find the values of x.*/
#include<stdio.h>       
#include<stdlib.h>
#include<math.h>
#include"lib.h"			//Functions
int main()                 
{
	double **p,**q,**r,**r_1,**a,**b;		//initializing the variables as matrices
	double c,d;
	int m=2,n=1;
	p=loadtxt("p.dat",2,1);		//loading the point A from the text file
	q=loadtxt("q.dat",2,1);		//loading the point B from the text file
	r=loadtxt("r.dat",2,1);		//loading the point R from the text file
	r_1=loadtxt("r_1.dat",2,1);	//loading the point R_1 from the text file
	a=linalg_sub(p,q,m,n);		// Creating P-Q matrix
	b=linalg_sub(r,q,m,n); 		// Creating R-Q matrix
	c=linalg_norm(a,m);		//Finding the norm of the matrix A
	d=linalg_norm(b,m);		//Finding the norm of the matrix B
	if(c==d)
	{
	  printf("the distance between PQ is same as QR");
	}
}
