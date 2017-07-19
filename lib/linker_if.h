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


#ifndef _linker_if_h_
#define _linker_if_h_

/** @brief Unique descriptor for the LINKER_LOOKUP_SYMBOL() method */
extern struct kobjop_desc linker_lookup_symbol_desc;
/** @brief A function implementing the LINKER_LOOKUP_SYMBOL() method */
typedef int linker_lookup_symbol_t(linker_file_t file, const char* name,
                                   c_linker_sym_t* symp);

static __inline int LINKER_LOOKUP_SYMBOL(linker_file_t file, const char* name,
                                         c_linker_sym_t* symp)
{
	kobjop_t _m;
	KOBJOPLOOKUP(((kobj_t)file)->ops,linker_lookup_symbol);
	return ((linker_lookup_symbol_t *) _m)(file, name, symp);
}

/** @brief Unique descriptor for the LINKER_SYMBOL_VALUES() method */
extern struct kobjop_desc linker_symbol_values_desc;
/** @brief A function implementing the LINKER_SYMBOL_VALUES() method */
typedef int linker_symbol_values_t(linker_file_t file, c_linker_sym_t sym,
                                   linker_symval_t* valp);

static __inline int LINKER_SYMBOL_VALUES(linker_file_t file, c_linker_sym_t sym,
                                         linker_symval_t* valp)
{
	kobjop_t _m;
	KOBJOPLOOKUP(((kobj_t)file)->ops,linker_symbol_values);
	return ((linker_symbol_values_t *) _m)(file, sym, valp);
}

/** @brief Unique descriptor for the LINKER_SEARCH_SYMBOL() method */
extern struct kobjop_desc linker_search_symbol_desc;
/** @brief A function implementing the LINKER_SEARCH_SYMBOL() method */
typedef int linker_search_symbol_t(linker_file_t file, caddr_t value,
                                   c_linker_sym_t* symp, long* diffp);

static __inline int LINKER_SEARCH_SYMBOL(linker_file_t file, caddr_t value,
                                         c_linker_sym_t* symp, long* diffp)
{
	kobjop_t _m;
	KOBJOPLOOKUP(((kobj_t)file)->ops,linker_search_symbol);
	return ((linker_search_symbol_t *) _m)(file, value, symp, diffp);
}

/** @brief Unique descriptor for the LINKER_EACH_FUNCTION_NAME() method */
extern struct kobjop_desc linker_each_function_name_desc;
/** @brief A function implementing the LINKER_EACH_FUNCTION_NAME() method */
typedef int linker_each_function_name_t(linker_file_t file,
                                        linker_function_name_callback_t callback, void* opaque);

static __inline int LINKER_EACH_FUNCTION_NAME(linker_file_t file,
                                              linker_function_name_callback_t callback, void* opaque)
{
	kobjop_t _m;
	KOBJOPLOOKUP(((kobj_t)file)->ops,linker_each_function_name);
	return ((linker_each_function_name_t *) _m)(file, callback, opaque);
}

/** @brief Unique descriptor for the LINKER_EACH_FUNCTION_NAMEVAL() method */
extern struct kobjop_desc linker_each_function_nameval_desc;
/** @brief A function implementing the LINKER_EACH_FUNCTION_NAMEVAL() method */
typedef int linker_each_function_nameval_t(linker_file_t file,
                                           linker_function_nameval_callback_t callback, void* opaque);

static __inline int LINKER_EACH_FUNCTION_NAMEVAL(linker_file_t file,
                                                 linker_function_nameval_callback_t callback, void* opaque)
{
	kobjop_t _m;
	KOBJOPLOOKUP(((kobj_t)file)->ops,linker_each_function_nameval);
	return ((linker_each_function_nameval_t *) _m)(file, callback, opaque);
}

/** @brief Unique descriptor for the LINKER_LOOKUP_SET() method */
extern struct kobjop_desc linker_lookup_set_desc;
/** @brief A function implementing the LINKER_LOOKUP_SET() method */
typedef int linker_lookup_set_t(linker_file_t file, const char* name,
                                void*** start, void*** stop, int* count);

static __inline int LINKER_LOOKUP_SET(linker_file_t file, const char* name,
                                      void*** start, void*** stop, int* count)
{
	kobjop_t _m;
	KOBJOPLOOKUP(((kobj_t)file)->ops,linker_lookup_set);
	return ((linker_lookup_set_t *) _m)(file, name, start, stop, count);
}

