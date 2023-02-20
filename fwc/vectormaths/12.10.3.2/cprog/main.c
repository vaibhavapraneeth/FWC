/*Code by M.Vaibhava Praneeth (works on termux)(
Feb 15, 2023*/
#include<stdio.h>       
#include<stdlib.h>
#include<math.h>
#include"lib.h"			//Functions
int main()                 
{
	double **a,**b,**c;		//initializing the variables as matrices
	double d,e,f,g,h,i;
	const double PI =  3.1415926;
	int m=3,n=1;
	a=loadtxt("a.dat",3,1);		//loading the point A from the text file
	b=loadtxt("b.dat",3,1);		//loading the point B from the text file
	d=linalg_norm(a,m);		//Finding the norm of the matrix A
	e=linalg_norm(b,m);		//Finding the norm of the matrix B	
	c=transpose(a,m,n);
	f=d*e;
	g= **matmul(c,b,1,3,1);
	h=(1/f)*g;
	i=acos(h)*180/PI;
	printf("\n The angle between a and b is %.2lf degrees",i);	//printing angle of A

}
