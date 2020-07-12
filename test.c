#include<stdlib.h>
#include<stdio.h>


//#define SIZ 260L * 1024 * 1024 * 1024 // for kaldi
#define SIZ 98L * 1024 * 1024 * 1024 // for stout
int main() {
	printf("hello world\n");
	
	unsigned char *buf = malloc (SIZ);
	long long i = 0L;
	//buf[4L*1024*1024*1024] = 5;

	for (i = 0 ; i < SIZ; i+= 4096L) {
		buf[i] = i % 23;
		if (i % (10 * 1024 * 1024) == 0) {
			printf("MBs allocated: %ld\n", i / (1024 * 1024));
		}
	}
	
	return 1;
}
