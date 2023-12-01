#ifndef com_example_Double_H
#define com_example_Double_H

typedef struct {
    double value;
} com_example_Double;

#if defined(__cplusplus)
extern "C" {
#endif

com_example_Double * com_example_Double_new(double value);
void com_example_Double_delete(com_example_Double * d);
void com_example_Double_set(com_example_Double * d,
                            double value);
double com_example_Double_get(com_example_Double * d);

#if defined(__cplusplus)
}
#endif

#ifdef com_example_Double_IMPORT
#define Double com_example_Double
#define Double_delete com_example_Double_delete
#define Double_get com_example_Double_get
#define Double_new com_example_Double_new
#define Double_set com_example_Double_set
#endif /* com_example_Double_IMPORT */

#endif /* !com_example_Double_H */
