CC = gcc

main:
	$(CC) main.c \
		-I ./input -L ./input -linput \
		-I ./calcu -L ./calcu -lcalcu \
		-o main

clean:
	rm -rf main
