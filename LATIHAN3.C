#include <stdio.h>

int main(){
    int n;
    int m;
    printf("MASUKAN TOTAL ARRAY A: ");
    scanf("%d", &n);
    printf("MASUKAN TOTAL ARRAY B: ");
    scanf("%d", &m);
    int A[n];
    int B[m];
    printf("MASUKAN ISI ARRAY A: ");
    for(int i = 0; i < n; i++){
        scanf("%d", &A[i]);
    }
    printf("MASUKAN ISI ARRAY B: ");
        for(int i = 0; i < m; i++){
        scanf("%d", &B[i]);
    }
    printf("A irisan B: ");
    for(int i = 0; i < n;i++){
        int found = 0;
        for (int j = 0; j < m; j++) {
            if(A[i] == B[j]){
                found = 1;
                break;
            }
        }
    if (found)
    {
    printf("%d ", A[i]);
    }
    }
}