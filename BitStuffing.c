#include<stdio.h>
#include<string.h>
int main()
{
    char data[50], stuff[50], dstuff[50];
    int i,j, count,size;
    printf("enter data\n");
    scanf("%s",data);
    size=strlen(data);
	strcpy(dstuff,data);
    count=0;
    j=0;
    for(i=0;i<size;i++){
        if(data[i]=='1'){
            count++;
        }
        else{
            count=0;
        }
        stuff[j]=data[i];
        j++;
        if(count==5 && data[i+1]=='1')
        {
            stuff[j]='0';
            j++;
            count=0;
        }
    }
    stuff[j]='\0';
    printf("stuffed data at intermediate site is \n 01111110   %s  01111110 \n",stuff);
	printf("destuff data: %s",dstuff);
}
