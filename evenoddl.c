/**
 * @author: EmiyaSyahriel
 * @date : 2024/01/20
 * @project : evenodd_lut
 * Licensed in CC-BY 4.0, see LICENSE file
 * 
 * Even-Odd number checking app, Lookup Table version
 */

#include "evenoddh.h"
#include <stdlib.h>
#include <stdio.h>

int main(int argc, const char** argv){
	/* Converted 1st argument to long */
	uint64_t s = strtoul(argv[1], NULL, 10);
	/* Where a singular lookup table data will be placed in memory and read directly from code */
	evenodd_t data;
	/* lookup table file handle, open in read-only binary mode */
	FILE* f = fopen("evenodds.lut", "rb");

	/* Check if lookup table file handle is invalid */
	if(f == NULL){
		/* Print error */
		printf("%s\n", "Cannot find evenodds.lut. Please generate using makelkup.exe");
		/* Exit early with code 1 */
		return 1;
	}

	/* Reset the file position to 0 */
	fseek(f, 0, SEEK_SET);
	
	/* Read the file to the data variable until the read byte size is no long the same as evenodd_t */
	while(fread(&data, sizeof(evenodd_t), 1, f) == sizeof(evenodd_t))
	{
		/* Is number in LUT same as input number? */
		if(s == data.number){
			/* Print result */
			printf("%s\n", data.iseven ? "even":"odd");
			/* Get out of while loop right away */
			break;
		}
	}
	
	/* Close the lookup table file */
	fclose(f);
	/* Exit with code 0 (No error happended, success) */
	return 0;
}