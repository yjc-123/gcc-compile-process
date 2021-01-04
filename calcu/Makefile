CC = gcc

libcalcu.so:
	$(CC) -fPIC -shared calcu.c -o libcalcu.so
	sudo cp libcalcu.so /usr/lib
	sudo cp libcalcu.so /usr/bin

clean:
	rm -rf libcalcu.so
