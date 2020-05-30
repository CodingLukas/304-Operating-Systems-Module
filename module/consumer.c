#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <elevator_calls.h>

int main(int argc, char **argv) {
	int ret = start_elevator();

	fprintf(stderr, "Returned: %d\n", ret);
	return -1;
}
