#include <math.h>
#include <stdio.h>
int main()
{
	double a,b,c,d,root1, root2,realpart,imagpart;
	printf("enter coefficients a,b,and c:");
	scanf("%1f%1f%1f",&a,&b,&c);
	d=b*b-4*a*c;
	if(d>0){
		root1=(-b+sqrt(d))/(2*a);
		root2=(-b-sqrt(d))/(2*a);
		printf("root1=%.2lf and root2=%.2lf",root1,root2);
		
		
	}
	else if(d==0){
		root1=root2=-b/(2*a);
		printf("root1=root2=%.2lf",root1);
	}
	else{
		realpart=-b/(2*a);
		imagpart=sqrt(-d)/(2*a);
		printf("root1=%.2lf+%.2lf and root2=%.2lf-2lf",realpart,imagpart,realpart,imagpart);
		
	}
	return 0;
}
