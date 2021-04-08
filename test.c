#include<stdio.h>
#include<unistd.h>
void process1()
{
	printf("Process1 start\n");
	sleep(4);
	printf("Process1 finished\n");
}
void process2()
{
	printf("Process2 start\n");
	sleep(2);
	printf("Process2 finished\n");
}
void process3()
{
	printf("Process3 start\n");
	sleep(3);
	printf("Process3 finished\n");
}
void process4()
{
	printf("Process4 start\n");
	sleep(6);
	printf("Process4 finished\n");
}

int main()
{ 
/*Call the rocess accordingly */
	process1();
	process2();
	process3();
	process4();

	return 0;

}
