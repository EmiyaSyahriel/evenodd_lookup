/**
 * @author: EmiyaSyahriel
 * @date : 2024/01/20
 * @project : evenodd_lut
 * Licensed in CC-BY 4.0, see LICENSE file
 * 
 * Even-Odd number lookup table generator
 */

#include "evenoddh.h"
#include <stdio.h>

int main(){
	/* lookup table file handle, open in write-binary mode */
	FILE* f = fopen("evenodds.lut","wb");
	/* Where a singular lookup table data will be buffered in memory, changed from code, and then written to file */
	evenodd_t data;

	/* Current number, loop from 0 to 0xFFFFFFFF (32bit max unsigned integer) */
	for(uint32_t i = 0; i < 0xFFFFFFFF; i++)
	{
		/* the current number */
		data.number = i;
		/* is current number even? */
		data.iseven = (i & 1) != 1;
		/* write data to lookup table file handle */
		fwrite(&data, sizeof(evenodd_t), 1, f);
		/* flush written data to storage */
		fflush(f);
		
		/* if current number is divisible by 1000 and not zero */
		if(i % 1000 == 0 && i != 0){
			/* report progress */
			printf("%u (0x%08x) reached, %u bytes written\n", i, i, ftell(f));
		}
	}
	/* close file access, allow other app to read this file and release handle from this app */
	fclose(f);
	
	/* Exit with code 0 (No error happended, success) */
	return 0;
}