CRUDE_SRCS	= crude.c Summation.c Function.c
CRUDE_OBJS	= $(CRUDE_SRCS:.c=.o)

HITORMISS_SRCS	= hitormiss.c Trial.c Function.c
HITORMISS_OBJS	= $(HITORMISS_SRCS:.c=.o)

all: Summation.c Summation.h crude Trial.c Trial.h hitormiss rand graph.sh

clean:
	rm -f *.o *.core crude hitormiss Summation.h Summation.c \
		Trial.c Trial.h rand graph.sh

crude: $(CRUDE_OBJS)
	gcc -o $@ $(CRUDE_OBJS) -lm

hitormiss: $(HITORMISS_OBJS)
	gcc -o $@ $(HITORMISS_OBJS) -lm

rand:
	ln -s ../rand-distribution/rand .

graph.sh:
	ln -s ../rand-distribution/graph.sh .

Summation.h:
	ln -s ../rand-distribution/Summation.h .

Summation.c:
	ln -s ../rand-distribution/Summation.c .

Trial.h:
	ln -s ../buffon/Trial.h .

Trial.c:
	ln -s ../buffon/Trial.c .

.c.o: Function.h
	gcc -Wall -O2 -pipe -D__USE_FIXED_PROTOTYPES__ -c $<
