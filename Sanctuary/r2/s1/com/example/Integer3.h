#ifndef com_example_Integer3_H
#define com_example_Integer3_H

#define com_example_Integer3_MAX 0x7fffffff
#define com_example_Integer3_MIN (-0x7fffffff - 1)

struct com_example_Integer3;

typedef int com_example_Integer3_t;

struct com_example_Integer3 {
    com_example_Integer3_t value;
};

#if defined(__cplusplus)
extern "C" {
#endif

struct com_example_Integer3 * com_example_Integer3_new(com_example_Integer3_t i);
void com_example_Integer3_delete(struct com_example_Integer3 * i);
void com_example_Integer3_set(struct com_example_Integer3 * i,
                              com_example_Integer3_t value);
com_example_Integer3_t com_example_Integer3_get(struct com_example_Integer3 * i);

#if defined(__cplusplus)
}
#endif

#ifdef com_example_Integer3_IMPORT
#define Integer3 com_example_Integer3
#define Integer3_MAX com_example_Integer3_MAX
#define Integer3_MIN com_example_Integer3_MIN
#define Integer3_delete com_example_Integer3_delete
#define Integer3_get com_example_Integer3_get
#define Integer3_new com_example_Integer3_new
#define Integer3_set com_example_Integer3_set
#define Integer3_t com_example_Integer3_t
#endif /* com_example_Integer3_IMPORT */

#endif /* !com_example_Integer3_H */
