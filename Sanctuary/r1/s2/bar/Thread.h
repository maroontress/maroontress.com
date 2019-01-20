#ifndef bar_Thread_H
#define bar_Thread_H

struct bar_Thread;

void bar_Thread_new(struct bar_Thread * thread,
                    void (*run)(struct bar_Thread *));
void bar_Thread_start(struct bar_Thread * thread);

#ifdef bar_Thread_IMPORT
#define Thread bar_Thread
#define Thread_new bar_Thread_new
#define Thread_start bar_Thread_start
#endif /* bar_Thread_IMPORT */

#endif /* !bar_Thread_H */
