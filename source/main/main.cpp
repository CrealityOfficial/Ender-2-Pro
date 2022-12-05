/******************************************************************************
*Function:
*Programed by:Kim Ray	Mail:Ray_DK@163.com
*Complete date:
*Modified by:
*Modified date:
*Version:
*Remarks:
******************************************************************************/
#include "startup.h"
#include "../MarlinCore.h"

// Force init to be called *first*, i.e. before static object allocation.
// Otherwise, statically allocated objects that need libmaple may fail.
 __attribute__(( constructor (101))) void premain() {
	init();
}
int main(void){
	setup();

	while (1) {
		loop();
	}
}





/*
End of Files
*/
