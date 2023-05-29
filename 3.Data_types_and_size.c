/*

Data Type: Type of data which user want to store in the memory.

There are two types of data type
1. Pre-defined/Built-in/Premitive Data Type
2. User defined Data Type

Pre-defined Data Type:
a. int
b. float
c. double
d. char 

User defined Data Type:
a. structure
b. union
c. enum

unsigned and long are not the data types.
These are modifiers which helps to increse the size of integer.

*/

// size of pre-defined data types with respect to 32 bit compiler

#include<stdio.h>

void main()
{
	int a;
	unsigned int b;
	long int c;
	long long int d;
	float e;
	double f;
	char g;
	unsigned char h;

	printf("Size of int: %d bytes\n",sizeof(a));
	printf("Size of unsigned int: %d bytes\n ",sizeof(b));
	printf("Size of long int: %d bytes\n",sizeof(c));
	printf("Size of long long int: %d bytes\n",sizeof(d));
	printf("Size of float: %d bytes\n",sizeof(e));
	printf("Size of double: %d bytes\n",sizeof(f));
	printf("Size of char: %d byte\n",sizeof(g));
	printf("Size of unsigned char: %d byte\n",sizeof(h));

}