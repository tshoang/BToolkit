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

#include <stdlib.h>
#include <time.h>
#define INI_Scalar_TYPE_Ops()  {srand((int)time((time_t*)0));}
#define SCL(u,v)    {*(u) = v;}
#define MIN(u,v,w) {if( v<=w ){ *(u) = v ;}else{ *(u) = w ;};}
#define MAX(u,v,w) {if( v>=w ){ *(u) = v ;}else{ *(u) = w ;};}
#define INC(u,v)    {*(u) = (v)+1;}
#define DEC(u,v)    {*(u) = (v)-1;}
#define ADD(u,v,w) {*(u) = (v)+(w);}
#define SUB(u,v,w) {*(u) = (v)-(w);}
#define MUL(u,v,w) {*(u) = (v)*(w);}
#define DIV(u,v,w) {*(u) = (v)/(w);}
#define MOD(u,v,w) {*(u) = (v)-( (w)*( (v)/(w) ));}
#define EQL(b,v,w) {*(b) = ((v==w)!=0);}
#define NEQ(b,v,w) {*(b) = ((v!=w)!=0);}
#define GTR(b,v,w) {*(b) = ((v> w)!=0);}
#define GEQ(b,v,w) {*(b) = ((v>=w)!=0);}
#define SMR(b,v,w) {*(b) = ((v< w)!=0);}
#define LEQ(b,v,w) {*(b) = ((v<=w)!=0);}
#define EQZ(b,v) {*(b) = ((v==0)!=0);}
#define RND(r,m) {*(r) = rand()%(m+1);}

void Scalar_TYPE_Ops_dummy___ ();
