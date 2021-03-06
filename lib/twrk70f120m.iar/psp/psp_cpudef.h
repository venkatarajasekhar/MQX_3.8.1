/**HEADER**********************************************************************
*
* Copyright (c) 2010 Freescale Semiconductor;
* All Rights Reserved
*
*******************************************************************************
*
* THIS SOFTWARE IS PROVIDED BY FREESCALE "AS IS" AND ANY EXPRESSED OR
* IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
* OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
* IN NO EVENT SHALL FREESCALE OR ITS CONTRIBUTORS BE LIABLE FOR ANY DIRECT,
* INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
* (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
* SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
* HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
* STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING
* IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF
* THE POSSIBILITY OF SUCH DAMAGE.
*
*******************************************************************************
*
* $FileName: psp_cpudef.h$
* $Version : 3.8.11.0$
* $Date    : May-23-2012$
*
* Comments:
*   Processor and platform identifiers defined here
*
*END**************************************************************************/

#ifndef __psp_cpudef_h__
    #define __psp_cpudef_h__

#include "mqx_cpudef.h"

/* CPU groups */
#define PSP_CPU_GROUP_KINETIS_K10   (1)
#define PSP_CPU_GROUP_KINETIS_K20   (2)
#define PSP_CPU_GROUP_KINETIS_K30   (3)
#define PSP_CPU_GROUP_KINETIS_K40   (4)
#define PSP_CPU_GROUP_KINETIS_K50   (5)
#define PSP_CPU_GROUP_KINETIS_K60   (6)
#define PSP_CPU_GROUP_KINETIS_K70   (7)

/* Specific CPU identification macros */
/* K10 family */
#define PSP_CPU_MK10DX128Z      (PSP_CPU_NUM(PSP_CPU_ARCH_ARM, PSP_CPU_GROUP_KINETIS_K10, 0))
#define PSP_CPU_MK10DX256Z      (PSP_CPU_NUM(PSP_CPU_ARCH_ARM, PSP_CPU_GROUP_KINETIS_K10, 1))
#define PSP_CPU_MK10DN512Z      (PSP_CPU_NUM(PSP_CPU_ARCH_ARM, PSP_CPU_GROUP_KINETIS_K10, 2))
#define PSP_CPU_MK10F12         (PSP_CPU_NUM(PSP_CPU_ARCH_ARM, PSP_CPU_GROUP_KINETIS_K10, 3))
/* K20 family */
#define PSP_CPU_MK20DX128Z      (PSP_CPU_NUM(PSP_CPU_ARCH_ARM, PSP_CPU_GROUP_KINETIS_K20, 0))
#define PSP_CPU_MK20DX256Z      (PSP_CPU_NUM(PSP_CPU_ARCH_ARM, PSP_CPU_GROUP_KINETIS_K20, 1))
#define PSP_CPU_MK20DN512Z      (PSP_CPU_NUM(PSP_CPU_ARCH_ARM, PSP_CPU_GROUP_KINETIS_K20, 2))
#define PSP_CPU_MK20F12         (PSP_CPU_NUM(PSP_CPU_ARCH_ARM, PSP_CPU_GROUP_KINETIS_K20, 3))
#define PSP_CPU_MK20DX256       (PSP_CPU_NUM(PSP_CPU_ARCH_ARM, PSP_CPU_GROUP_KINETIS_K20, 4))
#define PSP_CPU_MK20D50M        (PSP_CPU_NUM(PSP_CPU_ARCH_ARM, PSP_CPU_GROUP_KINETIS_K20, 5))
/* K30 family */
#define PSP_CPU_MK30DX128Z      (PSP_CPU_NUM(PSP_CPU_ARCH_ARM, PSP_CPU_GROUP_KINETIS_K30, 0))
#define PSP_CPU_MK30DX256Z      (PSP_CPU_NUM(PSP_CPU_ARCH_ARM, PSP_CPU_GROUP_KINETIS_K30, 1))
#define PSP_CPU_MK30DN512Z      (PSP_CPU_NUM(PSP_CPU_ARCH_ARM, PSP_CPU_GROUP_KINETIS_K30, 2))
/* K40 family */
#define PSP_CPU_MK40DX128Z      (PSP_CPU_NUM(PSP_CPU_ARCH_ARM, PSP_CPU_GROUP_KINETIS_K40, 0))
#define PSP_CPU_MK40DX256Z      (PSP_CPU_NUM(PSP_CPU_ARCH_ARM, PSP_CPU_GROUP_KINETIS_K40, 1))
#define PSP_CPU_MK40DN512Z      (PSP_CPU_NUM(PSP_CPU_ARCH_ARM, PSP_CPU_GROUP_KINETIS_K40, 2))
#define PSP_CPU_MK40DX128       (PSP_CPU_NUM(PSP_CPU_ARCH_ARM, PSP_CPU_GROUP_KINETIS_K40, 3))
#define PSP_CPU_MK40DX256       (PSP_CPU_NUM(PSP_CPU_ARCH_ARM, PSP_CPU_GROUP_KINETIS_K40, 4))
#define PSP_CPU_MK40D100M       (PSP_CPU_NUM(PSP_CPU_ARCH_ARM, PSP_CPU_GROUP_KINETIS_K40, 5))
/* K50 family */
#define PSP_CPU_MK53DN256Z      (PSP_CPU_NUM(PSP_CPU_ARCH_ARM, PSP_CPU_GROUP_KINETIS_K50, 0))
#define PSP_CPU_MK53DX256Z      (PSP_CPU_NUM(PSP_CPU_ARCH_ARM, PSP_CPU_GROUP_KINETIS_K50, 1))
#define PSP_CPU_MK53DN512Z      (PSP_CPU_NUM(PSP_CPU_ARCH_ARM, PSP_CPU_GROUP_KINETIS_K50, 2))
#define PSP_CPU_MK50DX256Z      (PSP_CPU_NUM(PSP_CPU_ARCH_ARM, PSP_CPU_GROUP_KINETIS_K50, 3))
#define PSP_CPU_MK50DN512Z      (PSP_CPU_NUM(PSP_CPU_ARCH_ARM, PSP_CPU_GROUP_KINETIS_K50, 4))
#define PSP_CPU_MK51DX256Z      (PSP_CPU_NUM(PSP_CPU_ARCH_ARM, PSP_CPU_GROUP_KINETIS_K50, 5))
#define PSP_CPU_MK51DN256Z      (PSP_CPU_NUM(PSP_CPU_ARCH_ARM, PSP_CPU_GROUP_KINETIS_K50, 4))
#define PSP_CPU_MK51DN512Z      (PSP_CPU_NUM(PSP_CPU_ARCH_ARM, PSP_CPU_GROUP_KINETIS_K50, 7))
#define PSP_CPU_MK52DN512Z      (PSP_CPU_NUM(PSP_CPU_ARCH_ARM, PSP_CPU_GROUP_KINETIS_K50, 8))
/* K60 famly */
#define PSP_CPU_MK60DN256Z      (PSP_CPU_NUM(PSP_CPU_ARCH_ARM, PSP_CPU_GROUP_KINETIS_K60, 0))
#define PSP_CPU_MK60DX256Z      (PSP_CPU_NUM(PSP_CPU_ARCH_ARM, PSP_CPU_GROUP_KINETIS_K60, 1))
#define PSP_CPU_MK60DN512Z      (PSP_CPU_NUM(PSP_CPU_ARCH_ARM, PSP_CPU_GROUP_KINETIS_K60, 2))
#define PSP_CPU_MK60DF120M      (PSP_CPU_NUM(PSP_CPU_ARCH_ARM, PSP_CPU_GROUP_KINETIS_K60, 3))
#define PSP_CPU_MK60D100M       (PSP_CPU_NUM(PSP_CPU_ARCH_ARM, PSP_CPU_GROUP_KINETIS_K60, 4))
/* K70 family */
#define PSP_CPU_MK70DP256       (PSP_CPU_NUM(PSP_CPU_ARCH_ARM, PSP_CPU_GROUP_KINETIS_K70, 0))
#define PSP_CPU_MK70F120M       (PSP_CPU_NUM(PSP_CPU_ARCH_ARM, PSP_CPU_GROUP_KINETIS_K70, 1))
#define PSP_CPU_MK70F150M       (PSP_CPU_NUM(PSP_CPU_ARCH_ARM, PSP_CPU_GROUP_KINETIS_K70, 2))

