#ifndef __COVER_H__
#define __COVER_H__

#include <vlc_common.h>
#include <inttypes.h>

typedef void* iconv_t;

#include <cover_base.h>

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

EXTERN_SYMBOL DLL_SYMBOL char * CDECL_SYMBOL cover_bindtextdomain (const char *__domainname, const char *__dirname);
EXTERN_SYMBOL DLL_SYMBOL char * CDECL_SYMBOL cover_bind_textdomain_codeset (const char *__domainname, const char *__codeset);
EXTERN_SYMBOL DLL_SYMBOL char * CDECL_SYMBOL cover_dgettext (const char *__domainname, const char *__msgid);
EXTERN_SYMBOL DLL_SYMBOL char * CDECL_SYMBOL cover_dngettext (const char *__domainname, const char *__msgid1,
				const char *__msgid2, unsigned long int __n);
EXTERN_SYMBOL DLL_SYMBOL iconv_t CDECL_SYMBOL cover_iconv_open (const char* tocode, const char* fromcode);
EXTERN_SYMBOL DLL_SYMBOL size_t CDECL_SYMBOL cover_iconv (iconv_t cd, const char* * inbuf, size_t *inbytesleft, char* * outbuf, size_t *outbytesleft);
EXTERN_SYMBOL DLL_SYMBOL int CDECL_SYMBOL cover_iconv_close (iconv_t cd);
EXTERN_SYMBOL DLL_SYMBOL _WDIR* CDECL_SYMBOL cover_wopendir (const wchar_t* dir);
EXTERN_SYMBOL DLL_SYMBOL struct _wdirent* CDECL_SYMBOL cover_wreaddir (_WDIR* dir);
EXTERN_SYMBOL DLL_SYMBOL int CDECL_SYMBOL cover_wclosedir (_WDIR* dir);
EXTERN_SYMBOL DLL_SYMBOL void CDECL_SYMBOL cover_wrewinddir (_WDIR* dir);

EXTERN_SYMBOL DLL_SYMBOL float CDECL_SYMBOL cover_roundf(float x);
EXTERN_SYMBOL DLL_SYMBOL long int CDECL_SYMBOL cover_lroundf(float x);
EXTERN_SYMBOL DLL_SYMBOL long long CDECL_SYMBOL cover_llroundf(float x);
EXTERN_SYMBOL DLL_SYMBOL long int CDECL_SYMBOL cover_lround(double x);

EXTERN_SYMBOL DLL_SYMBOL long int CDECL_SYMBOL cover_lroundf_p24f(float x);
EXTERN_SYMBOL DLL_SYMBOL long int CDECL_SYMBOL cover_lroundf_p8f(float x);

EXTERN_SYMBOL DLL_SYMBOL long int cover_lroundf_wavout(float x);
EXTERN_SYMBOL DLL_SYMBOL long int cover_lrintf(float x);
EXTERN_SYMBOL DLL_SYMBOL float volume_divide(float x);

EXTERN_SYMBOL DLL_SYMBOL int64_t CDECL_SYMBOL cover_llabs(int64_t x);
EXTERN_SYMBOL DLL_SYMBOL float CDECL_SYMBOL cover_cbrtf(float x);
EXTERN_SYMBOL DLL_SYMBOL int CDECL_SYMBOL cover_isnan(double x);

EXTERN_SYMBOL DLL_SYMBOL float CDECL_SYMBOL cover_fminf(float x, float y);

EXTERN_SYMBOL DLL_SYMBOL int CDECL_SYMBOL cover__fpclassifyf(float x);
EXTERN_SYMBOL DLL_SYMBOL int CDECL_SYMBOL cover__fpclassify(double x);
EXTERN_SYMBOL DLL_SYMBOL int CDECL_SYMBOL cover__fpclassifyl(long double x);

#ifdef __cplusplus
}
#endif // __cplusplus

#endif

