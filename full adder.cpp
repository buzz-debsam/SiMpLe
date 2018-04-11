#include<bits/stdc++.h>
using namespace std;
typedef char bit;

bit carry = 0;

bit halfadd( bit A, bit B ){
    carry = A & B;
    return A ^ B;
}
bit fulladd( bit A, bit B ){
    bit xo = A ^ B;
    bit ret = carry ^ xo;
    carry = (carry & xo) | (A & B);
    return ret; 
}

void fillNum( int num, bit *array ){
    int i;
    for( i = 0; i < 32; ++ i ){
        array[i] = ( num >> i ) & 1;
    }
    for( i = 31; i >=0; -- i ){
        printf("%d",array[i]) ;
    }
    printf("\n");
}

int main(){ 
    bit num1[32] = {0}, num2[32] = {0} , sum[32] = {0};
    int A , B ;
    cin>>A;
    fillNum( A, num1 );
    cin>>B;
    fillNum( B, num2 );

    int r = 0;
    bit tmp = halfadd( num1[0], num2[0] );
    sum[0]=tmp;
    r = tmp;
    int i;
    for( i = 1; i < 32; ++i ){
        tmp = fulladd( num1[i], num2[i] );
        r += tmp << i;
        sum[i]=tmp;
    }
    for( i = 31; i >=0; -- i ){
        printf("%d",sum[i]) ;
    }
    printf("\n");
    putchar( carry ? '1' : '0' );
    printf("\n%d\n\n", r);
    return 0;
}
