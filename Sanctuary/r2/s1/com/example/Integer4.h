#ifndef com_example_Integer4_H
#define com_example_Integer4_H

#define com_example_Integer4_MAX 0x7fffffff
#define com_example_Integer4_MIN (-0x7fffffff - 1)

struct com_example_Integer4;

typedef int com_example_Integer4_t;

struct com_example_Integer4 {
    com_example_Integer4_t value;
};

#if defined(__cplusplus)
extern "C" {
#endif

struct com_example_Integer4 * com_example_Integer4_new(com_example_Integer4_t i);
void com_example_Integer4_delete(struct com_example_Integer4 * i);
void com_example_Integer4_set(struct com_example_Integer4 * i,
                              com_example_Integer4_t value);
com_example_Integer4_t com_example_Integer4_get(struct com_example_Integer4 * i);

#if defined(__cplusplus)
}
#endif

#ifdef com_example_Integer4_IMPORT
#define Integer4 com_example_Integer4
#define Integer4_MAX com_example_Integer4_MAX
#define Integer4_MIN com_example_Integer4_MIN
#define Integer4_delete com_example_Integer4_delete
#define Integer4_get com_example_Integer4_get
#define Integer4_new com_example_Integer4_new
#define Integer4_set com_example_Integer4_set
#define Integer4_t com_example_Integer4_t
#endif /* com_example_Integer4_IMPORT */

#endif /* !com_example_Integer4_H */
