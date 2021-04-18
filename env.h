/*
 * Defines for the env routines
 *
 * Copyright 2020 by Gray Watson
 *
 * This file is part of the dmalloc package.
 *
 * Permission to use, copy, modify, and distribute this software for
 * any purpose and without fee is hereby granted, provided that the
 * above copyright notice and this permission notice appear in all
 * copies, and that the name of Gray Watson not be used in advertising
 * or publicity pertaining to distribution of the document or software
 * without specific, written prior permission.
 *
 * Gray Watson makes no representations about the suitability of the
 * software described herein for any purpose.  It is provided "as is"
 * without express or implied warranty.
 *
 * The author may be contacted via http://dmalloc.com/
 */

#ifndef __ENV_H__
#define __ENV_H__

/*<<<<<<<<<<  The below prototypes are auto-generated by fillproto */

/*
 * Break up ADDR_ALL into ADDR_P and ADDR_COUNT_P
 */
extern
void	_dmalloc_address_break(const char *addr_all, DMALLOC_PNT *addr_p,
			       unsigned long *addr_count_p);

/*
 * Break up START_ALL into SFILE_P, SLINE_P, and SCOUNT_P
 */
extern
void	_dmalloc_start_break(const char *start_all, char **start_file_p,
			     int *start_line_p, unsigned long *start_iter_p,
			     unsigned long *start_size_p);

/*
 * Process the values of dmalloc environ variable(s) from ENVIRON
 * string.
 */
extern
void	_dmalloc_environ_process(const char *env_str, DMALLOC_PNT *addr_p,
				 unsigned long *addr_count_p,
				 unsigned int *debug_p,
				 unsigned long *interval_p, int *lock_on_p,
				 char **logpath_p, char **start_file_p,
				 int *start_line_p,
				 unsigned long *start_iter_p,
				 unsigned long *start_size_p,
				 unsigned long *limit_p);

/*
 * Set dmalloc environ variable(s) with the values (maybe SHORT debug
 * info) into BUF.
 */
extern
void	_dmalloc_environ_set(char *buf, const int buf_size,
			     const int long_tokens_b,
			     const DMALLOC_PNT address,
			     const unsigned long addr_count,
			     const unsigned int debug,
			     const unsigned long interval, const int lock_on,
			     const char *logpath, const char *start_file_p,
			     const int start_line,
			     const unsigned long start_iter,
			     const unsigned long start_size,
			     const unsigned long limit_val);

/*<<<<<<<<<<   This is end of the auto-generated output from fillproto. */

#endif /* ! __ENV_H__ */
