#include <stdio.h>
#include <stdlib.h>


//Member 5
int main(int argc, char*argv[])
{
    int a = 13;
    int b = 10;
    printf("Simple Calculator\n");
    print("a + b = %d\n", add_funct(a,b));
    print("a + b = %d\n", sub_funct(a,b));
    print("a + b = %d\n", mul_funct(a,b));
    print("a + b = %d\n", div_funct(a,b));

    return 0;
}