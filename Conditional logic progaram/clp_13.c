//13WAP to find minimum number among 3 numbers using ternary operator
#include<stdio.h>
int main()
{
	int a,b,c,m;
	printf("Enter Number 1 :");
	scanf("%d",&a);
	printf("Enter Number 2 :");
	scanf("%d",&b);
	printf("Enter Number 3 :");
	scanf("%d",&c);
	m=(a<b)?(a<c?a:c):(b<c?b:c);


    printf("Lowest number is %d.",m);
 
    return 0;
}
