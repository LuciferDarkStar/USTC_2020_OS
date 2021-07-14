#
# Students' Makefile for the Malloc Lab
#

CC = gcc -g
CFLAGS = -Wall

# 待补充
OBJS1 = mmdriver.o mm.o memlib.o 
OBJS2 = mmdriver.o ep_mm.o memlib.o
all: mmdriver epmmdriver

mmdriver: $(OBJS1)
	$(CC) $(CFLAGS) -o mmdriver $(OBJS1)

epmmdriver: $(OBJS2)
	$(CC) $(CFLAGS) -o epmmdriver $(OBJS2)

#待补充
mmdriver.o: memlib.h mm.h
memlib.o: memlib.h config.h 
mm.o: mm.h memlib.h
ep_mm.o: mm.h memlib.h

clean:
	rm -f *~ *.o mmdriver epmmdriver


