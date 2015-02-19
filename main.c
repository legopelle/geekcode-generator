#include <stdio.h>
#include "gfields.h"


int main() {

	init();

	printf("-----BEGIN GEEK CODE BLOCK-----\n");
	printf("%s %s %s\n", type(), dress(), shape());
	printf("------END GEEK CODE BLOCK------\n");

	return 0;

}

