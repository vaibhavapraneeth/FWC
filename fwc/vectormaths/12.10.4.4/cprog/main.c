/*Code by M.Vaibhava Praneeth (works on termux)(
Feb 15, 2023*/
#include<stdio.h>       
#include<stdlib.h>
#include<math.h>
#include"lib.h"			//Functions
int main()                 
{
	double **a,**b,**c,**d;		//initializing the variables as matrices
	double e,f,g;
	int m=2,n=1;
	a=loadtxt("a.dat",2,1);		//loading the point A from the text file
	b=loadtxt("b.dat",2,1);		//loading the point B from the text file
	c=linalg_add(a,b,m,n);		// addind A and B (A+B)
	d=linalg_sub(a,b,m,n);		// subtracting B from A (A-B)
	e= cross_prod(a,b)		// E= (A X B)
	g=2*e;				// G= 2(A X B)
	f= cross_prod(d,c);		// (A-B) X (A+B)
	printf("\n the cross prod of a,b is %lf",e); // printing A X B
	printf("\n the cross prod of c,d is %lf",f); // printing (A-B) X (A+B)
	if(g==f)
	{
	 printf("\n so 2(A X B) = (A-B) X (A+B)");
	}
}
