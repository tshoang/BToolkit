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

#include "Char_TYPE.h"
#include "Char_TYPE_Ops.h"

void
#ifdef _BT_ANSIC
CPY_STR( int *tt, int *ff )
#else
CPY_STR( tt, ff )
int *ff, *tt;
#endif
{
	int i;
	char *f,*t;
	f = (char *)ff;
	t = (char *)tt;
	i=0;
	while ( f[i]!='\0' )  {
		t[i] = f[i];
		i = i+1;
	};
	t[i] = '\0';
}

void
#ifdef _BT_ANSIC
CNC_STR( int *tt, int *ff, int *gg )
#else
CNC_STR( tt, ff, gg )
int *ff, *tt, *gg;
#endif
{
	int i, j;
	char *f,*g,*t;
	f = (char *)ff;
	g = (char *)gg;
	t = (char *)tt;
	i=0;
	while ( f[i]!='\0' )  {
		t[i] = f[i];
		i++;
	};
        j = 0;
	while ( g[j]!='\0' )  {
		t[i] = g[j];
		j++;
		i++;
	};
	t[i] = '\0';
}
