#include <stdio.h>
#include <string.h>
#define CP437_LEN 256

char* conv(int c);
void go();
void og();

char cv[16];
char* cp437[CP437_LEN] = {
	"\xe2\x82\x92", "\xe2\x98\xba", "\xe2\x98\xbb", "\xe2\x99\xa5",
	"\xe2\x99\xa6", "\xe2\x99\xa3", "\xe2\x99\xa0", "\xe2\x80\xa2",
	"\xe2\x97\x98", "\xe2\x97\x8b", "\xe2\x97\x99", "\xe2\x99\x82",
	"\xe2\x99\x80", "\xe2\x99\xaa", "\xe2\x99\xab", "\xe2\x98\xbc",
	"\xe2\x96\xba", "\xe2\x97\x84", "\xe2\x86\x95", "\xe2\x80\xbc",
	"\xc2\xb6", "\xc2\xa7", "\xe2\x96\xac", "\xe2\x86\xa8",
	"\xe2\x86\x91", "\xe2\x86\x93", "\xe2\x86\x92", "\xe2\x86\x90",
	"\xe2\x88\x9f", "\xe2\x86\x94", "\xe2\x96\xb2", "\xe2\x96\xbc",
	"\x20", "\x21", "\x22", "\x23",
	"\x24", "\x25", "\x26", "\x27",
	"\x28", "\x29", "\x2a", "\x2b",
	"\x2c", "\x2d", "\x2e", "\x2f",
	"\x30", "\x31", "\x32", "\x33",
	"\x34", "\x35", "\x36", "\x37",
	"\x38", "\x39", "\x3a", "\x3b",
	"\x3c", "\x3d", "\x3e", "\x3f",
	"\x40", "\x41", "\x42", "\x43",
	"\x44", "\x45", "\x46", "\x47",
	"\x48", "\x49", "\x4a", "\x4b",
	"\x4c", "\x4d", "\x4e", "\x4f",
	"\x50", "\x51", "\x52", "\x53",
	"\x54", "\x55", "\x56", "\x57",
	"\x58", "\x59", "\x5a", "\x5b",
	"\x5c", "\x5d", "\x5e", "\x5f",
	"\x60", "\x61", "\x62", "\x63",
	"\x64", "\x65", "\x66", "\x67",
	"\x68", "\x69", "\x6a", "\x6b",
	"\x6c", "\x6d", "\x6e", "\x6f",
	"\x70", "\x71", "\x72", "\x73",
	"\x74", "\x75", "\x76", "\x77",
	"\x78", "\x79", "\x7a", "\x7b",
	"\x7c", "\x7d", "\x7e", "\xe2\x8c\x82",
	"\xc3\x87", "\xc3\xbc", "\xc3\xa9", "\xc3\xa2",
	"\xc3\xa4", "\xc3\xa0", "\xc3\xa5", "\xc3\xa7",
	"\xc3\xaa", "\xc3\xab", "\xc3\xa8", "\xc3\xaf",
	"\xc3\xae", "\xc3\xac", "\xc3\x84", "\xc3\x85",
	"\xc3\x89", "\xc3\xa6", "\xc3\x86", "\xc3\xb4",
	"\xc3\xb6", "\xc3\xb2", "\xc3\xbb", "\xc3\xb9",
	"\xc3\xbf", "\xc3\x96", "\xc3\x9c", "\xc2\xa2",
	"\xc2\xa3", "\xc2\xa5", "\xe2\x82\xa7", "\xc6\x92",
	"\xc3\xa1", "\xc3\xad", "\xc3\xb3", "\xc3\xba",
	"\xc3\xb1", "\xc3\x91", "\xc2\xaa", "\xc2\xba",
	"\xc2\xbf", "\xe2\x8c\x90", "\xc2\xac", "\xc2\xbd",
	"\xc2\xbc", "\xc2\xa1", "\xc2\xab", "\xc2\xbb",
	"\xe2\x96\x91", "\xe2\x96\x92", "\xe2\x96\x93", "\xe2\x94\x82",
	"\xe2\x94\xa4", "\xe2\x95\xa1", "\xe2\x95\xa2", "\xe2\x95\x96",
	"\xe2\x95\x95", "\xe2\x95\xa3", "\xe2\x95\x91", "\xe2\x95\x97",
	"\xe2\x95\x9d", "\xe2\x95\x9c", "\xe2\x95\x9b", "\xe2\x94\x90",
	"\xe2\x94\x94", "\xe2\x94\xb4", "\xe2\x94\xac", "\xe2\x94\x9c",
	"\xe2\x94\x80", "\xe2\x94\xbc", "\xe2\x95\x9e", "\xe2\x95\x9f",
	"\xe2\x95\x9a", "\xe2\x95\x94", "\xe2\x95\xa9", "\xe2\x95\xa6",
	"\xe2\x95\xa0", "\xe2\x95\x90", "\xe2\x95\xac", "\xe2\x95\xa7",
	"\xe2\x95\xa8", "\xe2\x95\xa4", "\xe2\x95\xa5", "\xe2\x95\x99",
	"\xe2\x95\x98", "\xe2\x95\x92", "\xe2\x95\x93", "\xe2\x95\xab",
	"\xe2\x95\xaa", "\xe2\x94\x98", "\xe2\x94\x8c", "\xe2\x96\x88",
	"\xe2\x96\x84", "\xe2\x96\x8c", "\xe2\x96\x90", "\xe2\x96\x80",
	"\xce\xb1", "\xc3\x9f", "\xce\x93", "\xcf\x80",
	"\xce\xa3", "\xcf\x83", "\xc2\xb5", "\xcf\x84",
	"\xce\xa6", "\xce\x98", "\xce\xa9", "\xce\xb4",
	"\xe2\x88\x9e", "\xcf\x86", "\xce\xb5", "\xe2\x88\xa9",
	"\xe2\x89\xa1", "\xc2\xb1", "\xe2\x89\xa5", "\xe2\x89\xa4",
	"\xe2\x8c\xa0", "\xe2\x8c\xa1", "\xc3\xb7", "\xe2\x89\x88",
	"\xc2\xb0", "\xe2\x88\x99", "\xc2\xb7", "\xe2\x88\x9a",
	"\xe2\x81\xbf", "\xc2\xb2", "\xe2\x96\xa0", "\xc8\xb3"
};
int one_line;

