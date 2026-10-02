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
    for (int i = 1; i <= 5; i++)
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
    for (int i = 1; i <= 10; i++)
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
    for (int i = 10; i >= 1; i--)
    {
        printf("%d\n",i);
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
    for (int i = 1; i <= 10; i++)
    {
        if ( i % 2 != 0)
            printf("%d\n",i);
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
    for (int i = 10; i >= 1; i--)
    {
        if ( i % 2 != 0)
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
    for (int i = 1; i <= 10; i++)
    {
        if (i % 2 == 0)
            printf("%d\n",i);
    }
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
    for (int i = 10; i >= 1; i--)
    {
        if (i % 2 == 0)
            printf("%d\n",i);
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
    for (int i = 1; i <= 10; i++)
    {
        printf("%d square is %d\n",i,i*i);
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
   for (int i = 1; i <= 10; i++)
    {
        printf("%d cube is %d\n",i,i*i*i);
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
    for (int i = 1; i <= 10; i++)
    {
        printf("5 x %d = %d\n",i,5*i);
    }
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