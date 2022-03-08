#include <stdio.h>
#include <conio.h>
void insert(int[] , int[]);
int main(){
    int i;
    int matB[] = {34,65,78,98,67};
    int matA[] = {23,6,89,35,65,78};
    insert(matA,matB);
    //Printing the matrix
    for (i = 0; i < 11; i++) {
        printf("a[%d] = %d\n",i,matA[i]);
    }
    return 0;
}
void insert(int a[] , int b[]){
    int i;
    for (i = 0; i < 5; i++) {
        a[i+8] = a[i+3];
        a[i+3] = b[i];
    }
}


