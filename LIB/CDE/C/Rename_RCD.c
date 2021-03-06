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

extern int Rename_RCDP1;
extern int Rename_RCDP2;
extern int Rename_RCDP3;

extern int Rename_RCD_ARR_BiArrP1;
extern int Rename_RCD_ARR_BiArrP2;
extern int Rename_RCD_ARR_BiArrP3;

extern int Rename_RCD_ARR[];

extern int Rename_RCD_HEAP_ARR_BiArrP1;
extern int Rename_RCD_HEAP_ARR_BiArrP2;
extern int Rename_RCD_HEAP_ARR_BiArrP3;

extern int Rename_RCD_HEAP_ARR[];

extern int Rename_RCD_TOT;

INI_Rename_RCD()
{
  INI_Rename_RCD_ARR_BiArr();
  INI_Rename_RCD_HEAP_ARR_BiArr();
  INI_Rename_RCD_TOT_Byt();
  {
    int ii;
    ii = 0;
    while( ii<Rename_RCDP3 ){
      Rename_RCD_HEAP_ARR[( ii )-(Rename_RCD_HEAP_ARR_BiArrP2)] =  ii  ;
      *( &ii ) = ( ii )+1 ;
    };
    Rename_RCD_TOT =  0  ;
  }
}

Rename_RCD_IDX(int *bb,int idx)
{
  if( idx<=Rename_RCDP2 ){
    *bb = 1 ;
  } else {
    *bb = 0 ;
  }
}

Rename_RCD_FULL(int *bb)
{
  int vv;
  *( &vv ) = Rename_RCD_TOT ;
  if( vv == Rename_RCDP3 ){
    *bb = 1 ;
  } else {
    *bb = 0 ;
  }
}

Rename_RCD_CRE(int *rr)
{
  int ii,ss;
  *( &ii ) = Rename_RCD_TOT ;
  *( &ss ) = Rename_RCD_HEAP_ARR[( ii )-(Rename_RCD_HEAP_ARR_BiArrP2)] ;
  *( rr ) = ( ss )+1 ;
  Rename_RCD_TOT = Rename_RCD_TOT+1 ;
}

Rename_RCD_KILL(int rr)
{
  int ii,ss;
  Rename_RCD_TOT = Rename_RCD_TOT-1 ;
  *( &ss ) = ( rr )-1 ;
  *( &ii ) = Rename_RCD_TOT ;
  Rename_RCD_HEAP_ARR[( ii )-(Rename_RCD_HEAP_ARR_BiArrP2)] =  ss  ;
}

Rename_RCD_DEF(int *bb,int rr)
{
  int tt,ii,aa,ss;
  *( &tt ) = Rename_RCD_TOT ;
  aa = 1 ;
  ii = Rename_RCDP3;
  while( aa == 1  && ii>tt ){
    *( &ii ) = ( ii )-1 ;
    *( &ss ) = Rename_RCD_HEAP_ARR[( ii )-(Rename_RCD_HEAP_ARR_BiArrP2)] ;
    *( &ss ) = ( ss )+1 ;
    if( rr == ss ){
      aa = 0 ;
    }
  };
  *bb = aa;
}

Rename_RCD_STO(int rr,int idx,int vv)
{
  int jj,kk;
  *( &jj ) = ( rr )-1 ;
  *( &kk ) = ( idx )-1 ;
  *( &jj ) = ( jj )*( Rename_RCDP2 ) ;
  *( &jj ) = ( jj )+( kk ) ;
  Rename_RCD_ARR[( jj )-(Rename_RCD_ARR_BiArrP2)] =  vv  ;
}

Rename_RCD_VAL(int *vv,int rr,int idx)
{
  int jj,kk;
  *( &jj ) = ( rr )-1 ;
  *( &kk ) = ( idx )-1 ;
  *( &jj ) = ( jj )*( Rename_RCDP2 ) ;
  *( &jj ) = ( jj )+( kk ) ;
  *( vv ) = Rename_RCD_ARR[( jj )-(Rename_RCD_ARR_BiArrP2)] ;
}

