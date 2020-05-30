#define _GNU_SOURCE
#include <unistd.h>
#include <sys/syscall.h>
#include <elevator_calls.h>

#define __NR_START_ELEVATOR 323

int start_elevator() {
	return syscall(__NR_START_ELEVATOR);
}
