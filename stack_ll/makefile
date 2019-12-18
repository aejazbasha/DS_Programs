# -ggdb (gdb)
# -pg (gprof)
# -fprofile-arcs -ftest-coverage (gcov)
# -Wall (to enable all warnings) 
# -O2 (Optimization)

CFLAGS=	-ggdb -pg -fprofile-arcs -ftest-coverage -Wall
#CFLAGS= -O2
main:	main.o push.o pop.o peek.o empty.o display.o get_integer.o
	gcc $(CFLAGS) -o main main.o push.o pop.o peek.o empty.o display.o get_integer.o
main.o:	main.c
	gcc $(CFLAGS) -c -o main.o main.c
empty.o:	empty.c
	gcc $(CFLAGS) -c -o empty.o empty.c
push.o:	push.c
	gcc $(CFLAGS) -c -o push.o push.c
pop.o:	pop.c
	gcc $(CFLAGS) -c -o pop.o pop.c
peek.o:	peek.c
	gcc $(CFLAGS) -c -o peek.o peek.c
display.o: display.c
	gcc $(CFLAGS) -c -o display.o display.c
get_integer.o: get_integer.c
	gcc $(CFLAGS) -c -o get_integer.o get_integer.c

clean:
	rm -rf *.o main *.gcno *.gcda *.out
