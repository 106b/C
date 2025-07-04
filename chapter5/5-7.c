// Rewrite line sorting program to use array supplied by main instead of alloc
// Have an array of pointers pointing to lines contained in buffer
// Sort the lines using quicksort
// Print sorted lines
#include <stdio.h>
#include <string.h>
#define LINE_LIMIT 200
#define CHAR_LIMIT 200
#define BUFFER 2000

static int readlines(char *lineptrs[], char linebuffer[]);
static void writelines(char *lineptrs[], int nlines);
int main(void)
{
	// Read Lines
	// Sort them
	// Write Lines
	char *lineptrs[LINE_LIMIT] = {NULL}; // array of pointers to lines
	char linebuffer[BUFFER] = ""; // storage for characters
	int nlines = 0;

	if ((nlines = readlines(lineptrs, linebuffer)) >= 0){
			printf("\nNumber of lines to sort: %d\n", nlines);
			writelines(lineptrs, nlines);
			}
	

	
}

static int readlines(char *lineptrs[], char linebuffer[])
{
	
	int nlines = 0; // number of lines input before error or empty newline
	char *bufptr = linebuffer; // next available spot in buffer	
	
	// dont need a temp, can write straight to buffer with fgets at next
	// available spot
	// Increase buffer by strlen + 1 to start writing at null character 
	
	
	return nlines;
}

static void writelines(char *lineptrs[], int nlines)
{
	for (int i = 0; i < nlines; i++){
		printf("%d: %s", i, lineptrs[i]);
	}
}
