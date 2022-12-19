#include<stdio.h>
int main()
{
    char c;
    printf("Enter the alphabet: ");
    scanf("%c",&c);
    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A'|| c=='E'|| c=='I' || c=='O' || c=='U')
    {
         printf("The alphabet is a Vowel");
    }
    else{
        printf("The alphabet is a Consonant");
    }

return 0;
}
