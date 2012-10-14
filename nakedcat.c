#include <u.h>
#include <libc.h>

void
main(int argc, char *argv[])
{
	int i, source;
	long read_rc, write_rc;
	char * buffer[256];
	for(i=1; i<argc; i++){
		source = open (argv[i], OREAD);
		do {
			read_rc = read(source, buffer, 256);
			write_rc = write(1, buffer, read_rc);
			if (write_rc !=read_rc)
				exits("Writing error");
		} while (write_rc > 0);
	}
}