BUFFON_SRCS	= buffon.c Trial.c
BUFFON_OBJS	= $(BUFFON_SRCS:.c=.o)

all: buffon rand graph.sh

clean:
	rm -f *.o *.core buffon rand graph.sh

buffon: $(BUFFON_OBJS)
	gcc -o $@ $(BUFFON_OBJS) -lm

rand:
	ln -s ../rand-distribution/rand .

graph.sh:
	ln -s ../rand-distribution/graph.sh .

.c.o:
	gcc -Wall -O2 -pipe -D__USE_FIXED_PROTOTYPES__ -c $<
