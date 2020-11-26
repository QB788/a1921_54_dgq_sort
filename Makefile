#testsort

test:sort.c testsort.c
	gcc -g sort.c testsort.c -o testsort
	./testsort
