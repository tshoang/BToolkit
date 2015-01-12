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

#define BYTE _Byt_TYPE_BYTE

extern char * _Byt_TYPE_BYTE [];


/*************** CONSTANTS *****************/ 

#define MinByt         0

#define MaxByt         255

#define n2b(n)         (n)

#define b2n(n)         (n)

#define b2bs(n)        (n)

#define bs2b(n)        (n)

#define b2bl(b)        (((b)==0)==0)

#define bl2b(n)        (n)

/*************** OPERATIONS *****************/

#define INI_Byt_TYPE() { }

#define BLE(r,a,b)     *(r) = ((a<=b)!=0)

#define BGE(r,a,b)     *(r) = ((a>=b)!=0)

#define BLT(r,a,b)     *(r) = ((a< b)!=0)

#define BGT(r,a,b)     *(r) = ((a> b)!=0)

#define BEQ(r,a,b)     *(r) = ((a==b)!=0)

#define BNE(r,a,b)     *(r) = ((a!=b)!=0)

#define BADD(r,a,b)    *(r) = (a)+(b)

#define BSUB(r,a,b)    *(r) = (a)-(b)

#define BMUL(r,a,b)    *(r) = (a)*(b)

#define BDIV(r,a,b)    *(r) = (a)/(b)

#define BMOD(r,a,b)    *(r) = (a)-( (b)*( (a)/(b) ))

#define BINC(r,a)      *(r) = (a)+1

#define BDEC(r,a)      *(r) = (a)-1

#define BLEFT(r,a)     *(r) = (a)*2

#define BRIGHT(r,a)    *(r) = (a)/2
