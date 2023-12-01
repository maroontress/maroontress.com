#ifndef foo_Preference_H
#define foo_Preference_H

#if defined(__cplusplus)
extern "C" {
#endif

extern char * foo_Preference_option;
extern int foo_Preference_parameters[3];

#if defined(__cplusplus)
}
#endif

#ifdef foo_Preference_IMPORT
#define Preference_option foo_Preference_option
#define Preference_parameters foo_Preference_parameters
#endif /* foo_Preference_IMPORT */

#endif /* !foo_Preference_H */
