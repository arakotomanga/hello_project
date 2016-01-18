#include <stdio.h>
#include "main.h"
#include "message.h"

int main(void){

	unsigned char i = LOOP_ITERATION;
	unsigned char msg[] = MSG_HELLO;

	for(;i>0;i--){
		printf("- %d-%s\n", i, msg);
	}

	return 0;
}
