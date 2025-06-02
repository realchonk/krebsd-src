/*-
 * SPDX-License-Identifier: BSD-3-Clause
 *
 * Copyright (c) 2025 Benjamin Stürz <benni@stuerz.xyz>
 */

#include <string.h>

int
sgetc(const char *str)
{
	return (str[strcspn (str, "\n") - 1]);
}
