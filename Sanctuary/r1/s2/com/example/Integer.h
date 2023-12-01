#ifndef com_example_Integer_H
#define com_example_Integer_H

#define com_example_Integer_MAX 0x7fffffff
#define com_example_Integer_MIN (-0x7fffffff - 1)

struct com_example_Integer;

typedef int com_example_Integer_t;

struct com_example_Integer {
    com_example_Integer_t value;
};

struct com_example_Integer * com_example_Integer_new(com_example_Integer_t i);
void com_example_Integer_delete(struct com_example_Integer * i);
void com_example_Integer_set(struct com_example_Integer * i,
                             com_example_Integer_t value);
com_example_Integer_t com_example_Integer_get(struct com_example_Integer * i);

#ifdef com_example_Integer_IMPORT
#define Integer com_example_Integer
#define Integer_MAX com_example_Integer_MAX
#define Integer_MIN com_example_Integer_MIN
#define Integer_delete com_example_Integer_delete
#define Integer_get com_example_Integer_get
#define Integer_new com_example_Integer_new
#define Integer_set com_example_Integer_set
#define Integer_t com_example_Integer_t
#endif /* com_example_Integer_IMPORT */

#endif /* !com_example_Integer_H */
