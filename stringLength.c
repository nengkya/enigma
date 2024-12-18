#include <stdio.h>


int main() {

    char s[] = "Geeks";

    //int l = *(&s + 1) - s - 1;
    int l = (s + 1) - s; // This will calculate the distance between the two pointers.
    
    printf("%d\n", l);

}
