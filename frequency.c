
#include <stdio.h>
#include <string.h>

int main()
{
    char mehedi[100];
    int i,vowels=0,consonants=0;

    printf("Enter  the string : ");
    gets(mehedi);

    for(i=0;mehedi[i];i++)
    {
    	if((mehedi[i]>=65 && mehedi[i]<=90)|| (mehedi[i]>=97 && mehedi[i]<=122))
    	{

            if(mehedi[i]=='a'|| mehedi[i]=='e'||mehedi[i]=='i'||mehedi[i]=='o'||mehedi[i]=='u'||mehedi[i]=='A'||mehedi[i]=='E'||mehedi[i]=='I'||mehedi[i]=='O' ||mehedi[i]=='U')
		      vowels++;
            else
             consonants++;
        }

 	}


    printf("vowels = %d\n",vowels);
    printf("consonants = %d\n",consonants);

  return 0;
}
