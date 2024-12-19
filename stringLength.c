#include <stdio.h>


int main() {

    char s[] = "Geeks";

    int l = *(&s + 1) - s - 1;
    
    printf("%d\n", l);

}
