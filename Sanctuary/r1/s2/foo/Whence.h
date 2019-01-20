#ifndef foo_Whence_H
#define foo_Whence_H

enum foo_Whence {
    foo_Whence_SET = 1,
    foo_Whence_CUR,
    foo_Whence_END
};

#ifdef foo_Whence_IMPORT
#define Whence foo_Whence
#define Whence_CUR foo_Whence_CUR
#define Whence_END foo_Whence_END
#define Whence_SET foo_Whence_SET
#endif /* foo_Whence_IMPORT */

#endif /* !foo_Whence_H */
