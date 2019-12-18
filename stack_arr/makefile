# -ggdb (gdb)
# -pg (gprof)
# -fprofile-arcs -ftest-coverage (gcov)
# -Wall (to enable all warnings) 
# -O2 (Optimization)

CFLAGS=	-ggdb -pg -fprofile-arcs -ftest-coverage -Wall
#CFLAGS= -O2
main:	main.o push.o pop.o peek.o isEmpty.o isFull.o display.o get_integer.o create.o
	gcc $(CFLAGS) -o main main.o push.o pop.o peek.o isEmpty.o isFull.o display.o get_integer.o create.o
main.o:	main.c
	gcc $(CFLAGS) -c -o main.o main.c
isEmpty.o: isEmpty.c
	gcc $(CFLAGS) -c -o isEmpty.o isEmpty.c
isFull.o: isFull.c
	gcc $(CFLAGS) -c -o isFull.o isFull.c
push.o:	push.c
	gcc $(CFLAGS) -c -o push.o push.c
pop.o:	pop.c
	gcc $(CFLAGS) -c -o pop.o pop.c
peek.o:	peek.c
	gcc $(CFLAGS) -c -o peek.o peek.c
create.o: create.c
	gcc $(CFLAGS) -c -o create.o create.c
display.o: display.c
	gcc $(CFLAGS) -c -o display.o display.c
get_integer.o: get_integer.c
	gcc $(CFLAGS) -c -o get_integer.o get_integer.c

clean:
	rm -rf *.o main *.gcno *.gcda *.out
