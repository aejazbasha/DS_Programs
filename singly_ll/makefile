# -ggdb (gdb)
# -pg (gprof)
# -fprofile-arcs -ftest-coverage (gcov)
# -Wall (to enable all warnings)
# -Werror (to enable all errors)
# -O2 (Optimization)

CFLAGS= -ggdb -pg -fprofile-arcs -ftest-coverage -Wall -Werror
#CFLAGS= -O2

main:	main.o insert_beg.o insert_end.o delete_beg.o delete_end.o display.o isEmpty.o \
	  	get_integer.o delete_specified_element.o detect_loop.o list_error.o
	gcc $(CFLAGS) -o main main.o insert_beg.o insert_end.o delete_beg.o delete_end.o  \
	display.o isEmpty.o get_integer.o delete_specified_element.o detect_loop.o list_error.o
main.o:	main.c
	gcc $(CFLAGS) -c -o main.o main.c
insert_beg.o:	insert_beg.c
	gcc $(CFLAGS) -c -o insert_beg.o insert_beg.c
insert_end.o:	insert_end.c
	gcc $(CFLAGS) -c -o insert_end.o insert_end.c
delete_beg.o:	delete_beg.c
	gcc $(CFLAGS) -c -o delete_beg.o delete_beg.c
delete_end.o:	delete_end.c
	gcc $(CFLAGS) -c -o delete_end.o delete_end.c
display.o: display.c
	gcc $(CFLAGS) -c -o display.o display.c
isEmpty.o: isEmpty.c
		gcc $(CFLAGS) -c -o isEmpty.o isEmpty.c
get_integer.o: get_integer.c
		gcc $(CFLAGS) -c -o get_integer.o get_integer.c
delete_specified_element.o: delete_specified_element.c
		gcc $(CFLAGS) -c -o delete_specified_element.o delete_specified_element.c
detect_loop.o: detect_loop.c
		gcc $(CFLAGS) -c -o detect_loop.o detect_loop.c
list_error.o: list_error.c
		gcc $(CFLAGS) -c -o list_error.o list_error.c

clean:
	rm -rf *.o main *.gcda *.gcno *.out
