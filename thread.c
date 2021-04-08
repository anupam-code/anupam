#include<stdio.h>
#include<pthread.h>
#include<unistd.h>
void *process1()
{  
	printf("Process1 start\n");
	sleep(4);
	printf("Process1 finished\n");
}
void *process2()
{  
	printf("Process2 start\n");
	sleep(2);
	printf("Process2 finished\n");
}
void *process3()
{  
	printf("Process3 start\n");
	sleep(3);
	printf("Process3 finished\n");
}
void *process4()
{  
	printf("Process4 start\n");
	sleep(6);
	printf("Process4 finished\n");
}
int main()
{
	pthread_t p1,p2,p3,p4;
        
	pthread_create(&p1,NULL,process1,NULL);
        pthread_create(&p2,NULL,process2,NULL);
        pthread_create(&p3,NULL,process3,NULL);
        pthread_create(&p4,NULL,process4,NULL);

	pthread_join(p1,NULL);
	pthread_join(p2,NULL);
	pthread_join(p3,NULL);
	pthread_join(p4,NULL);

	return 0;

}
