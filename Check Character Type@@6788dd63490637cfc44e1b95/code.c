#include <stdio.h>
int main() {
    char a;
    scanf("%c",&a);
    if(a=='a' || a=='i' || a=='e' || a=='o' || a=='u')  printf("Vowel");
    if(a>=0 || a<0) printf("Digit");
    if((!(a>='a') && !(a<='z') )|| (!(a>='A') && !(a<='Z'))) printf("Special Character");
    else printf("Consonant");
    return 0;
}