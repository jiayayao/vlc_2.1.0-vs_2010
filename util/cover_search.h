#ifndef __COVER_SEARCH_H__
#define __COVER_SEARCH_H__

#include <cover_base.h>
#include <search.hh>

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

EXTERN_SYMBOL DLL_SYMBOL void CDECL_SYMBOL * cover_tsearch (const void *key, void **vrootp,
		       int (*compar) (const void *, const void *));
EXTERN_SYMBOL DLL_SYMBOL void CDECL_SYMBOL * cover_tfind (const void *key, void *const *vrootp,
		     int (*compar) (const void *, const void *));

EXTERN_SYMBOL DLL_SYMBOL void CDECL_SYMBOL *cover_tdelete (const void *key, void **vrootp, int (*compar) (const void *, const void *));
EXTERN_SYMBOL DLL_SYMBOL void CDECL_SYMBOL cover_twalk (const void *vroot, void (*action) (const void *, VISIT, int));

#ifdef __cplusplus
}
#endif // __cplusplus

#endif

