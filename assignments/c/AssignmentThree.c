// Question 1 --------->

// #include <stdio.h>
// int main () {
//     char c = 'A';
//     printf("%d",sizeof(c));
// }

// Question 2--------->

// #include <stdio.h>
// int main () {
//     int c = 'A';
//     printf("%d",sizeof(c));
// }

// Question 3--------->

// #include <stdio.h>
// int main () {
//     char a = 'A';
//     printf("%c",++a);
// }

// Question 4--------->

// #include <stdio.h>
// int main (){
//     int a = 45411338;
//     printf("%d", a%10);
// }

// Question 5--------->

// #include <stdio.h>
// int main (){
//     int a = 45411338;
//     printf("%d", a/10);
// }

// Question 6--------->
// #include<stdio.h>

// int main (){
//     int a=20,b=54,c;
//     printf("a = %d and b = %d\n",a,b);
//     c = a;
//     a = b;
//     b = c;
//     printf("%d %d",a,b);

// }

// Question 7--------->
/*
#include <stdio.h>
int main(){
    int a=5,b=10;
    a = a+b;//15
    b = a-b;//15-10=5
    a = a - b;
    printf("a=%d and b = %d",a,b);

}
*/
// Question 8--------->

/*
#include <stdio.h>
int main(){
    int a=5,b=10;
    a = a*b;//50
    b = a/b;//50/10=5
    a = a/b;
    printf("a=%d and b = %d",a,b);

}
*/

// Question 9 ------->

#include <stdio.h>
int main(){
    int a=6,b=8;
    a = b^a;
    b = a^b;
    a = b^a;
    printf("%d %d",a,b);

}

// Question 10--------->