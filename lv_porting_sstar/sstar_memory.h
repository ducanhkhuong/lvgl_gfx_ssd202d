/*
 * sstar_memory.h
 */

#ifndef _SSTAR_MEMORY_H
#define _SSTAR_MEMORY_H

#include "/home/ducanhkhuong/Config_ssd202x/project/release/include/mi_common_datatype.h"

MI_PHY sstar_pool_va2pa(const void *ptr);
void sstar_flush_cache();
void *sstar_pool_malloc(size_t size);
void sstar_pool_free();
int sstar_pool_check(const void *ptr);

#endif
