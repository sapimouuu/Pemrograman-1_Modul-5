#include <stdio.h> 
#include <math.h>
#include <stdlib.h>
int hitung(int nilai1, int nilai2){
    int hasil=(nilai1-nilai2);
    return abs(hasil);
}
int mutlak(int angka){
    return abs(angka);
}

int main(){
int a,b,c,d;
scanf("%d",&a);
scanf("%d",&c);
scanf("%d",&b);
scanf("%d",&d);
int hasil = hitung(a,b) + hitung(c,d); 
printf("%d",mutlak(hasil));
return 0;
}
