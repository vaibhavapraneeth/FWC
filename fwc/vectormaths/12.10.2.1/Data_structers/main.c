/*Code by M.Vaibhava Praneeth (works on termux)
Feb 15, 2023*/
#include<stdio.h>       
#include<stdlib.h>
#include<math.h>
#include"lib.h"			//Functions
int main()                 
{
	Node *a,*b,*c;		//initializing the variables as matrices
	double d,e,f;
	int m=3,n=1;
	a=loadtxt("dat/a.dat");		//loading the point A from the text file
	b=loadtxt("dat/b.dat");		//loading the point B from the text file
	c=loadtxt("dat/c.dat");		//loading the point C from the text file
	d=linalg_norm(a,m,n);		//Finding the norm of the matrix A
	e=linalg_norm(b,m,n);		//Finding the norm of the matrix B
	f=linalg_norm(c,m,n);		//finding the norm of the matrix C
	printf("\nMagnitude of Vector A is %lf",d);	//printing magnitude of A
	printf("\nMagnitude of Vector B is %lf",e);	//printing magnitude of B
	printf("\nMagnitude of Vector C is %lf\n",f);	//printing magnitude of C
}
