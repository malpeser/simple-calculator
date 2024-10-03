#include <stdio.h>
#include <math.h>
int opt;
long long int n1,n2,rs;
/*
    Simple Calculator with two inputs.
*/
long long int get_input() {
    long long int x;
    scanf("%lld", &x);
    return x;
}
double circle(double r) {
    const double pi = 3.1415926535897932384626433832795;
    rs = 2*pi*r;
}
double percent(double x, double p) {
    rs = x/100*p;
}
long long int fact(long long int x) { // Get the factorial of a number.
    long long int fact=1; // Initialize fact.
    for (long long int i=1; i<=x; i++) { // for loop to increase i until i<=x
        fact *=i; // Multiply fact by i.
    }
    rs = fact; // Return the factorial of x
}
long long int smop(long long int x, long long int y, long long int a) {
    if(a == 1) {
        rs = x+y; // addition
    } else if(a == 2) {
        rs = x-y; // subtraction
    } else if(a == 3) {
        rs = x*y; // multiplication
    }
    return -1;
}
float divs(float x, float y) {
    rs = x/y;
}

long long int sum(long long int x) {
    long long int sum = 0;
    for (long long int i = 0; i <= x; i++) {
        sum += i;
    }
    rs = sum;
}
void greetj() {
    n1 = 0; n2 = 0; rs = 0;
    printf("Welcome to the simple calculator.\nPlease input an operation.\n");
    printf(" 1-Addition\n");
    printf(" 2-Subtraction\n");
    printf(" 3-Multiplication\n");
    printf(" 4-Division\n");
    printf(" 5-Power\n");
    printf(" 6-Factorial\n");
    printf(" 7-SquareRoot\n");
    printf(" 8-Circle Perimeter\n");
    printf(" 9-Modulo\n");
    printf(" 0-Percent\n);
    printf(":");
    opt = (int) get_input();
    return;
}
void dnask() {
    printf("Please enter the first number.\n:");
    scanf("%lld", &n1);
    printf("Please enter the second number.\n:");
    scanf("%lld", &n2);
}
void snask() {
    printf("Please enter the number.\n:");
    scanf("%lld", &n1);
}
void swmup() {
    switch(opt) {
        case 1:
            dnask();
            smop(n1, n2, 1);
            break;
        case 2:
            dnask();
            smop(n1, n2, 2);
            break;
        case 3:
            dnask();
            smop(n1, n2, 3);
            break;
        case 4:
            dnask();
            divs(n1,n2);
            break;
        case 5:
            dnask();
            rs = pow(n1,n2);
            break;
        case 6:
            snask();
            fact(n1);
            break;
        case 7:
            snask();
            rs = sqrt(n1);
            break;
        case 8:
            snask();
            circle(n1);
            break;
        case 9:
            dnask();
            rs = n1%n2;
            break;
        case 0:
            dnask();
            percent(n1,n2);
            break;
}
}
int main(int argc, char* argv[]) {
    greetj();
    swmup();
    printf("The result is: %lld", rs);
    /*debug();*/
}






void debug() {
    printf("%lld - 5 plus 3\n", smop(5, 3, 1));
    printf("%lld - 5 minus 3\n", smop(5, 3, 2));
    printf("%lf - 5 Divided by 2.5\n", divs(5, 2.5));
    printf("%lld - 5 Multiplied by 3\n", smop(5, 3, 3));
    printf("%lld - Sum\n", sum(5));
    printf("%lld - Factorial of 5\n", fact(5));
    printf("%lf - 2nd Power of 5\n", pow(5,2));
    printf("%lf - Square root of 5\n", sqrt(5));
    printf("%lf - The perimeter of a circle with a radius of 5\n", circle(5));
    //printf("%lf - 5 mod 5 idk what its called lol\n", mod(5, 5));
}