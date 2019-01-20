#ifndef foo_Printer_H
#define foo_Printer_H

#if defined(__cplusplus)
extern "C" {
#endif

int foo_Printer_print(const char * format,
                      ...);

#if defined(__cplusplus)
}
#endif

#ifdef foo_Printer_IMPORT
#define Printer_print foo_Printer_print
#endif /* foo_Printer_IMPORT */

#endif /* !foo_Printer_H */
