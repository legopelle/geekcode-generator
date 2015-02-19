#include <stdlib.h>
#include <string.h>
#include <time.h>

#include "gfields.h"

void init() {

	srand(time(NULL));

	return;

}

char *type() {

	int i;
	int j;
	
	int indexes[28];

	char *type;
	type = malloc(8 * sizeof(char));
	
	char *types[28] = {"GB", "GC", "GCA", "GCM", "GCC", "GE", "GED", "GFA",
		"GG", "GH", "GIT", "GJ", "GLS", "GL", "GMC", "GM", "GMD", "GMU", "GPA",
		"GP", "GS", "GSS", "GTW", "GO", "GU", "G!", "GAT", "GCS"};

	i = rand() % 28;
	strcpy(type, types[i]);
	
	return type;

}


char *dress() {

	int random_index;
	char *dress;
	dress = malloc(5*sizeof(char));

	char *dresses[6] = {"d++", "d+", "d", "d-", "d--", "d---"};

	random_index = rand() % 6;
	strcpy(dress, dresses[random_index]);


	return dress;

}

char *shape() {

	int i;
	int j;

	char *shape;
	shape = malloc(9 * sizeof(char));

	char *shapes[7] = {"---", "--", "-", "", "+", "++", "+++"};

	i = rand() % 7;
	j = rand() % 7;

	strcpy(shape, "s");
	strcat(shape, shapes[i]);
	strcat(shape, ":");
	strcat(shape, shapes[j]);

	return shape;

}


int numIsMember(int n, int *array) {

	int i;
	int size;

	size = sizeof(array)/sizeof(array[0]);

	for (i=0; i < size; i++) {
		
		if (n == array[i]) {
			
			return 1;

		}
	}

	return 0;

}

