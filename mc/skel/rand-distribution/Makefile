RAND_SRCS	= rand.c
RAND_OBJS	= $(RAND_SRCS:.c=.o)

COUNT_SRCS	= count.c
COUNT_OBJS	= $(COUNT_SRCS:.c=.o)

AVERAGE_SRCS	= average.c Summation.c
AVERAGE_OBJS	= $(AVERAGE_SRCS:.c=.o)

VARIANCE_SRCS	= variance.c Summation.c
VARIANCE_OBJS	= $(VARIANCE_SRCS:.c=.o)

all: rand count average variance

clean:
	rm -f *.o *.core rand count average variance

rand: $(RAND_OBJS)
	gcc -o $@ $(RAND_OBJS) -lm

count: $(COUNT_OBJS)
	gcc -o $@ $(COUNT_OBJS) -lm

average: $(AVERAGE_OBJS) Summation.h
	gcc -o $@ $(AVERAGE_OBJS) -lm

variance: $(VARIANCE_OBJS) Summation.h
	gcc -o $@ $(VARIANCE_OBJS) -lm

.c.o: Summation.h
	gcc -Wall -O2 -pipe -D__USE_FIXED_PROTOTYPES__ -c $<
