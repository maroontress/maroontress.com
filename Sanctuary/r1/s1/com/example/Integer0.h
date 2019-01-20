#ifndef com_example_Integer0_H
#define com_example_Integer0_H

#define com_example_Integer0_MAX 0x7fffffff
#define com_example_Integer0_MIN (-0x7fffffff - 1)

struct com_example_Integer0;

typedef int com_example_Integer0_t;

struct com_example_Integer0 {
    com_example_Integer0_t value;
};

struct com_example_Integer0 * com_example_Integer0_new(com_example_Integer0_t i);
void com_example_Integer0_delete(struct com_example_Integer0 * i);
void com_example_Integer0_set(struct com_example_Integer0 * i,
                              com_example_Integer0_t value);
com_example_Integer0_t com_example_Integer0_get(struct com_example_Integer0 * i);

#endif /* !com_example_Integer0_H */
