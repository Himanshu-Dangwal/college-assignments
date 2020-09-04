#include<iostream>
#include<stdio.h>

int main()
{
	signed int a=-5;
	int b=10;
	float k=10.10;
	char c='k';
	double d=100;
}
/*The signed int a gets stored in memory as 2's complement::

Binary representation for a=5 will be =  0000 0101
      1's Complement for this will be =  1111 1010
      
Adding 1 in this gives 2's complement =  1111 1011

So -5 in Memory will be represented as:::   1111 1011*/


// THe unsigned int b=10 is represented in binary using 8bits with all bits as data bits:::
