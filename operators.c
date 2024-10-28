//program to show all the operators in C
#include<stdio.h>
#include<math.h>
int main()
{
   int a,b;
   printf("Enter 2 numbers:");
   scanf("%d %d",&a,&b);
   
   //ARITHEMATIC OPERATORS
   printf("a + b = %d\n", a + b);
   printf("a - b = %d\n", a - b);
   printf("a * b = %d\n", a * b);
   printf("a / b = %d\n", a / b);
   printf("a mod b = %d\n", a % b);
   printf("+a = %d\n", +a);
   printf("-a = %d\n", -a);
   printf("a++ = %d\n", a++);
   printf("a-- = %d\n", a--);

   //RELATIONAL OPERATORS
   printf("a < b: %d\n", a < b);
   printf("a > b: %d\n", a > b);
   printf("a <= b: %d\n", a <= b);
   printf("a >= b: %d\n", a >= b);
   printf("a == b: %d\n", a == b);
   printf("a != b: %d\n", a != b);

   //LOGICAL OPERATORS
   printf("a && b: %d\n", a && b);
   printf("a || b: %d\n", a || b);
   printf("!a: %d\n", !a);

   //BITWISE OPERATORS
   printf("a & b: %d\n", a & b);
   printf("a | b: %d\n", a | b);
   printf("a ^ b: %d\n", a ^ b);
   printf("~a: %d\n", ~a);
   printf("a >> b: %d\n", a >> b);
   printf("a << b: %d\n", a << b);

   //ASSIGNMENT OPERATORS
   printf("a = b: %d\n", a = b);
   printf("a += b: %d\n", a += b);
   printf("a -= b: %d\n", a -= b);
   printf("a *= b: %d\n", a *= b);
   printf("a /= b: %d\n", a /= b);
   printf("a mod= b: %d\n", a %= b);
   printf("a &= b: %d\n", a &= b);
   printf("a |= b: %d\n", a |= b);
   printf("a >>= b: %d\n", a >>= b); 
   printf("a <<= b: %d\n", a <<= b);

   return 0;
}