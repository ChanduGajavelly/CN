#include<stdio.h>
#include<string.h>
int main()
{
	char word1[100],word2[100];
	printf("Enter two codes with same length:\n");
	printf("Enter word1:");
	scanf("%s",word1);
	printf("Enter word2:");
	scanf("%s",word2);
	int n=strlen(word1);
	printf("Word1=%s\n",word1);
	printf("Word2=%s\n",word2);
	int count=0;
	for(int i=0;word1[i];i++)
	{
		if(word1[i]!=word2[i])
		{
			printf("Error distance at %d\n",i);
			count++;
		}
	}
	printf("Total hamming distance:%d\n",count);
	return 0;
}