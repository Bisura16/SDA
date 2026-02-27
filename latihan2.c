#include <stdio.h>

int main(){
    int A[] = {10,33,22,55};
    int B[] = {22, 55, 66};
    int n = sizeof(A)/sizeof(A[0]);
    int m = sizeof(B)/sizeof(B[0]);
    int AUB [n+m];
    int k = 0;
    for (int i = 0; i < n; i++){
        AUB [k++] = A[i];
    }
    for (int i = 0; i < m; i++){
        int found = 0;
        for(int j = 0; j<k; j++){
            if (B[i] == AUB[j])
            {
                found = 1;
                break;
            }
        }
        if(!found){
            AUB[k++] = B[i];
        }
    }
    printf("A GABUNGAN B = ");
    for(int i = 0; i<k; i++){
        printf("%d ", AUB[i]);
    }
}