// **** Operators ****

// 1.Arthematic Operators
// +,-,*,/,%

#include<stdio.h>
void main()
{
	int a;
	a=5*2;
	printf("%d\n",a);
}
// Output: 10


#include<stdio.h>
void main()
{
	int a;
	a=5/2;
	printf("%d\n",a);
}
// Output: 2    because int/int => int and float/int => float


#include<stdio.h>
void main()
{
	int a;
	a=5%2;
	printf("%d\n",a);
}
// Output: 1  because %(modulus) operator always returns the remainder


#include<stdio.h>
void main()
{
	int a;
	a=5.2%2;

	printf("%d\n",a);
} 
// Output: error  because % operator can't be used with the floating point numbers


/*
 Precidence Order
	*,/,%
	 +,-

But if more than one operator are present in an expression then which one 
should be solved first is determined by associative rule.

For arthematic operators associativity is from left to right
*/


// #include <stdio.h>
void main()
{
	int a=3/3/3/3;
	printf("%d",a);
}
// Output: 0  because 3/3/3/3 will be solved as (3/3)/3/3=(1/3)/3=(0/3)=0



// 2.Assignment Operator
// Denoted by '='

#include <stdio.h>
void main()
{
	int a;
	a=3; // 3 is assigned to a
}

// Associativity of assignment operator is from right to left



// 3.Relational Operator

// >,<,>=,<=,==,!=
// It always returns a boolean value i.e. 0 or 1

#include <stdio.h>
void main()
{
	int a=2,b=3,c;
	c=a>b;
	printf("%d",c);
}
// Output: 0  because b>a but here it is mentioned that a>b hence it is false so it will return 0

// Precidence of Arthematic operator > Relational operator

#include<stdio.h>
void main()
{
	int a=6,b=3,c=1,d;
	d=c+a>b;
	printf("%d",d);
}
// Output: 1  because it will be solved like this d=(c+a)>b = (1+6)>3 hence it will return 1



// 4.Logical Operator

// AND(&&)
// OR(||)
// NOT(!)

// Any non zero value in C will be considered as True


#include<stdio.h>
void main()
{
	int x;
	x=-5 && 2;
	printf("%d",x);
}
// Output: 1  because True && True will always return True


#include<stdio.h>
void main()
{
	int x;
	x=5 || 0;
	printf("%d",x);
}
// Output: 1  because True || True will always return True


// Short Circuiting
#include<stdio.h>
void main()
{
	int a=2,b=5,c;
	c= a || b++;
	printf("a=%d ",a);
	printf("b=%d ",b);
	printf("c=%d ",c);
}
// Output: a=2 b=5 c=1  
/*
If compiler finds a true value before || operator then it will not move further and return the value as 1
That's why b is not increment 
This concept is known as Short Circuiting 
Same goes for && operator 
If compiler finds a false value before && operator then it will not move further and return the value as 0
*/

#include<stdio.h>
void main()
{
	int a=0,b=5,c;
	c= a && b++;
	printf("a=%d ",a);
	printf("b=%d ",b);
	printf("c=%d ",c);
}
// Output: a=0 b=5 c=0


/*
Precidence Order:
	
	!
	*,/,%
	+,-
	>,<,>=,<=
	==,!=
	&&
	||
	=
*/


// 5.Increment Operator
/*
Two types:
a. Pre: ++x;
b. Post: x++;

Pre means first increment then use and Post means first use then increment
*/

#include<stdio.h>
void main()
{
	int a=5,b;
	b=a++;
	printf("a=%d, b=%d",a,b);
}
// Output: a=6, b=5 


#include<stdio.h>
void main()
{
	int a=5,b;
	b=++a;
	printf("a=%d, b=%d",a,b);
}
// Output: a=6, b=6 


#include<stdio.h>
void main()
{
	int a;
	a=5++;
	printf("a=%d",a);
}
// Output: Error  because increment operator can only applied on variables not in constants 



