// program to calculate Sum of digits using Recursion
 
#include<stdio.h>
#include<conio.h>

// Function declaration 
int SumOfDigits(int num);


int main()
{
    int num, sum;
    
    printf("Input Number: ");
    scanf("%d", &num);
    
    sum = SumOfDigits(num);
    
    printf("Sum of digits: %d",sum);
    
    return (0);
}


//Recursive function to find sum of digits of a number

int SumOfDigits(int num)
{
      // Base condition
    if(num == 0)
        return 0;
        
    return ((num % 10) + SumOfDigits(num / 10));
}
