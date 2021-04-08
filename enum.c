#include<stdio.h>
typedef enum demo
{
	num,
	rollno,
	sub,
	class
}DEMO;
int main()
{
	printf("%d",DEMO.num);

	return 0;
}
