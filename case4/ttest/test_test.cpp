#include <stdio.h>                  

extern void sayHello (char*);

int main (int argc, char *argv[]) { 

    printf("\nNow Inside test-test !\n");    

    sayHello(argv[0]);              
    return 0;                       
}

