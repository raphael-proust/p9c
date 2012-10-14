MKSHELL=$PLAN9/bin/rc

%: %.c
	9c -c $stem.c
	9l -o $stem $stem.o
