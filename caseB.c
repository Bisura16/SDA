#include <stdio.h>

int main(){
    char nama[] = "Bima";
    char *p;

    p = &nama;

    printf("%c\n", *p);
    printf("%c\n", *(p + 2));
    return 0;
}