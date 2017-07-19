/*
 * This file is produced automatically.
 * Do not modify anything in here by hand.
 *
 * Created from source file
 *   /root/develop/f-stack/lib/../freebsd/kern/linker_if.m
 * with
 *   makeobjops.awk
 *
 * See the source file for legal information
 */

#include <sys/param.h>
#include <sys/queue.h>
#include <sys/kernel.h>
#include <sys/kobj.h>
#include <sys/linker.h>
#include "linker_if.h"

struct kobjop_desc linker_lookup_symbol_desc = {
	0, { &linker_lookup_symbol_desc, (kobjop_t)kobj_error_method }
};

struct kobjop_desc linker_symbol_values_desc = {
	0, { &linker_symbol_values_desc, (kobjop_t)kobj_error_method }
};

struct kobjop_desc linker_search_symbol_desc = {
	0, { &linker_search_symbol_desc, (kobjop_t)kobj_error_method }
};

struct kobjop_desc linker_each_function_name_desc = {
	0, { &linker_each_function_name_desc, (kobjop_t)kobj_error_method }
};

struct kobjop_desc linker_each_function_nameval_desc = {
	0, { &linker_each_function_nameval_desc, (kobjop_t)kobj_error_method }
};

struct kobjop_desc linker_lookup_set_desc = {
	0, { &linker_lookup_set_desc, (kobjop_t)kobj_error_method }
};

struct kobjop_desc linker_unload_desc = {
	0, { &linker_unload_desc, (kobjop_t)kobj_error_method }
};

struct kobjop_desc linker_ctf_get_desc = {
	0, { &linker_ctf_get_desc, (kobjop_t)kobj_error_method }
};

struct kobjop_desc linker_symtab_get_desc = {
	0, { &linker_symtab_get_desc, (kobjop_t)kobj_error_method }
};

struct kobjop_desc linker_strtab_get_desc = {
	0, { &linker_strtab_get_desc, (kobjop_t)kobj_error_method }
};

struct kobjop_desc linker_load_file_desc = {
	0, { &linker_load_file_desc, (kobjop_t)kobj_error_method }
};

struct kobjop_desc linker_link_preload_desc = {
	0, { &linker_link_preload_desc, (kobjop_t)kobj_error_method }
};

struct kobjop_desc linker_link_preload_finish_desc = {
	0, { &linker_link_preload_finish_desc, (kobjop_t)kobj_error_method }
};

