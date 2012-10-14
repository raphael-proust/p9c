MKSHELL=$PLAN9/bin/rc

all:V: hello.out

%.out: %.c
	9c -c $stem.c
	9l -o $stem.out $stem.o

clean:V:
	rm *.o *.out