// 6.Decrement Operator
/*
Two types:
a. Pre: --x;
b. Post: x--;

Pre means first decrement then use and Post means first use then decrement
*/

#include<stdio.h>
void main()
{
	int a=5,b;
	b=a--;
	printf("a=%d, b=%d",a,b);
}
// Output: a=4, b=5 


#include<stdio.h>
void main()
{
	int a=5,b;
	b=--a;
	printf("a=%d, b=%d",a,b);
}
// Output: a=4, b=4


#include<stdio.h>
void main()
{
	int a;
	a=5--;
	printf("a=%d",a);
}
// Output: Error  because decrement operator can only applied on variables not in constants 



// 7.Shortcut Operator
// +=,-=,*=,/=,%=

#include<stdio.h>
void main()
{
	int x=2;
	x+=5; // x=x+5
	printf("%d",x);
}
// Output: 7



// 8.Ternary Operator
// ?:

#include<stdio.h>
void main()
{
	int a=2,b=1,c;
	c=a>b?a:b;
	printf("%d",c);
}
// Output: 2

/*
Explaination: 
a>b is the condition and if the condition is true then before the colon(:) part will be return
and if the condition is false then after the colon(:) part will be return
*/



// 9.sizeof Operator
// It is a unary operator which returns size in terms of bytes of its operand

#include<stdio.h>
void main()
{
	int a;
	a=sizeof(9);
	printf("%d",a);
}
// Output: 4   as integer takes 4 bytes


#include<stdio.h>
void main()
{
	int a;
	a=sizeof(6.9);
	printf("%d",a);
}
// Output: 8  because all the floating point numbers by default considered as double in C language


#include<stdio.h>
void main()
{
	int a;
	a=sizeof(6.9f);
	printf("%d",a);
}
// Output: 4   as it is mentioned 6.9f so it will be considered as float value


#include<stdio.h>
void main()
{
	int a=5,b;
	b=sizeof(a++);
	printf("a=%d, b=%d",a,b);
}
// Output: a=5, b=4 
/*
 In this case, the sizeof() operator does not evaluate the parameter. 
 Only the type of the parameter is checked and its size is returned. 
 so value of a is not incremented 
*/


/*
According to C99 Standards, the sizeof() operator only takes into account the type of the operand, 
which may be an expression or the name of a type (i.e int, double, float etc) 
and not the value obtained on evaluating the expression.
Hence, the operand inside the sizeof() operator is not evaluated. 
It is evaluated only if the type of the operand is variable length array because in that case,
the size can be determined only after the expression is evaluated.
*/


#include<stdio.h>
void main()
{
	int a=5,b;
	b=sizeof(int[a++]);
	printf("a=%d, b=%d",a,b);
}
// Output: a=6, b=20
/*
In this case, the sizeof() operator evaluates the parameter to see if there is any change of size. 
If found, then first the size is modified then the final size is returned
Hence it become an array int[a++]
therefore it's size will be calculated as follows:
4(size of integer) * 5(size of array)
As a is post increment so the size will be increment after the use of a
*/ 


#include<stdio.h>
void main()
{
	int a=5,b;
	b=sizeof(int[++a]);
	printf("a=%d, b=%d",a,b);
}
// Output: a=6, b=24
/*
As a is pre increment therefore a will be first increment and then use
int[++a] = int[6]
Hence size will be calculated as follows:
4(size of integer) * 6(size of array)
*/


// 10.Type Casting Operator
#include<stdio.h>
void main()
{
	int x,y;
	float z;
	x=5;
	y=2;
	z=(float)x/y;
	printf("z=%f",z);
}
// Output: 2.5

// (float) helps to convert the integer number to a float value
// because int/int => int



// 11.Comma Operator
#include<stdio.h>
void main()
{
	int a=(5,6,7);
	printf("a=%d",a);
}
// Output: 7
/*
Rules:
Comma Operator evaluate the first operand and discard it and return the second operand
a=(5,6,7)
a=((5,6),7)
a=(6,7)
a=7
*/