#include <stdio.h>
#include <string.h>
int main(){

    char Antrian[5][10] = {"ANDI", "BUDI", "CITRA", "DINA"};
    int N = sizeof(Antrian)/sizeof(Antrian[0]);

    for(int i = 0; i< 4; i++){
        printf("ANTRIAN[%d]: %s\n", i, Antrian[i]);
    }
    return 0;
}