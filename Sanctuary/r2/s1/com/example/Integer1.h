#ifndef com_example_Integer1_H
#define com_example_Integer1_H

#define com_example_Integer1_MAX 0x7fffffff
#define com_example_Integer1_MIN (-0x7fffffff - 1)

struct com_example_Integer1;

typedef int com_example_Integer1_t;

struct com_example_Integer1 {
    com_example_Integer1_t value;
};

#if defined(__cplusplus)
extern "C" {
#endif

struct com_example_Integer1 * com_example_Integer1_new(com_example_Integer1_t i);
void com_example_Integer1_delete(struct com_example_Integer1 * i);
void com_example_Integer1_set(struct com_example_Integer1 * i,
                              com_example_Integer1_t value);
com_example_Integer1_t com_example_Integer1_get(struct com_example_Integer1 * i);

#if defined(__cplusplus)
}
#endif

#endif /* !com_example_Integer1_H */
