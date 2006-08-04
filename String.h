/* Do not edit this file. It was automatically generated. */

#ifndef HEADER_String
#define HEADER_String
/*
htop
(C) 2004-2006 Hisham H. Muhammad
Released under the GNU GPL, see the COPYING file
in the source distribution for its full text.
*/

#define _GNU_SOURCE
#include <string.h>
#include <strings.h>
#include <stdlib.h>
#include <stdio.h>

#include "debug.h"

#define String_startsWith(s, match) (strstr((s), (match)) == (s))

inline void String_delete(char* s);

inline char* String_copy(char* orig);

char* String_cat(char* s1, char* s2);

char* String_trim(char* in);

char* String_copyUpTo(char* orig, char upTo);

char* String_sub(char* orig, int from, int to);

void String_println(char* s);

void String_print(char* s);

void String_printInt(int i);

void String_printPointer(void* p);

inline int String_eq(const char* s1, const char* s2);

char** String_split(char* s, char sep);

void String_freeArray(char** s);

int String_startsWith_i(char* s, char* match);

int String_contains_i(char* s, char* match);

#endif
