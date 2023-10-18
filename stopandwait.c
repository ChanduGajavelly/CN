#include<stdio.h>
#include<stdlib.h>
int main()
{
	
	printf("Enter no.of frames:");
	int frames;
	scanf("%d",&frames);
	printf("No.of frames=%d\n",frames);
	int i=1,j=1;
	while(frames>0)
	{
		printf("Sending frames %d\n",i);
		int x=rand()%10;
		if((x%10)==0)
		{
			printf("Waiting for 1 second\n");
			printf("Sending frames %d\n",i);
		}
		printf("ACK from frame %d\n",j);
		i++;
		j++;
		frames--;
	}
	printf("Stop and wait protocol stopped");
	return 0;
}