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
    // Your solution here
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
    // Your solution here
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
    // Your solution here
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
    // Your solution here
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