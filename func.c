#include<stdio.h>
#include<stdlib.h>

void fun1()
{ 
	printf("function no.1");
}
void fun2()
{ 
	printf("function no.2");
}
void fun3()
{ 
	printf("function no.3");
}
void fun4()
{ 
	printf("function no.4");
}

int main()
{
	int i;
	char *fun[4] = {"fun1();","fun2();","fun3();","fun4();"};
        for(i =0;i<4;i++)
	//	printf("%s ",fun[i]);
	  fun[i];

	return 0;
}
