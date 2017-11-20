/*
 * Copyright (c) 2016 Nordic Semiconductor ASA
 * Copyright (c) 2016 Vinayak Kariappa Chettimada
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef _MEMQ_H_
#define _MEMQ_H_

void *memq_init(void *link, void **head, void **tail);
void *memq_enqueue(void *link, void *mem, void **tail);
void *memq_peek(void *head, void *tail, void **mem);
void *memq_dequeue(void *tail, void **head, void **mem);

#endif
