#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void function(char *something){
    char *x = strdup(something);
    char *y = malloc(4);
    free(y);
    y[3] = 'a';
}

int main(void) {
    int a=0;
    int b[10];
    int* x = malloc(4 * sizeof(int));
    free(x);
    x[2] = 3;
    function("hmm");
    b[10] = 4;
    return 0;
}