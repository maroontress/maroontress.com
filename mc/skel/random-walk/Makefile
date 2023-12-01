WALK_SRCS	= walk.c
WALK_OBJS	= $(WALK_SRCS:.c=.o)

all: walk average variance

clean:
	rm -f *.o *.core walk average variance N=* Ave* Var*

walk: $(WALK_OBJS)
	gcc -o $@ $(WALK_OBJS) -lm

average:
	ln -s ../rand-distribution/average .

variance:
	ln -s ../rand-distribution/variance .

.c.o:
	gcc -Wall -O2 -pipe -D__USE_FIXED_PROTOTYPES__ -c $<
