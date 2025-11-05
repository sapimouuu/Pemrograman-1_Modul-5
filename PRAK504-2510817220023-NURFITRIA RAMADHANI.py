def reverse(nilai):
    angka=0
    while nilai!=0:
        sisa=nilai%10
        angka=angka*10+sisa
        nilai=nilai//10
    return angka
    
A,B=map(int,input().split())
A=reverse(A)
B=reverse(B)
C=A+B
print(reverse(C))