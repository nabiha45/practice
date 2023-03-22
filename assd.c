#include<stdio.h>
#include <string.h>
int main()
{
    char text[100];
    int i;
    int vowels,con,digits,others;
    int words=1;
    vowels=con=digits=others=0;



    printf("Enter a string :\n");
    gets(text);
     int l = strlen(text);

    for(i=0 ; i <= l-1; i++)
    {
        if(text[i]=='a' || text[i]=='e' || text[i]=='i' || text[i]=='o' || text[i]=='u' || text[i]=='A' || text[i]=='E' || text[i]=='I' || text[i]=='O' || text[i]=='U' )
        {
            vowels++;
        }

        else if((text[i]>='a' && text[i]<='z') || (text[i]>='A' && text[i]<='Z'))
        {
            con++;
        }

        else if(text[i]== ' ' || text[i]=='\0')
        {
            words++;
        }
        else if(text[i] >= '0' && text[i] <= '9')
        {
            digits++;
        }
        else
        {
            others++;
        }

    }


    printf("Vowel=%d\n",vowels);
    printf("consonant=%d\n",con);
    printf("words=%d\n",words);
    printf("Digits=%d\n",digits);
    printf("others=%d\n",others);


    return 0;

}
