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
    int n;
    printf("Enter limit : ");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        printf("MySirG\n");
    }
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
    int n;
    printf("Enter your desired number : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        printf("%d\n",i);
    }
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
    int n;
    printf("Enter your desired number : ");
    scanf("%d", &n);
    while (n != 0)
    {
        printf("%d\n",n);
        n--;
    }
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
    int n;
    printf("Enter your desired number : ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0){
            printf("%d\n",i);
        }
    }
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
    int n;
    printf("Enter your desired number : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
            printf("%d\n",i);
    }
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
    // Your solution here
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
    int n;
    printf("Enter your desired number : ");
    scanf("%d", &n);
    while (n != 0)
    {
        if (n % 2 == 0)
            printf("%d\n",n);
        n--;
    }
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
    
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        printf("Square : %d\n",i*i);
    }
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
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        printf("Square : %d\n",i*i*i);
    }
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
    // Your solution here
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