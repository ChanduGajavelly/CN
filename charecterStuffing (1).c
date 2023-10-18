#include <stdio.h>  
int main()  
{  
    char originalData[100];
    char stuffedData[100];
    int j=0;
    printf("Enter String:\n");
    scanf("%s",originalData);
    printf("startChar=E\n");
    printf("endChar=V\n");
    for(int i=0;originalData[i];i++){
        if(originalData[i]=='E' || originalData[i]=='V'){
            stuffedData[j]='\\';
            j++;
        }
        stuffedData[j]=originalData[i];
        j++;
    }
    printf("Original Data: %s\n", originalData);  
    printf("Stuffed Data: %s\n", stuffedData);  
    return 0;  
}  