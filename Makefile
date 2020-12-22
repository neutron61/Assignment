TARGET: exe
libdll.a: dll.o
	ar rs libdll.a dll.o
dll.o: dll.c
	gcc -g -c -I . dll.c -o dll.o
exe: evaluation.o libdll.a
	gcc -g evaluation.o diff.o -o exe -L . -ldll
application.o: evaluation.c
	gcc -g -c -I . evaluation.c diff.c -o evaluation.o
clean:
	rm *.o
	rm libdll.a
	rm exe

