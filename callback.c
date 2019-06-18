#include "callback.h"

typedef void (*new_type)(void);

new_type arr[6]={func_case1,func_case2,func_case3,func_case4,func_case5};


void call_back(int mode)
{
	arr[mode]( );
}