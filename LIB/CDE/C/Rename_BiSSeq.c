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

#include "Rename_BiSSeq.h"

#include "Rename_V_BiArr.h"
#include "Rename_L_Byt.h"

#include "Bool_TYPE.h"
#include "Byt_TYPE.h"

void
INI_Rename_BiSSeq()
{
  INI_Rename_V_BiArr();
  INI_Rename_L_Byt();
  Rename_L_STO(0);
}

void
Rename_BiSSeq_LEN(ll)
int *ll;
{
  Rename_L_VAL(ll);
}

void
Rename_BiSSeq_VAL(vv,idx)
int *vv,idx;
{
  Rename_V_VAL(vv,idx);
}

void
Rename_BiSSeq_FILL(vv)
int vv;
{
  int idx;
  idx = 1;
  while( idx<=Rename_BiSSeqP2 ){
    Rename_V_STO(idx,vv);
    BINC(&idx,idx);
  };
  Rename_L_STO(Rename_BiSSeqP2);
}

void
Rename_BiSSeq_CHG(idx,vv)
int idx,vv;
{
  Rename_V_STO(idx,vv);
}

void
Rename_BiSSeq_APP(vv)
int vv;
{
  int ll;
  Rename_L_INC();
  Rename_L_VAL(&ll);
  Rename_V_STO(ll,vv);
}

void
Rename_BiSSeq_KEEP(idx)
int idx;
{
  Rename_L_STO(idx);
}

