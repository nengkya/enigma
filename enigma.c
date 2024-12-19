#include <string.h>
#include <stdio.h>
#include <stdlib.h>


int main() {

    char plainText[] = "abcd", * plugBoard = "ab";

    for (int i = 0; i < strlen(plainText); ++i) {

	if (plainText[i] == plugBoard[0]) {

	    plainText[i] = plugBoard[1];

	}

	printf("%c\n", plainText[i]);

    }

}
