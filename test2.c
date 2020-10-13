
#include "myutils.h"

int main()
{
    int num;
    printf("Enter the Number");
    scanf("%d",&num);
    printf("\n Prime no:%d",isPrime(num));
    printf("\n Factorial of num :%d",factorial(num));
    printf("\n Palindrome :%d",isPalindrome(num));
    printf("\n Vsum is:%d",vsum(3,3,4,5));
    return 0;
}
