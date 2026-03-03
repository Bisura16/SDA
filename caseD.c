#include <stdio.h>

typedef struct
{
    int x;
    int y;

} koordinat;

int main (){
koordinat titik;
koordinat *Q;

Q = &titik;

Q->x = 7;
Q->y =9;

printf("%d, %d",titik.x, titik.y );

return 0;
}

    