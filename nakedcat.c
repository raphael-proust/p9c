#include <u.h>
#include <libc.h>

void
main(int argc, char *argv[])
{
	int i, source;
	long bytecount;
	char * buffer[256];
	for(i=1; i<argc; i++){
		source = open (argv[i], OREAD);
		do {
			bytecount = read(source, buffer, 256);
			if(write(1, buffer, bytecount) != bytecount)
				exits("Writing error");
		} while (bytecount > 0);
	}
}