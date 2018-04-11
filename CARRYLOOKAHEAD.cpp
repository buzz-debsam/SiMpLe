#include<iostream>
#include<vector>
using namespace std;

typedef char bit;
bit carry = 0;

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

int main()
{
	bit num1[32] = {0}, num2[32] = {0} , sum[32] = {0};
    int A , B ;
    cin>>A;
    fillNum( A, num1 );
    cin>>B;
    fillNum( B, num2 );
    
    for(int i=0;i<32;i++)
    {
    	sum[i]=num1[i] xor num2[i] xor carry;
    	carry=(num1[i] & num2[i]) or (carry & (num1[i] xor num2[i])); 
	}
	
	for( int i = 31; i >=0; -- i ){
        printf("%d",sum[i]) ;
    }
}

