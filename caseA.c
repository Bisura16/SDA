#include <stdio.h>

int main (){
    char Huruf;
    char *P;

    Huruf = 'k';
    P = &Huruf;
    printf("%p\n", &Huruf);
    printf("%c\n", *P);
    printf("%c\n", Huruf);

return 0;
}