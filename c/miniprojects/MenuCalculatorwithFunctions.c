#include <stdio.h>
#include <conio.h>
void sum(float,float);
void sub(float,float);
void mul(float,float);
void div(float,float);



int main () {
    clrscr();
    int x;
    float num1,num2;
    while (1) {
        printf(
"   ______      __            __        __       __            __      \n"
"  / ____/___ _/ /____  _____/ /_____ _/ /____ _/ /_____ _____/ /__    \n"
" / /   / __ `/ __/ _ \\/ ___/ __/ __ `/ __/ _ `/ __/ __ `/ __  / _ \\   \n"
"/ /___/ /_/ / /_/  __/ /   / /_/ /_/ / /_/  __/ /_/ /_/ / /_/ /  __/   \n"
"\\____/\\__,_/\\__/\\___/_/    \\__/\\__,_/\\__/\\___/\\__/\\__,_/\\__,_/\\___/    \n\n"
);

        printf("Welcome to CALCULATOR proggrame\n\n");

        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("6. Exit Programme\n\n");

        printf("Enter your choice : ");
        scanf("%d",&x);
        if(x==6) break;

        printf("Enter Your First Number : ");
        scanf("%f",&num1);
        printf("Enter Your Second Number : ");
        scanf("%f",&num2);

        switch (x){
            case 1:
                sum(num1,num2);
                break;
            case 2:
                sub(num1,num2);
                break;
            case 3:
                mul(num1,num2);
                break;
            case 4:
                div(num1,num2);
                break;
            default: 
                printf("Enter a Valid Number please");
        }
    }

    getch():
}

void sum(float x,float y) {
    printf("Addition of %0.2f and %0.2f is %0.2f\n\n\n",x,y,x+y);
}
void sub(float x,float y) {
    printf("Subtraction of %0.2f and %0.2f is %0.2f\n\n\n",x,y,x-y);
}
void mul(float x,float y) {
    printf("Multiplication of %0.2f and %0.2f is %0.2f\n\n\n",x,y,x*y);
}
void div(float x,float y) {
    printf("Division of %0.2f and %0.2f is %0.2f\n\n\n",x,y,x/y);
}