/** @brief Unique descriptor for the LINKER_UNLOAD() method */
extern struct kobjop_desc linker_unload_desc;
/** @brief A function implementing the LINKER_UNLOAD() method */
typedef void linker_unload_t(linker_file_t file);

static __inline void LINKER_UNLOAD(linker_file_t file)
{
	kobjop_t _m;
	KOBJOPLOOKUP(((kobj_t)file)->ops,linker_unload);
	((linker_unload_t *) _m)(file);
}

/** @brief Unique descriptor for the LINKER_CTF_GET() method */
extern struct kobjop_desc linker_ctf_get_desc;
/** @brief A function implementing the LINKER_CTF_GET() method */
typedef int linker_ctf_get_t(linker_file_t file, linker_ctf_t *lc);

static __inline int LINKER_CTF_GET(linker_file_t file, linker_ctf_t *lc)
{
	kobjop_t _m;
	KOBJOPLOOKUP(((kobj_t)file)->ops,linker_ctf_get);
	return ((linker_ctf_get_t *) _m)(file, lc);
}

/** @brief Unique descriptor for the LINKER_SYMTAB_GET() method */
extern struct kobjop_desc linker_symtab_get_desc;
/** @brief A function implementing the LINKER_SYMTAB_GET() method */
typedef long linker_symtab_get_t(linker_file_t file, const Elf_Sym **symtab);

static __inline long LINKER_SYMTAB_GET(linker_file_t file,
                                       const Elf_Sym **symtab)
{
	kobjop_t _m;
	KOBJOPLOOKUP(((kobj_t)file)->ops,linker_symtab_get);
	return ((linker_symtab_get_t *) _m)(file, symtab);
}

/** @brief Unique descriptor for the LINKER_STRTAB_GET() method */
extern struct kobjop_desc linker_strtab_get_desc;
/** @brief A function implementing the LINKER_STRTAB_GET() method */
typedef long linker_strtab_get_t(linker_file_t file, caddr_t *strtab);

static __inline long LINKER_STRTAB_GET(linker_file_t file, caddr_t *strtab)
{
	kobjop_t _m;
	KOBJOPLOOKUP(((kobj_t)file)->ops,linker_strtab_get);
	return ((linker_strtab_get_t *) _m)(file, strtab);
}

/** @brief Unique descriptor for the LINKER_LOAD_FILE() method */
extern struct kobjop_desc linker_load_file_desc;
/** @brief A function implementing the LINKER_LOAD_FILE() method */
typedef int linker_load_file_t(linker_class_t cls, const char* filename,
                               linker_file_t* result);

static __inline int LINKER_LOAD_FILE(linker_class_t cls, const char* filename,
                                     linker_file_t* result)
{
	kobjop_t _m;
	KOBJOPLOOKUP(cls->ops,linker_load_file);
	return ((linker_load_file_t *) _m)(cls, filename, result);
}

/** @brief Unique descriptor for the LINKER_LINK_PRELOAD() method */
extern struct kobjop_desc linker_link_preload_desc;
/** @brief A function implementing the LINKER_LINK_PRELOAD() method */
typedef int linker_link_preload_t(linker_class_t cls, const char* filename,
                                  linker_file_t* result);

static __inline int LINKER_LINK_PRELOAD(linker_class_t cls,
                                        const char* filename,
                                        linker_file_t* result)
{
	kobjop_t _m;
	KOBJOPLOOKUP(cls->ops,linker_link_preload);
	return ((linker_link_preload_t *) _m)(cls, filename, result);
}

/** @brief Unique descriptor for the LINKER_LINK_PRELOAD_FINISH() method */
extern struct kobjop_desc linker_link_preload_finish_desc;
/** @brief A function implementing the LINKER_LINK_PRELOAD_FINISH() method */
typedef int linker_link_preload_finish_t(linker_file_t file);

static __inline int LINKER_LINK_PRELOAD_FINISH(linker_file_t file)
{
	kobjop_t _m;
	KOBJOPLOOKUP(((kobj_t)file)->ops,linker_link_preload_finish);
	return ((linker_link_preload_finish_t *) _m)(file);
}

#endif /* _linker_if_h_ */
