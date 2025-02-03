#include <stdio.h>
int main() {
    char a;
    scanf("%c",&a);
    if(a=='a' || a=='i' || a=='e' || a=='o' || a=='u')  printf("Vowel");
    else if(a>=0 || a<0) printf("Digit");
    else if((!(a>='a') && !(a<='z') )|| (!(a>='A') && !(a<='Z'))) printf("Special Character");
    else printf("Consonant");
    return 0;
}