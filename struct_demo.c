
#include<stdio.h>
#include<stdlib.h>

struct demo
{
	int a;
	float b;
};

void print_demo(struct demo *);

int main()
{
	struct demo *p = (struct demo *)malloc(sizeof(struct demo));
	printf("Enter the int no.");
	scanf("%d",&p->a);
	printf("Enter the float no.");
	scanf("%f",&p->b);

	print_demo(p);
	print();

	return 0;

}

void print_demo(struct demo *p)
{
	printf("a value is :%d",p->a);
	printf("\nb value is :%f",p->b);
	
}
