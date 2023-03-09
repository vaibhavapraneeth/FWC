/*Code by M.Vaibhava Praneeth (works on termux)
march 8th, 2023
This code will help to Find the coordinates of the focus, axis of the parabola, the equation of the
directrix and the length of the latus rectum of a parabola whose equation is
given by x2 = −16y.
This code is open source to all 
https://github.com/vaibhavapraneeth/FWC/blob/main/LICENCE.md */
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include"lib.h"

int main()
{
	// Declaring the variables
	double **v, **u, **p, **n, **F,**m,**o;
	double f=0.0,l1 = 1.0,l2 = 0.0,c,L,fl;

	v=loadtxt("dat/v.dat",2,2);
	u=loadtxt("dat/u.dat",2,1);
	p=loadtxt("dat/p.dat",2,1);
	o=loadtxt("dat/omat.dat",2,2);
	n=scalar_mul(p,2,1,sqrt(l1));
	m=matmul1(o,n,2,2,2);
	print(n,2,1);
	save(n,2,1,"dat/n.dat");
	save(m,2,1,"dat/m.dat");
	c=(pow(linalg_norm(u,2),2)-l1*f)/(2*matmul(transpose(u,2,1),n,1,2,2));
	printf(" \n c is %lf\n\n ",c);
	F=scalar_mul(linalg_sub(scalar_mul(n,2,1,4),u,2,1),2,1,1/l1);
	print(F,2,1);
	save(F,2,1,"dat/F.dat");
	print(m,2,1);
	print(p,2,1);
	L=2*matmul(transpose(u,2,1),loadtxt("dat/p.dat",2,1),1,2,2);
	printf("\n L is %lf \n",L);
	fl=linalg_norm(F,2);
	printf("\n fl is  %lf",fl);
	
}
