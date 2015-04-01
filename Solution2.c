#include <stdio.h>
#include <string.h>
#include "Solution2.h"

int main ()
{
	int bits[MEMSIZE];
	int size_of_stream_in_bits=50;
	int offset_32bit = 1;
    int i;
    
    for ( i = 0; i < MEMSIZE; i++ )
		bits[i] = 0;                             
    
    SetBit( bits, 0 );
	SetBit( bits, 1 );  	
    SetBit( bits, 3 );
    SetBit( bits, 20 );
	SetBit( bits, 22 );
	SetBit( bits, 30 );
	SetBit( bits, 34 );
	SetBit( bits, 42 );
	SetBit( bits, 43 );
	SetBit( bits, 80 );
	SetBit( bits, 95 );
	
	printf("Number of ones = %d\n", count_ones(&bits[offset_32bit], size_of_stream_in_bits));
}

int count_ones(int *pointer_to_memory, int size_of_stream_in_bits){
	int i;
	int number_of_ones=0;
	for(i=0; i<size_of_stream_in_bits; i++){
		if(TestBit(pointer_to_memory,i))
			number_of_ones++;
	}
	return number_of_ones;
}