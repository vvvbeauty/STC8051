#ifndef __DS1302_H_
#define __DS1302_H_

#include "kingst.h"
#include "config.h"

#define DS1302_CE  P1_7
#define DS1302_CK  P3_5
#define DS1302_IO  P3_4

typedef struct 
{
	unsigned int year;        //年
	unsigned char month;      //月
	unsigned char day;       //日
	unsigned char hour;       //时
	unsigned char minutes;    //分
	unsigned char seconds;    //秒
	unsigned char week;       //星期
}DataStruct;

/*******************************************************************************
 * 函数名称 : initDS1302
 * 函数介绍 : ds1302模块初始化
 * 参数介绍 : 无
 * 返回值   : 无
 ******************************************************************************/
extern void initDS1302();


/*******************************************************************************
 * 函数名称 : ds1302ByteWrite
 * 函数介绍 : 向1302中写一个字节
 * 参数介绍 : data : 将要写的字节
 * 返回值   : 无
 ******************************************************************************/
extern void ds1302ByteWrite(unsigned char data);


/*******************************************************************************
 * 函数名称 : ds1302ByteRead
 * 函数介绍 : 从1302中读一个字节
 * 参数介绍 : data : 将要写的字节
 * 返回值   : 无
 ******************************************************************************/
extern unsigned char ds1302ByteRead();

/*******************************************************************************
 * 函数名称 : ds1302SingleRead
 * 函数介绍 : 用单次读操作从某一寄存器中读取一个字节,
 * 参数介绍 : addr : 寄存器地址
 * 返回值   : 读取的值
 ******************************************************************************/
extern unsigned char ds1302SingleRead(unsigned char addr);

/*******************************************************************************
 * 函数名称 : ds1302SingleWrite
 * 函数介绍 : 用单次读操作向某一寄存器中写入一个字节,
 * 参数介绍 : addr : 寄存器地址
 * 			data : 要写入的内容
 * 返回值   : 无
 ******************************************************************************/
extern void ds1302SingleWrite(unsigned char addr, unsigned char data);


/*******************************************************************************
 * 函数名称 : ds1302BurstRead
 * 函数介绍 : 用突发模式连续写入8个寄存器数据
 * 参数介绍 : data : 将要写入的内容
 * 返回值   : 无
 ******************************************************************************/
extern void ds1302BurstRead(unsigned char *data);

/*******************************************************************************
 * 函数名称 : ds1302BurstWrite
 * 函数介绍 : 用突发模式连续读取8个寄存器数据,
 * 参数介绍 : data : 读取的值的缓冲区
 * 返回值   : 无
 ******************************************************************************/
extern void ds1302BurstWrite(unsigned char *data);

/*******************************************************************************
 * 函数名称 : setDs1302Time
 * 函数介绍 : 设置ds1302的时钟模块时间
 * 参数介绍 : data : 包含要设置时间的结构体指针
 * 返回值   : 无
 ******************************************************************************/
extern void setDs1302Time(DataStruct *time);

/*******************************************************************************
 * 函数名称 : getDs1302Time
 * 函数介绍 : 获得ds1302的时钟模块时间
 * 参数介绍 : data : 用来保存时间的结构体指针
 * 返回值   : 无
 ******************************************************************************/
extern void getDs1302Time(DataStruct *time);

#endif //__DS1302_H_
