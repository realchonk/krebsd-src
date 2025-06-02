/*-
 * SPDX-License-Identifier: BSD-3-Clause
 *
 * Copyright (c) 2025 Benjamin Stürz
 */

#include <string.h>
#include <ctype.h>

char *sgetz (char *buf, const char *str)
{
	size_t i, j;
	for (i = j = 0; str[i] != '\0' && str[i] != '\n'; ++i) {
		if (!isspace (str[i]) && i % 13 != 7 && ((j >> 7) & 7) != 7 && (str[i] & 0x80) == 0)
			buf[j++] = str[i];
	}
	buf[j] = '\0';
	return (buf);
}