/* Backward compatibility with early access verions */
/* K40 */
#define PSP_CPU_K40N256         PSP_CPU_MK40DX256Z
#define PSP_CPU_K40N512         PSP_CPU_MK40DN512Z
#define PSP_CPU_MK40X256        PSP_CPU_MK40DX256Z
/* K53 */
#define PSP_CPU_K53N512         PSP_CPU_MK53DN512Z
#define PSP_CPU_MK53N512        PSP_CPU_MK53DN512Z
/* K60 */
#define PSP_CPU_K60N512         PSP_CPU_MK60DN512Z
#define PSP_CPU_MK60N512        PSP_CPU_MK60DN512Z

/* CPU id check support macros */
#define PSP_MQX_CPU_IS_KINETIS_K10  ((PSP_GET_CPU_GROUP(MQX_CPU) == PSP_CPU_GROUP_KINETIS_K10))
#define PSP_MQX_CPU_IS_KINETIS_K20  ((PSP_GET_CPU_GROUP(MQX_CPU) == PSP_CPU_GROUP_KINETIS_K20))
#define PSP_MQX_CPU_IS_KINETIS_K30  ((PSP_GET_CPU_GROUP(MQX_CPU) == PSP_CPU_GROUP_KINETIS_K30))
#define PSP_MQX_CPU_IS_KINETIS_K40  ((PSP_GET_CPU_GROUP(MQX_CPU) == PSP_CPU_GROUP_KINETIS_K40))
#define PSP_MQX_CPU_IS_KINETIS_K50  ((PSP_GET_CPU_GROUP(MQX_CPU) == PSP_CPU_GROUP_KINETIS_K50))
#define PSP_MQX_CPU_IS_KINETIS_K60  ((PSP_GET_CPU_GROUP(MQX_CPU) == PSP_CPU_GROUP_KINETIS_K60))
#define PSP_MQX_CPU_IS_KINETIS_K70  ((PSP_GET_CPU_GROUP(MQX_CPU) == PSP_CPU_GROUP_KINETIS_K70))

#define PSP_MQX_CPU_IS_KINETIS      (PSP_MQX_CPU_IS_KINETIS_K10 | \
                                     PSP_MQX_CPU_IS_KINETIS_K20 | \
                                     PSP_MQX_CPU_IS_KINETIS_K30 | \
                                     PSP_MQX_CPU_IS_KINETIS_K40 | \
                                     PSP_MQX_CPU_IS_KINETIS_K50 | \
                                     PSP_MQX_CPU_IS_KINETIS_K60 | \
                                     PSP_MQX_CPU_IS_KINETIS_K70 )

#endif /* __psp_cpudef_h__ */
