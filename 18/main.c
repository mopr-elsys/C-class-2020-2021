#include <stdint.h>
#include <stdio.h>

void *read_image( const char *filepath );

int main( int argc, const char* argv[] ) {
	// Your code goes here
	// Compile with gcc main.c read.c
	// Submit only main.c !!!
	/*void* p = read_image(argv[1]);
	uint16_t *a = p;
	printf("BMP image height: %d\n", (uint32_t)a[9]);
	printf("BMP image widht: %d\n", (uint32_t)a[11]);
*/
	void* p = read_image(argv[1]);
	uint32_t *a = p;
	printf("PNG image widht: %d\n", (uint32_t)a[6]);
	printf("PNG image height: %d\n", (uint32_t)a[8]);
}
