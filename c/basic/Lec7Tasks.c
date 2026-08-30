// #include <stdio.h>

// int main () {
//     int num;
//     printf("ENTER A NUMBER : ");
//     scanf("%d",&num);

//     if (num > 0) {
//         printf("Num is Positive !");
//     }
//     if (num <= 0) {
//         printf("Num is Non positive !");
//     }
// }

#include <stdio.h>

int main () {
    int num;
    printf("ENTER A NUMBER : ");
    scanf("%d",&num);

    num < 1 ? printf("Non Positive") : printf("Positive");

}