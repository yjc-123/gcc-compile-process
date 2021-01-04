CC = gcc

libinput.so:
	$(CC) -fPIC -shared input.c -o libinput.so
	sudo cp libinput.so /usr/lib
	sudo cp libinput.so /usr/bin


clean:
	rm -rf libinput.so
