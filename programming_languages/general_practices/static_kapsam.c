#include <stdio.h>

/* Global değişkenler */
int myVar1 = 100;
int myVar2 = 200;

void myMethod1() {
    printf("myMethod1 - global myVar1: %d\n", myVar1);


    /*bu scope'un içine girdiği için buradaki değeri aldı*/
    {
        int myVar1 = 200;   // local (gölgeleme)
        printf("inner block - local myVar1: %d\n", myVar1);
    }

    printf("myMethod1 - global myVar1 again: %d\n", myVar1);
}

void myMethod2() {
    int myVar1 = 300;

    printf("myMethod2 - local myVar1: %d\n", myVar1);
    printf("myMethod2 - global myVar2: %d\n", myVar2);
}

int main() {
    myMethod1();
    printf("-------------------\n");
    myMethod2();
    return 0;
}
