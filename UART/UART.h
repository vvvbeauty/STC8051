#ifndef __UART_H_
#define __UART_H_
#include "kingst.h"
#include "config.h"
#include "UART.h"

/*******************************************************************************
 * 函数名称 : sendNewLine
 * 函数介绍 : 发送换行符
 * 参数介绍 : 无
 * 返回值  :  无
 ******************************************************************************/
extern void sendNewLine();
/*******************************************************************************
 * 函数名称 : initUart
 * 函数介绍 : 初始化串口
 * 参数介绍 : baud  :  设置的波特率
 * 返回值  :  无
 ******************************************************************************/
extern void initUart(unsigned int baud);
/*******************************************************************************
 * 函数名称 : sendChar
 * 函数介绍 : 发送的字符
 * 参数介绍 : ch  :  要发送的字符
 * 返回值  :  无
 ******************************************************************************/
extern void sendChar(char ch);
/*******************************************************************************
 * 函数名称 : sendString
 * 函数介绍 : 要发送的字符串
 * 参数介绍 : str  :  要发送的字符串
 *           len  :  要发送的个数
 * 返回值  :  无
 ******************************************************************************/
extern void sendString(char * str, int len);

/*******************************************************************************
 * 函数名称 : readChar
 * 函数介绍 : 读取字符
 * 参数介绍 : ch  :  读取的字符存放位置
 * 返回值  :  无
 ******************************************************************************/
extern char readChar();

/*******************************************************************************
 * 函数名称 : readString
 * 函数介绍 : 读取字符串
 * 参数介绍 : str  :  读取字符串暂存的位置
 * 			len  :   要读取的位数
 * 返回值  :  无
 ******************************************************************************/
extern void readString(char * str, int len);

#endif
