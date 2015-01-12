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

extern int Rename_ffnc_objP2;
extern int Rename_ffnc_objP3;
extern int Rename_fnc_obj[];
extern int Rename_ssize_fnc_obj;
extern int Rename_old_fnc_obj[];
extern int Rename_sold_fnc_obj;

char Rename_buf_ffnc_obj[1000];

#define Rename_CHARperWORD 4

#define INI_Rename_ffnc_obj() \
{Rename_ssize_fnc_obj = 0; Rename_sold_fnc_obj=0;}

#define Rename_INI_FNC_OBJ() \
{Rename_ssize_fnc_obj = 0; Rename_sold_fnc_obj=0;}

#define Rename_STS_FNC_OBJ(mm,nn) \
{ \
  *(mm) = (Rename_ssize_fnc_obj - Rename_sold_fnc_obj); \
  *(nn) = (Rename_ffnc_objP3); \
}

#define Rename_ANY_FNC_OBJ(vv) \
{*(vv) = 1;}

#define Rename_TST_FLD_FNC_OBJ(bb,pp) \
{ *(bb) = ( ( (pp>0) && (pp<=Rename_ffnc_objP2) )!=0) ;}



#define Rename_FUL_FNC_OBJ(bb) \
{*(bb) = (((Rename_ssize_fnc_obj - Rename_sold_fnc_obj) == Rename_ffnc_objP3)!=0);}

#define Rename_DEF_FNC_OBJ(bb,ff,ii) \
{*(bb) = (Rename_fnc_obj[(ff-1)*Rename_ffnc_objP2+ii] != 2147483647)!=0;}

#define Rename_VAL_FNC_OBJ(vv,ff,ii) \
{*(vv) = Rename_fnc_obj[(ff-1)*Rename_ffnc_objP2+ii];}

#define Rename_STO_FNC_OBJ(ff,ii,vv) \
{Rename_fnc_obj[(ff-1)*Rename_ffnc_objP2+(ii)] = (vv);}

#define Rename_RMV_FNC_OBJ(ff,ii) \
{Rename_fnc_obj[(ff-1)*Rename_ffnc_objP2+ii] = 2147483647;}

#define Rename_KIL_FNC_OBJ(ff) \
{Rename_sold_fnc_obj=Rename_sold_fnc_obj+1; \
Rename_old_fnc_obj[Rename_sold_fnc_obj]=ff;}

void Rename_CRE_FNC_OBJ();
void Rename_XST_FNC_OBJ();
void Rename_SAV_FNC_OBJ();
void Rename_SAVN_FNC_OBJ();
void Rename_RST_FNC_OBJ();
void Rename_RSTN_FNC_OBJ();
void Rename_FIRST_FNC_OBJ();
void Rename_NEXT_FNC_OBJ();
void Rename_OVR_LIT_FFNC_OBJ();
void Rename_OVR_FFNC_OBJ();
void Rename_EQL_FFNC_OBJ();
void Rename_MOV_FFNC_OBJ();
void Rename_XTR_FFNC_OBJ();
