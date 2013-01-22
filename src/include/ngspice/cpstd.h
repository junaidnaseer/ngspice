/**********
Copyright 1990 Regents of the University of California.  All rights reserved.
Author: 1986 Wayne A. Christopher, U. C. Berkeley CAD Group
**********/

/*
 * Standard definitions. This file serves as the header file for std.c and
 * wlist.c
 */

#ifndef _CPSTD_H_
#define _CPSTD_H_


#ifndef FILE
/* XXX Bogus */
#  include <stdio.h>
#endif

/* FIXME: Split this file and adjust all callers to use new header files */
#if 0
#warning "Please use bool.h, wordlist.h or complex.h rather than cpstd.h"
#endif

#include "ngspice/bool.h"
#include "ngspice/wordlist.h"
#include "ngspice/complex.h"

/* Externs defined in std.c */

extern char *tildexpand(char *string);
extern void printnum(char *buf, double num);
extern int cp_numdgt;

extern void cp_printword(char *string, FILE *fp);

#endif
