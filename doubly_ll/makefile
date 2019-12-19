# -ggdb (gdb)
# -pg (gprof)
# -fprofile-arcs -ftest-coverage (gcov)
# -Wall (to enable all warnings)
# -Werror (to enable all errors)
# -O2 (Optimization)

CFLAGS= -ggdb -pg -fprofile-arcs -ftest-coverage -Wall -Werror
#CFLAGS= -O2

main:	main.o create_list.o insert_end.o delete_end.o add_empty.o display.o get_integer.o isEmpty.o
	gcc $(CFLAGS) -o main main.o create_list.o insert_end.o delete_end.o add_empty.o display.o get_integer.o isEmpty.o
main.o:	main.c
	gcc $(CFLAGS) -c -o main.o main.c
add_empty.o:	add_empty.c
	gcc $(CFLAGS) -c -o add_empty.o add_empty.c
create_list.o:	create_list.c
	gcc $(CFLAGS) -c -o create_list.o create_list.c
insert_end.o:	insert_end.c
	gcc $(CFLAGS) -c -o insert_end.o insert_end.c
delete_end.o:	delete_end.c
	gcc $(CFLAGS) -c -o delete_end.o delete_end.c
display.o: display.c
	gcc $(CFLAGS) -c -o display.o display.c
get_integer.o: get_integer.c
		gcc $(CFLAGS) -c -o get_integer.o get_integer.c
isEmpty.o: isEmpty.c
			gcc $(CFLAGS) -c -o isEmpty.o isEmpty.c
clean:
	rm -rf *.o main *.gcno *.gcda *.out
