
#include "payment.h"

int payment (float value, char status[20]){
	if ((value >= 0.01 && value <= 99999) && (strcmp( status, "estudante") == 0 || strcmp( status, "aposentado") == 0 || strcmp( status, "regular") == 0 || strcmp( status, "vip") == 0))
	    return 0;
	else if (value < 0.01 || value > 99999)
	    return 1;
	else
	    return 2;
}
