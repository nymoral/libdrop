/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 4.0.2
 *
 * This file is not intended to be easily readable and contains a number of
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG
 * interface file instead.
 * ----------------------------------------------------------------------------- */


#ifndef SWIGCSHARP
#define SWIGCSHARP
#endif


/* -----------------------------------------------------------------------------
 *  This section contains generic SWIG labels for method/variable
 *  declarations/attributes, and other compiler dependent labels.
 * ----------------------------------------------------------------------------- */

/* template workaround for compilers that cannot correctly implement the C++ standard */
#ifndef SWIGTEMPLATEDISAMBIGUATOR
# if defined(__SUNPRO_CC) && (__SUNPRO_CC <= 0x560)
#  define SWIGTEMPLATEDISAMBIGUATOR template
# elif defined(__HP_aCC)
/* Needed even with `aCC -AA' when `aCC -V' reports HP ANSI C++ B3910B A.03.55 */
/* If we find a maximum version that requires this, the test would be __HP_aCC <= 35500 for A.03.55 */
#  define SWIGTEMPLATEDISAMBIGUATOR template
# else
#  define SWIGTEMPLATEDISAMBIGUATOR
# endif
#endif

/* inline attribute */
#ifndef SWIGINLINE
# if defined(__cplusplus) || (defined(__GNUC__) && !defined(__STRICT_ANSI__))
#   define SWIGINLINE inline
# else
#   define SWIGINLINE
# endif
#endif

/* attribute recognised by some compilers to avoid 'unused' warnings */
#ifndef SWIGUNUSED
# if defined(__GNUC__)
#   if !(defined(__cplusplus)) || (__GNUC__ > 3 || (__GNUC__ == 3 && __GNUC_MINOR__ >= 4))
#     define SWIGUNUSED __attribute__ ((__unused__))
#   else
#     define SWIGUNUSED
#   endif
# elif defined(__ICC)
#   define SWIGUNUSED __attribute__ ((__unused__))
# else
#   define SWIGUNUSED
# endif
#endif

#ifndef SWIG_MSC_UNSUPPRESS_4505
# if defined(_MSC_VER)
#   pragma warning(disable : 4505) /* unreferenced local function has been removed */
# endif
#endif

#ifndef SWIGUNUSEDPARM
# ifdef __cplusplus
#   define SWIGUNUSEDPARM(p)
# else
#   define SWIGUNUSEDPARM(p) p SWIGUNUSED
# endif
#endif

/* internal SWIG method */
#ifndef SWIGINTERN
# define SWIGINTERN static SWIGUNUSED
#endif

/* internal inline SWIG method */
#ifndef SWIGINTERNINLINE
# define SWIGINTERNINLINE SWIGINTERN SWIGINLINE
#endif

/* exporting methods */
#if defined(__GNUC__)
#  if (__GNUC__ >= 4) || (__GNUC__ == 3 && __GNUC_MINOR__ >= 4)
#    ifndef GCC_HASCLASSVISIBILITY
#      define GCC_HASCLASSVISIBILITY
#    endif
#  endif
#endif

#ifndef SWIGEXPORT
# if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
#   if defined(STATIC_LINKED)
#     define SWIGEXPORT
#   else
#     define SWIGEXPORT __declspec(dllexport)
#   endif
# else
#   if defined(__GNUC__) && defined(GCC_HASCLASSVISIBILITY)
#     define SWIGEXPORT __attribute__ ((visibility("default")))
#   else
#     define SWIGEXPORT
#   endif
# endif
#endif

/* calling conventions for Windows */
#ifndef SWIGSTDCALL
# if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
#   define SWIGSTDCALL __stdcall
# else
#   define SWIGSTDCALL
# endif
#endif

/* Deal with Microsoft's attempt at deprecating C standard runtime functions */
#if !defined(SWIG_NO_CRT_SECURE_NO_DEPRECATE) && defined(_MSC_VER) && !defined(_CRT_SECURE_NO_DEPRECATE)
# define _CRT_SECURE_NO_DEPRECATE
#endif

/* Deal with Microsoft's attempt at deprecating methods in the standard C++ library */
#if !defined(SWIG_NO_SCL_SECURE_NO_DEPRECATE) && defined(_MSC_VER) && !defined(_SCL_SECURE_NO_DEPRECATE)
# define _SCL_SECURE_NO_DEPRECATE
#endif

