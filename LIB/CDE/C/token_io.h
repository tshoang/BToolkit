/*Copyright (c) 1985-2012, B-Core (UK) Ltd

Permission is hereby granted, free of charge, to any person or organization
obtaining a copy of the software and accompanying documentation covered by
this license (the "Software") to use, reproduce, display, distribute,
execute, and transmit the Software, and to prepare derivative works of the
Software, and to permit third-parties to whom the Software is furnished to
do so, all subject to the following:

The copyright notices in the Software and this entire statement, including
the above license grant, this restriction and the following disclaimer,
must be included in all copies of the Software, in whole or in part, and
all derivative works of the Software, unless such copies or derivative
works are solely in the form of machine-executable object code generated by
a source language processor.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE, TITLE AND NON-INFRINGEMENT. IN NO EVENT
SHALL THE COPYRIGHT HOLDERS OR ANYONE DISTRIBUTING THE SOFTWARE BE LIABLE
FOR ANY DAMAGES OR OTHER LIABILITY, WHETHER IN CONTRACT, TORT OR OTHERWISE,
ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
DEALINGS IN THE SOFTWARE.
*/

#include "basic_io.h"

#define INI_token_io()       { ; }

#define _GET_TOK(t)           GET_NAT ( t )

#define _GET_PROMPT_TOK(t,s)  GET_PROMPT_NAT ( t, s )

#define _PUT_TOK(t)           PUT_NAT ( t )

#ifndef _NO_PROTO

#define _PUT_ACT_TOK(T,t) \
  if   ( ! strlen ( T [ 0 ] ) ) { \
    PUT_STR( T [ t ] ); \
  } \
  else { \
    if ( ( strcmp ( T [ 0 ], "SCALAR" ) != 0 )        && \
         ( strcmp ( T [ 0 ], "0..2147483646" ) != 0 )    ) { \
      PUT_STR( T [ 0 ] ); PUT_CHR ('.'); \
    } \
    PUT_NAT ( t ); \
  }

#define _GET_PROMPT_ACT_TOK(t,T,s) \
  PUT_STR ( s ); \
  _GET_ACT_TOK (t, T )

#else

extern void PUT_ACT_TOK_M ();
extern void GET_ACT_TOK_M ();

#define _PUT_ACT_TOK(T,t)            PUT_ACT_TOK_M ( T, t )

#define _GET_ACT_TOK(t,T) \
  GET_ACT_TOK_M ( T, t, "      Select token:     " );

#define _GET_PROMPT_ACT_TOK(t,T,s)   GET_ACT_TOK_M ( T, t, s )

#endif
