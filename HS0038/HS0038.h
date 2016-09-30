#ifndef __HS0038_H_
#define __HS0038_H_

#include "kingst.h"
#include "config.h"

#define HS0038 P3_3     //红外引脚


extern unsigned char irflag;  //红外接收标志
extern __xdata unsigned char ircode[4];   //红外代码接收缓冲区
/*******************************************************************************
 * 函数名称 : hs0038Init
 * 函数介绍 : 初始化
 * 参数介绍 : 无
 * 返回值  :  无
 ******************************************************************************/
extern void hs0038Init();

/*******************************************************************************
 * 函数名称 : EXINT1_ISR
 * 函数介绍 : 外部中断1的中断函数
 * 参数介绍 : 无
 * 返回值  :  无
 ******************************************************************************/

extern void EXINT1_ISR() __interrupt 2;

#endif //__HS0038_H_