/* Deal with Apple's deprecated 'AssertMacros.h' from Carbon-framework */
#if defined(__APPLE__) && !defined(__ASSERT_MACROS_DEFINE_VERSIONS_WITHOUT_UNDERSCORES)
# define __ASSERT_MACROS_DEFINE_VERSIONS_WITHOUT_UNDERSCORES 0
#endif

/* Intel's compiler complains if a variable which was never initialised is
 * cast to void, which is a common idiom which we use to indicate that we
 * are aware a variable isn't used.  So we just silence that warning.
 * See: https://github.com/swig/swig/issues/192 for more discussion.
 */
#ifdef __INTEL_COMPILER
# pragma warning disable 592
#endif


#include <stdlib.h>
#include <string.h>
#include <stdio.h>


/* Support for throwing C# exceptions from C/C++. There are two types: 
 * Exceptions that take a message and ArgumentExceptions that take a message and a parameter name. */
typedef enum {
  SWIG_CSharpApplicationException,
  SWIG_CSharpArithmeticException,
  SWIG_CSharpDivideByZeroException,
  SWIG_CSharpIndexOutOfRangeException,
  SWIG_CSharpInvalidCastException,
  SWIG_CSharpInvalidOperationException,
  SWIG_CSharpIOException,
  SWIG_CSharpNullReferenceException,
  SWIG_CSharpOutOfMemoryException,
  SWIG_CSharpOverflowException,
  SWIG_CSharpSystemException
} SWIG_CSharpExceptionCodes;

typedef enum {
  SWIG_CSharpArgumentException,
  SWIG_CSharpArgumentNullException,
  SWIG_CSharpArgumentOutOfRangeException
} SWIG_CSharpExceptionArgumentCodes;

typedef void (SWIGSTDCALL* SWIG_CSharpExceptionCallback_t)(const char *);
typedef void (SWIGSTDCALL* SWIG_CSharpExceptionArgumentCallback_t)(const char *, const char *);

typedef struct {
  SWIG_CSharpExceptionCodes code;
  SWIG_CSharpExceptionCallback_t callback;
} SWIG_CSharpException_t;

typedef struct {
  SWIG_CSharpExceptionArgumentCodes code;
  SWIG_CSharpExceptionArgumentCallback_t callback;
} SWIG_CSharpExceptionArgument_t;

static SWIG_CSharpException_t SWIG_csharp_exceptions[] = {
  { SWIG_CSharpApplicationException, NULL },
  { SWIG_CSharpArithmeticException, NULL },
  { SWIG_CSharpDivideByZeroException, NULL },
  { SWIG_CSharpIndexOutOfRangeException, NULL },
  { SWIG_CSharpInvalidCastException, NULL },
  { SWIG_CSharpInvalidOperationException, NULL },
  { SWIG_CSharpIOException, NULL },
  { SWIG_CSharpNullReferenceException, NULL },
  { SWIG_CSharpOutOfMemoryException, NULL },
  { SWIG_CSharpOverflowException, NULL },
  { SWIG_CSharpSystemException, NULL }
};

static SWIG_CSharpExceptionArgument_t SWIG_csharp_exceptions_argument[] = {
  { SWIG_CSharpArgumentException, NULL },
  { SWIG_CSharpArgumentNullException, NULL },
  { SWIG_CSharpArgumentOutOfRangeException, NULL }
};

static void SWIGUNUSED SWIG_CSharpSetPendingException(SWIG_CSharpExceptionCodes code, const char *msg) {
  SWIG_CSharpExceptionCallback_t callback = SWIG_csharp_exceptions[SWIG_CSharpApplicationException].callback;
  if ((size_t)code < sizeof(SWIG_csharp_exceptions)/sizeof(SWIG_CSharpException_t)) {
    callback = SWIG_csharp_exceptions[code].callback;
  }
  callback(msg);
}

static void SWIGUNUSED SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpExceptionArgumentCodes code, const char *msg, const char *param_name) {
  SWIG_CSharpExceptionArgumentCallback_t callback = SWIG_csharp_exceptions_argument[SWIG_CSharpArgumentException].callback;
  if ((size_t)code < sizeof(SWIG_csharp_exceptions_argument)/sizeof(SWIG_CSharpExceptionArgument_t)) {
    callback = SWIG_csharp_exceptions_argument[code].callback;
  }
  callback(msg, param_name);
}


