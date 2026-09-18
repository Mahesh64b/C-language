// Assignment: Input and output in C Language

#include <stdio.h>
#include <stdlib.h>


// ============================================================
// QUESTION 01
// ============================================================

/*
 * Problem:
 * 1. Write a program to print Hello Students on the screen.
 */

void question01(void)
{
    printf("Hello Students");
}


// ============================================================
// QUESTION 02
// ============================================================

/*
 * Problem:
 * 2. Wiite a program to print Hello in the first line and Students in the second line.
 */

void question02(void)
{
    printf("Hello\nStudents");
}


// ============================================================
// QUESTION 03
// ============================================================

/*
 * Problem:
 *  3. Write a program to print “MySirG” on the screen. (Remember to print in double. quotes) 
 */


void question03(void)
{
    printf("\"MySirG\"");
}


// ============================================================
// QUESTION 04
// ============================================================

/*
 * Problem:
 * 4. Write a program 10 print \n on the screen.
 */

void question04(void)
{
    printf("\\n");
}


// ============================================================
// QUESTION 05
// ============================================================

/*
 * Problem:
 * 5. Wite a program to print \r on the screen.
 */

void question05(void)
{
    printf("\\r");
}


// ============================================================
// QUESTION 06
// ============================================================

/*
 * Problem:
 *  6. Wite a program to print “Teacher's Day” on the screen. (Remember to print double and single quotes) 
 */

void question06(void)
{
    printf("\"Teacher\'s Day\"");
}


// ============================================================
// QUESTION 07
// ============================================================

/*
 * Problem:
 *  7. Write a program to calculate sum of two integers. Numbers are taken from user through keyboard, 
 */

void question07(void)
{   
    int a,b;
    printf("Enter Two number : ");
    scanf("%d %d", &a, &b);
    printf("%d is sum of %d and %d", a + b, a, b);
}


// ============================================================
// QUESTION 08
// ============================================================

/*
 * Problem:
 *  8. Wite a program calculate square of a given number. Number is entered by the user. 
 */

void question08(void)
{
    int a;
    printf("Enter the number : ");
    scanf("%d", &a);
    printf("%d is square of %d", a*a, a);
}


// ============================================================
// QUESTION 09
// ============================================================

/*
 * Problem:
 * 9. Write a program to calculate area of a rectangle. Input appropriate data from the user. 
 */

void question09(void)
{
    int l,w,a;
    printf("Enter length and width of ractangle : ");
    scanf("%d %d", &l, &w);
    a = l * w;
    printf("Area of ractangle is %d", a);
}


// ============================================================
// QUESTION 10
// ============================================================

/*
 * Problem:
 *  10. WAP to find the area of the circle. Take radius of circle from user as input and print the result in below given format. 
 */

void question10(void)
{
    float r,a;
    printf("Enter radius of circle : ");
    scanf("%f", &r);
    a = 3.14 * (r * r);
    printf("%0.2f is Area of circle with radius of %0.2f", a, r);
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