/*Code by M.Vaibhava Praneeth (works on termux)(
Feb 21, 2023
This code is open source to all 
https://github.com/vaibhavapraneeth/FWC/blob/main/LICENCE.md */
#include<stdio.h>       
#include<stdlib.h>
#include<math.h>
#include"lib.h"			//Functions
int main()                 
{
	double **a,**b,**c,**e,**f;		//initializing the variables as matrices
	double d;
	int m=3,n=1;
	a=loadtxt("a.dat",3,1);		//loading the point A from the text file
	b=loadtxt("b.dat",3,1);		//loading the point B from the text file
	c=linalg_add(a,b,m,n);		//adding A and B 
        d=linalg_norm(c,3);		// finding norm of C
        printf("\n The norm of vector c is %lf\n ",d); // printing norm of c
        e=mult_float(1/d,c,3,1);	
        f=mult_float(5,e,3,1);		// finding the required vector	
        print(f,m,n); 			// printing the result
}