#ifdef __cplusplus
extern "C" 
#endif
SWIGEXPORT void SWIGSTDCALL SWIGRegisterExceptionCallbacks_libnorddrop(
                                                SWIG_CSharpExceptionCallback_t applicationCallback,
                                                SWIG_CSharpExceptionCallback_t arithmeticCallback,
                                                SWIG_CSharpExceptionCallback_t divideByZeroCallback, 
                                                SWIG_CSharpExceptionCallback_t indexOutOfRangeCallback, 
                                                SWIG_CSharpExceptionCallback_t invalidCastCallback,
                                                SWIG_CSharpExceptionCallback_t invalidOperationCallback,
                                                SWIG_CSharpExceptionCallback_t ioCallback,
                                                SWIG_CSharpExceptionCallback_t nullReferenceCallback,
                                                SWIG_CSharpExceptionCallback_t outOfMemoryCallback, 
                                                SWIG_CSharpExceptionCallback_t overflowCallback, 
                                                SWIG_CSharpExceptionCallback_t systemCallback) {
  SWIG_csharp_exceptions[SWIG_CSharpApplicationException].callback = applicationCallback;
  SWIG_csharp_exceptions[SWIG_CSharpArithmeticException].callback = arithmeticCallback;
  SWIG_csharp_exceptions[SWIG_CSharpDivideByZeroException].callback = divideByZeroCallback;
  SWIG_csharp_exceptions[SWIG_CSharpIndexOutOfRangeException].callback = indexOutOfRangeCallback;
  SWIG_csharp_exceptions[SWIG_CSharpInvalidCastException].callback = invalidCastCallback;
  SWIG_csharp_exceptions[SWIG_CSharpInvalidOperationException].callback = invalidOperationCallback;
  SWIG_csharp_exceptions[SWIG_CSharpIOException].callback = ioCallback;
  SWIG_csharp_exceptions[SWIG_CSharpNullReferenceException].callback = nullReferenceCallback;
  SWIG_csharp_exceptions[SWIG_CSharpOutOfMemoryException].callback = outOfMemoryCallback;
  SWIG_csharp_exceptions[SWIG_CSharpOverflowException].callback = overflowCallback;
  SWIG_csharp_exceptions[SWIG_CSharpSystemException].callback = systemCallback;
}

#ifdef __cplusplus
extern "C" 
#endif
SWIGEXPORT void SWIGSTDCALL SWIGRegisterExceptionArgumentCallbacks_libnorddrop(
                                                SWIG_CSharpExceptionArgumentCallback_t argumentCallback,
                                                SWIG_CSharpExceptionArgumentCallback_t argumentNullCallback,
                                                SWIG_CSharpExceptionArgumentCallback_t argumentOutOfRangeCallback) {
  SWIG_csharp_exceptions_argument[SWIG_CSharpArgumentException].callback = argumentCallback;
  SWIG_csharp_exceptions_argument[SWIG_CSharpArgumentNullException].callback = argumentNullCallback;
  SWIG_csharp_exceptions_argument[SWIG_CSharpArgumentOutOfRangeException].callback = argumentOutOfRangeCallback;
}


/* Callback for returning strings to C# without leaking memory */
typedef char * (SWIGSTDCALL* SWIG_CSharpStringHelperCallback)(const char *);
static SWIG_CSharpStringHelperCallback SWIG_csharp_string_callback = NULL;


#ifdef __cplusplus
extern "C" 
#endif
SWIGEXPORT void SWIGSTDCALL SWIGRegisterStringCallback_libnorddrop(SWIG_CSharpStringHelperCallback callback) {
  SWIG_csharp_string_callback = callback;
}


/* Contract support */

#define SWIG_contract_assert(nullreturn, expr, msg) if (!(expr)) {SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentOutOfRangeException, msg, ""); return nullreturn; } else


#include "../../norddrop.h"


typedef void(*cs_norddrop_event_cb)(const char *);
void call_norddrop_event_cb(void *ctx, const char *msg) {
  cs_norddrop_event_cb cb = ctx;
  cb(msg);
}

