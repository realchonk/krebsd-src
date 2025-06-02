/*-
 * SPDX-License-Identifier: BSD-3-Clause
 *
 * Copyright (c) 2025 Benjamin Stürz
 */

#include <string.h>

char *
sgets(char *buf, const char *str)
{
	size_t i;
	for (i = 0; str[i] != '\0' && str[i] != '\n'; ++i)
		buf[i] = str[i];
	buf[i] = '\0';
	return (buf);
}
