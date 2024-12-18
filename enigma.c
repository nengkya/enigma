#include <string.h>
#include <stdio.h>
#include <stdlib.h>


void * printfText(char * plainText) {

    void * pT = malloc(sizeof(void *));

    for (int i = 0; i < strlen(plainText) + 1; ++i) {

	printf("%c\n", plainText[i]);
	printf("%d\n", plainText[i]);

    }

    printf("\n");

    return pT;

}


int main() {

    char * plainText = "aaaaa", * plugBoard = "ab";

    printfText("Juju");

    printf("sizeof(\"%s\") = %ld\n\n", plainText, sizeof(plainText));

}
