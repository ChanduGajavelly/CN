#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char data1[100],data2[100],copy[100];
	printf("Enter any string:");
	scanf("%s",data1);
	fflush(stdin);
	printf("Enter missing string:");
	scanf("%s",data2);
	int i,j=0,n1=strlen(data1),n2=strlen(data2);
	for(i=0;i<n1;i++)
	{
		copy[j++]=data1[i];
		if((data1[i]+1)!=data1[i+1])
		{
			break;
		}
	}
	for(i=0;i<n2;i++)
	{
		copy[j++]=data2[i];
	}
	printf("%s",copy);
	return 0;
}
