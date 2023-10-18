#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char data[100],copy[100],d;
	printf("Enter a message:");
	scanf("%s",data);
	fflush(stdin);
	printf("Enter missing charecter:");
	scanf("%c",&d);
	int j=0,i,n=strlen(data);
	for(i=0;i<n;i++)
	{
		copy[j++]=data[i];
		if((data[i]+1)!=data[i+1] && i<(n-1))
		{
			copy[j++]=d;
		}
	}
	printf("%s",copy);
	return 0;
}
