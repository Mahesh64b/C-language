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
    char c = 'A';
    printf("%d",sizeof(c));
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
    int c = 'A';
    printf("%d",sizeof(c));
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
    char a = 'A';
    a++;
    printf("%c",a);
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
    int x = 47328;
    printf("%d",x % 10);
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
    int x = 47328;
    printf("%d",x / 10);
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
    int a=20,b=5,c=0;
    c = a;
    a = b;
    b = c;
    printf("a = %d and b = %d",a,b);

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
    int a=20,b=5;
    b = a+b;
    a = b-a;
    b = b-a;
    printf("a = %d and b = %d",a,b);
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
    int a=20,b=5;
    b = a*b;
    a = b/a;
    b = b/a;
    printf("a = %d and b = %d",a,b);
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