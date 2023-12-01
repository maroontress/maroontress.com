#ifndef foo_Printer_H
#define foo_Printer_H

int foo_Printer_print(const char * format,
                      ...);

#ifdef foo_Printer_IMPORT
#define Printer_print foo_Printer_print
#endif /* foo_Printer_IMPORT */

#endif /* !foo_Printer_H */
