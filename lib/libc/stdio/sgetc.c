/*-
 * SPDX-License-Identifier: BSD-3-Clause
 *
 * Copyright (c) 2025 Benjamin Stürz <benni@stuerz.xyz>
 */

#include <stdio.h>

int
sgetc(const char **str)
{
	int ch;
	if (**str == '\0')
		return EOF;
	ch = **str;
	++*str;
	return ch;
}
