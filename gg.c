#include <stdio.h>
#include <time.h>
#include <stdlib.h>

char *type(void);

int main() {
	
	srand(time(NULL));

	printf("-----BEGIN GEEK CODE BLOCK-----\n");
	printf("%s\n", type());
	printf("------END GEEK CODE BLOCK------\n");

	return 0;

}

char *type(void) {

	char *types[28] = {"GB", "GC", "GCA", "GCM", "GCC", "GE", "GED", "GFA",
		"GG", "GH", "GIT", "GJ", "GLS", "GL", "GMC", "GM", "GMD", "GMU", "GPA",
		"GP", "GS", "GSS", "GTW", "GO", "GU", "G!", "GAT", "GCS"};

	int i = rand() % 28;

	return types[i];

}
