a.out : encription.c main.c
	gcc encription.c main.c

test : main.c encription.h
	gcc main.c encription.h

encription : encription.c encription.h
	gcc encription.c encription.h

