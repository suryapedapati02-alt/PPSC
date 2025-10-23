#include<stdio.h>
int main(){
	int n,rem,digits=0,temp,d=0;
	printf("enter n value");
	scanf("%d",&n);
	temp=n;
	while(temp!=0)
	{
		d++;
		temp=temp/10;
	}
	temp=n;
	while(temp!=0)
	{
		rem=temp%10;
	sum=sum+pow(rem,d);
		temp=temp/10;
		
	}
	if (sum==n)
	printf("Amstrong number");
	else
	printf("not Amstrong number");
		return 0;
	}
}
