compile:file.o
	gcc file.o
run:
	./a.out
clean:
	rm *.o ./a.out
file.o: file.c file.h
	gcc -c file.c
