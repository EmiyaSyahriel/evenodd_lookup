/**
 * @author: EmiyaSyahriel
 * @date : 2024/01/20
 * @project : evenodd_lut
 * Licensed in CC-BY 4.0, see LICENSE file
 * 
 * Even-Odd number checking app, Algorithmic version
 */

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>

int main(int argc, const char** argv){
	/* Converted 1st argument to long */
	uint64_t s = strtoul(argv[1], NULL, 10);
	/* Result, least significant byte is always 1 in odd numbers or zero in even numbers */
	const char* result = ((s & 1) == 1)? "odd" : "even";
	/* Print the result */
	printf("%s\n", result);
	/* Exit with code 0 (No error happended, success) */
	return 0;
}