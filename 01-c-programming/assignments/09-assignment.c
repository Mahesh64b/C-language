#include <stdio.h>
#include <stdlib.h>


// ============================================================
// QUESTION 01
// ============================================================

/*
 * Problem:
 * <Write the question here>
 */

void question01(void)
{
    int x,sum=0;
    printf("Enter the number : ");
    scanf("%d",&x);
    for (int i = 0; i < x; i++)
    {
        sum = sum + i;
    }
    printf("sum is : %d",sum);

}


// ============================================================
// QUESTION 02
// ============================================================

/*
 * Problem:
 * <Write the question here>
 */

void question02(void)
{
    int x,sum = 0;
    printf("Enter your number : ");
    scanf("%d",&x);

    for (int i = 1; i <= x; i++)
    {
        if (i % 2 == 0)
            sum = sum + i;
        
    }
    printf("%d",sum);
}


// ============================================================
// QUESTION 03
// ============================================================

/*
 * Problem:
 * <Write the question here>
 */


void question03(void)
{
    int x,sum = 0;
    printf("Enter your number : ");
    scanf("%d",&x);

    for (int i = 1; i <= x; i++)
    {
        if (i % 2 != 0)
            sum = sum + i;
        
    }
    printf("%d",sum);
}


// ============================================================
// QUESTION 04
// ============================================================

/*
 * Problem:
 * <Write the question here>
 */

void question04(void)
{
    int x,sum = 0;
    printf("Enter your number : ");
    scanf("%d",&x);

    for (int i = 1; i <= x; i++)
    {
        sum = sum + i*i;
    }
    printf("%d",sum);
}


// ============================================================
// QUESTION 05
// ============================================================

/*
 * Problem:
 * <Write the question here>
 */

void question05(void)
{
    int x,sum = 0;
    printf("Enter your number : ");
    scanf("%d",&x);

    for (int i = 1; i <= x; i++)
    {
        sum = sum + i*i*i;
    }
    printf("%d",sum);
}


// ============================================================
// QUESTION 06
// ============================================================

/*
 * Problem:
 * <Write the question here>
 */

void question06(void)
{
    int x,fact=1;
    printf("Enter the number : ");
    scanf("%d",&x);

    for (int i = 1; i <= x; i++)
    {
        fact = fact * i;
    }
    printf("%d is factorial of %d",fact,x);
}


// ============================================================
// QUESTION 07
// ============================================================

/*
 * Problem:
 * <Write the question here>
 */

void question07(void)
{
    int x,counter=1;
    printf("Enter the number : ");
    scanf("%d",&x);

    while ( x % 10 != 0)
    {
        counter++;
        x = x / 10;
    }
    printf("%d",--counter);
}


// ============================================================
// QUESTION 08
// ============================================================

/*
 * Problem:
 * <Write the question here>
 */

void question08(void)
{
    int x,isPrime=1;
    printf("Enter the number : ");
    scanf("%d",&x);

    for (int i = 2; i < x; i++)
    {
        if ( x % i == 0) 
        {
            printf("%d is not Prime number\n",x);
            isPrime=0;
            break;
        }
    }
    if(isPrime==1)printf("%d is prime number",x);
    
}


// ============================================================
// QUESTION 09
// ============================================================

/*
 * Problem:
 * <Write the question here>
 */

void question09(void)
{
    // Your solution here
}


// ============================================================
// QUESTION 10
// ============================================================

/*
 * Problem:
 * <Write the question here>
 */

void question10(void)
{
    int x,result=0;
    printf("Enter the number : ");
    scanf("%d",&x);

    while (x!=0)
    {
        int rem = x % 10;
        result = (result * 10) + rem;
        x = x / 10; 
    }
    printf("%d",result);
}


// ============================================================
// MAIN
// ============================================================

int main(void)
{
    int question;

    printf("Enter question number (1-10): ");
    scanf("%d", &question);

    switch (question)
    {
        case 1:
            question01();
            break;

        case 2:
            question02();
            break;

        case 3:
            question03();
            break;

        case 4:
            question04();
            break;

        case 5:
            question05();
            break;

        case 6:
            question06();
            break;

        case 7:
            question07();
            break;

        case 8:
            question08();
            break;

        case 9:
            question09();
            break;

        case 10:
            question10();
            break;

        default:
            printf("Invalid question number.\n");
    }

    return 0;
}