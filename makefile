strtest: HW1.c
	gcc HW1.c -o strtest

clean:
	rm *~

run: strtest
	./strtest
