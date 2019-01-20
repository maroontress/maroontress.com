#ifndef com_example_Integer2_H
#define com_example_Integer2_H

#define com_example_Integer2_MAX 0x7fffffff
#define com_example_Integer2_MIN (-0x7fffffff - 1)

struct com_example_Integer2;

typedef int com_example_Integer2_t;

struct com_example_Integer2 {
    com_example_Integer2_t value;
};

#if defined(__cplusplus)
extern "C" {
#endif

struct com_example_Integer2 * com_example_Integer2_new(com_example_Integer2_t i);
void com_example_Integer2_delete(struct com_example_Integer2 * i);
void com_example_Integer2_set(struct com_example_Integer2 * i,
                              com_example_Integer2_t value);
com_example_Integer2_t com_example_Integer2_get(struct com_example_Integer2 * i);

#if defined(__cplusplus)
}
#endif

#ifdef com_example_Integer2_IMPORT
#define Integer2 com_example_Integer2
#define Integer2_MAX com_example_Integer2_MAX
#define Integer2_MIN com_example_Integer2_MIN
#define Integer2_delete com_example_Integer2_delete
#define Integer2_get com_example_Integer2_get
#define Integer2_new com_example_Integer2_new
#define Integer2_set com_example_Integer2_set
#define Integer2_t com_example_Integer2_t
#endif /* com_example_Integer2_IMPORT */

#endif /* !com_example_Integer2_H */
