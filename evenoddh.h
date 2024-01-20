/**
 * @author: EmiyaSyahriel
 * @date : 2024/01/20
 * @project : evenodd_lut
 * Licensed in CC-BY 4.0, see LICENSE file
 * 
 * Common header for evenodd_t data
 */

#ifndef EVENODD_H
#define EVENODD_H
#include <stdint.h>

#pragma pack(push, 1)
/* Even odd lookup table base data structure, this should be 5 byte in size */
typedef struct evenodd_data {
	/* The number to look at */
	uint32_t number;
	/* is this number even? */
	char     iseven;
} evenodd_t;
#pragma pack(pop)

#endif