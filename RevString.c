#include <stdio.h>
#include <string.h>

int main()
{
    char a[100],b[100],c[100],e[100];
    char d[]="paul";
    char f[]="Green_Paradise";
    int l,i,j;

    printf("Enter your name : ");
    scanf("%s",c);

    if(strcmp(c,d)==0)
    {
        printf("\nLisan Al Gaib \n");
        printf("Mahdie what do you forsee for us?\n");
        scanf("%s",e);
        
        for(i=0;i<100;i++)
        {
        if(strcmp(e,f)==0)
        {
            printf("Lisan_al_gaib \t");
        }
        }
               
    }
    else
    {
        printf("Hello %s \n",c);
    }

    printf("\nEnter a word : ");
    scanf("%s",a);
    l=strlen(a);

    printf("Length = %d \n",l);

    j=0;

    for(i=l-1;i>=0;i--)
    {
        b[i]=a[j];
        j++;
    }
    b[i]='\0';

    printf("a = %s \n",a);
    printf("b = %s \n",b);


    if(strcmp(a,b)==0)
    {
        printf("Entered word is palindrome\n");
    }
    else
    {
        printf("It is not a palindrome\n");
    }

}