typedef void(*cs_norddrop_logger_cb)(int, const char *);
void call_norddrop_logger_cb(void *ctx, int l, const char *msg) {
  cs_norddrop_logger_cb cb = ctx;
  cb(l, msg);
}

typedef int(*cs_norddrop_pubkey_cb)(const unsigned char*, unsigned char*);
int call_norddrop_pubkey_cb(void *ctx, const char* ip, char* privkey) {
  cs_norddrop_pubkey_cb cb = ctx;
  return cb(ip, privkey);
}

SWIGINTERN struct norddrop *new_norddrop(norddrop_event_cb events,enum norddrop_log_level level,norddrop_logger_cb logger,norddrop_pubkey_cb pubkey_cb,char const *privkey){

        norddrop *t = NULL;
        if (NORDDROP_RES_OK != norddrop_new(&t, events, level, logger, pubkey_cb, privkey)) {
            SWIG_CSharpSetPendingException(SWIG_CSharpSystemException,
                                           "Could not initialize library");
            return NULL;
        }
        return t;
    }
SWIGINTERN void delete_norddrop(struct norddrop *self){
        norddrop_destroy(self);
    }

#ifdef __cplusplus
extern "C" {
#endif

SWIGEXPORT void * SWIGSTDCALL CSharp_NordSecfNordDrop_new_Norddrop___(cs_norddrop_event_cb jarg1, int jarg2, cs_norddrop_logger_cb jarg3, cs_norddrop_pubkey_cb jarg4, unsigned char* jarg5) {
  void * jresult ;
  norddrop_event_cb arg1 ;
  enum norddrop_log_level arg2 ;
  norddrop_logger_cb arg3 ;
  norddrop_pubkey_cb arg4 ;
  char *arg5 = (char *) 0 ;
  struct norddrop *result = 0 ;
  
  
  arg1 = (struct norddrop_event_cb) {
    .ctx = jarg1,
    .cb = call_norddrop_event_cb,
  };
  
  arg2 = (enum norddrop_log_level)jarg2; 
  
  arg3 = (struct norddrop_logger_cb) {
    .ctx = jarg3,
    .cb = call_norddrop_logger_cb,
  };
  
  
  arg4 = (struct norddrop_pubkey_cb) {
    .ctx = jarg4,
    .cb = call_norddrop_pubkey_cb,
  };
  
  arg5 = jarg5;
  
  result = (struct norddrop *)new_norddrop(arg1,arg2,arg3,arg4,(char const *)arg5);
  
  jresult = (void *)result; 
  
  
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_NordSecfNordDrop_delete_Norddrop___(void * jarg1) {
  struct norddrop *arg1 = (struct norddrop *) 0 ;
  
  arg1 = (struct norddrop *)jarg1; 
  delete_norddrop(arg1);
}


SWIGEXPORT int SWIGSTDCALL CSharp_NordSecfNordDrop_Norddrop_Start___(void * jarg1, char * jarg2, char * jarg3) {
  int jresult ;
  struct norddrop *arg1 = (struct norddrop *) 0 ;
  char *arg2 = (char *) 0 ;
  char *arg3 = (char *) 0 ;
  enum norddrop_result result;
  
  arg1 = (struct norddrop *)jarg1; 
  arg2 = (char *)jarg2; 
  arg3 = (char *)jarg3; 
  result = (enum norddrop_result)norddrop_start(arg1,(char const *)arg2,(char const *)arg3);
  jresult = (int)result; 
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_NordSecfNordDrop_Norddrop_Stop___(void * jarg1) {
  int jresult ;
  struct norddrop *arg1 = (struct norddrop *) 0 ;
  enum norddrop_result result;
  
  arg1 = (struct norddrop *)jarg1; 
  result = (enum norddrop_result)norddrop_stop(arg1);
  jresult = (int)result; 
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_NordSecfNordDrop_Norddrop_CancelTransfer___(void * jarg1, char * jarg2) {
  int jresult ;
  struct norddrop *arg1 = (struct norddrop *) 0 ;
  char *arg2 = (char *) 0 ;
  enum norddrop_result result;
  
  arg1 = (struct norddrop *)jarg1; 
  arg2 = (char *)jarg2; 
  result = (enum norddrop_result)norddrop_cancel_transfer(arg1,(char const *)arg2);
  jresult = (int)result; 
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_NordSecfNordDrop_Norddrop_CancelFile___(void * jarg1, char * jarg2, char * jarg3) {
  int jresult ;
  struct norddrop *arg1 = (struct norddrop *) 0 ;
  char *arg2 = (char *) 0 ;
  char *arg3 = (char *) 0 ;
  enum norddrop_result result;
  
  arg1 = (struct norddrop *)jarg1; 
  arg2 = (char *)jarg2; 
  arg3 = (char *)jarg3; 
  result = (enum norddrop_result)norddrop_cancel_file(arg1,(char const *)arg2,(char const *)arg3);
  jresult = (int)result; 
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_NordSecfNordDrop_Norddrop_Download___(void * jarg1, char * jarg2, char * jarg3, char * jarg4) {
  int jresult ;
  struct norddrop *arg1 = (struct norddrop *) 0 ;
  char *arg2 = (char *) 0 ;
  char *arg3 = (char *) 0 ;
  char *arg4 = (char *) 0 ;
  enum norddrop_result result;
  
  arg1 = (struct norddrop *)jarg1; 
  arg2 = (char *)jarg2; 
  arg3 = (char *)jarg3; 
  arg4 = (char *)jarg4; 
  result = (enum norddrop_result)norddrop_download(arg1,(char const *)arg2,(char const *)arg3,(char const *)arg4);
  jresult = (int)result; 
  return jresult;
}


SWIGEXPORT char * SWIGSTDCALL CSharp_NordSecfNordDrop_Norddrop_NewTransfer___(void * jarg1, char * jarg2, char * jarg3) {
  char * jresult ;
  struct norddrop *arg1 = (struct norddrop *) 0 ;
  char *arg2 = (char *) 0 ;
  char *arg3 = (char *) 0 ;
  char *result = 0 ;
  
  arg1 = (struct norddrop *)jarg1; 
  arg2 = (char *)jarg2; 
  arg3 = (char *)jarg3; 
  result = (char *)norddrop_new_transfer(arg1,(char const *)arg2,(char const *)arg3);
  jresult = SWIG_csharp_string_callback((const char *)result); 
  free(result);
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_NordSecfNordDrop_Norddrop_PurgeTransfers___(void * jarg1, char * jarg2) {
  int jresult ;
  struct norddrop *arg1 = (struct norddrop *) 0 ;
  char *arg2 = (char *) 0 ;
  enum norddrop_result result;
  
  arg1 = (struct norddrop *)jarg1; 
  arg2 = (char *)jarg2; 
  result = (enum norddrop_result)norddrop_purge_transfers(arg1,(char const *)arg2);
  jresult = (int)result; 
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_NordSecfNordDrop_Norddrop_PurgeTransfersUntil___(void * jarg1, void * jarg2) {
  int jresult ;
  struct norddrop *arg1 = (struct norddrop *) 0 ;
  int64_t arg2 ;
  int64_t *argp2 ;
  enum norddrop_result result;
  
  arg1 = (struct norddrop *)jarg1; 
  argp2 = (int64_t *)jarg2; 
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null int64_t", 0);
    return 0;
  }
  arg2 = *argp2; 
  result = (enum norddrop_result)norddrop_purge_transfers_until(arg1,arg2);
  jresult = (int)result; 
  return jresult;
}


SWIGEXPORT char * SWIGSTDCALL CSharp_NordSecfNordDrop_Norddrop_GetTransfersSince___(void * jarg1, void * jarg2) {
  char * jresult ;
  struct norddrop *arg1 = (struct norddrop *) 0 ;
  int64_t arg2 ;
  int64_t *argp2 ;
  char *result = 0 ;
  
  arg1 = (struct norddrop *)jarg1; 
  argp2 = (int64_t *)jarg2; 
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null int64_t", 0);
    return 0;
  }
  arg2 = *argp2; 
  result = (char *)norddrop_get_transfers_since(arg1,arg2);
  jresult = SWIG_csharp_string_callback((const char *)result); 
  free(result);
  return jresult;
}


SWIGEXPORT char * SWIGSTDCALL CSharp_NordSecfNordDrop_Norddrop_Version___() {
  char * jresult ;
  char *result = 0 ;
  
  result = (char *)norddrop_version();
  jresult = SWIG_csharp_string_callback((const char *)result); 
  return jresult;
}


#ifdef __cplusplus
}
#endif