int main(int argc, char** argv) {
	int c;
	int reverse;

	reverse = 0;
	one_line = 0;
	if (argc > 1) {
		if (!strcmp(argv[1], "-r")) {
			reverse = 1;
		} else if (!strcmp(argv[1], "-1")) {
			one_line = 1;
		}
	}
	if (reverse) {
		og();
	} else {
		go();
	}
	//fprintf(stderr, "reverse = %d\n", reverse);
	/*while (1) {
		c = fgetc(stdin);
		if (c == EOF) {
			return 0;
		}
		//fprintf(stderr, "p");
		fputs(conv(c), stdout);
	}
	return 1;*/
}

char* conv(int c) {
	if (c >= 256 || c < 0) {
		fprintf(stderr, "invalid conv arg: %d\n", c);
		return 0;
	}
	//fprintf(stderr, "v");
	return cp437[c];
}

void go() {
	int c;
	int p = 0;

	while (1) {
		c = fgetc(stdin);
		if (c == EOF) {
			break;
		}
		if (c >= 32 && c < 127) {
			fputc(c, stdout);
		} else {
			printf("%s", cp437[c]);
		}
		if (!one_line) {
			//fprintf(stderr, "%d\n", one_line);
			if (p == 63) {
				fputc('\n', stdout);
				p = 0;
			} else {
				p++;
			}
		}
	}
	fflush(stdout);
}

void og() {
	char unic[8];
	char len;
	int i;

	while (1) {
		len = fgetunic(stdin, unic);
		if (len == 0) {
			break;
		}
		if (unic[0] >= 32 && unic[0] < 127) {
			fputc(unic[0], stdout);
		} else {
			for (i = 0; i < CP437_LEN; i++) {
				// skip the ASCII printable chars
				if (i == 32) {
					i = 127;
				}
				//fprintf(stderr, "%d\n", strlen(unic));
				if (!strcmp(cp437[i], unic)) {
					fputc((char) i, stdout);
					break;
				}
			}
		}
	}
	fflush(stdout);
}

int fgetunic(FILE* in, char* unic) {
	int c;
	int len;
	int maxlen;

	len = 0;
	c = fgetc(stdin);
	if (c == EOF) {
		unic[len] = '\0';
		return len;
	} else if (c == 0xe2) {
		maxlen = 3;
	} else if (c >= 0xc0 && c < 0xd0) {
		maxlen = 2;
	} else {
		maxlen = 1;
	}
	unic[len] = c;
	//fprintf(stderr, "f%d", c);
	for (len = 1; len < maxlen; len++) {
		//fprintf(stderr, "l");
		c = fgetc(stdin);
		if (c == EOF) {
			break;
		}
		unic[len] = c;
	}
	unic[len] = '\0';
	return len;
}
