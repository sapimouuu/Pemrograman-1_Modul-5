#include <stdio.h> 
int reverse(int nilai){
    int sisa,angka=0;
    while(nilai!=0){
        sisa=nilai%10;
        angka=angka*10+sisa;
        nilai=nilai/10;
    }
    return angka;
}

int main() { 
int A, B;
scanf("%d %d",&A,&B); 
A=reverse(A); 
B=reverse(B);
int C = A+B; 
printf("%d",reverse(C));
}