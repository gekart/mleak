#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 64000

int main(void) {
	char *p;

	for(int i = 0; p = malloc(SIZE); i++) {
		if(NULL == p) {
			fprintf(stderr, "No memory\n");
			return EXIT_FAILURE;
		}
		memset(p, i, SIZE); // write to mem otherwise it remains unallocated
		printf("Allocated 64000 bytes %d times\n", i);
	}
	return EXIT_SUCCESS;
}
