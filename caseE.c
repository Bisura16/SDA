#include <stdio.h>
#include <string.h>

typedef struct people
{
    char nama [10];
    struct people *next;
}people;

int main(){
    people *Awal;
    people data[3];
    

    strcpy(data[0].nama, "Andi");
    strcpy(data[1].nama, "Budi");
    strcpy(data[2].nama, "Citra");

    data[0].next = &data[1];
    data[1].next = &data[2];
    data[2].next = NULL;

    Awal =&data[0];

    people *TEMP = Awal;
    while (TEMP != NULL)
    {
        printf("%s\n", TEMP->nama);
        TEMP = TEMP->next;
    }
    



    return 0;
}