#include<stdio.h>
int sum(int a,int b)
{
     return a+b;
}
int diff(int a,int b)
{
	return a-b;
}
int product(int a,int b)
{
	return a*b;
}

int main()
{
        int a=5,b=6;
        printf("sum = %d",sum(a,b));
	printf("diff = %d",diff(a,b));
	printf("product = %d",product(a,b));
	return 0;
}
