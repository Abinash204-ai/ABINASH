#include <stdio.h>
#include <time.h>

int main() {
    struct timespec ts;
    time(&ts.tv_sec);  // Get the current time and store in ts.tv_sec
    printf("ts.tv_sec = %ld\n", (long)ts.tv_sec);  // Print the time as a long integer
    return 0;
}

