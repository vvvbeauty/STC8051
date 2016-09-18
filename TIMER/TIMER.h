/*******************************************************************************
 * 文件名称：TIMER.h
 * 作者    ：  郑朋桥
 * 文件介绍：
 * 
 ******************************************************************************/
#ifndef __TIMER_H_
#define __TIMER_H_
#include "8052.h"
#define NULL 0
extern unsigned long timerClock;
/*******************************************************************************
 *  结构体名字 ：  Timer0TaskStruct
 *  结构体介绍 ：  用于记录定时任务的相关数据
 ******************************************************************************/
typedef struct{
	unsigned long time;               //定时到期剩余的时间
	void (*TimerFun0)();    //定时器到期将会调用的函数
	unsigned int tag;       //用于标志，在删除时，可以使用此标志
	unsigned long timeBack;
}Timer0TaskStruct;
/*******************************************************************************
 *  函数名字 ：  getTaskCount
 *  函数介绍 ：  得到当前时间的任务数
 *  参数介绍 ：  无
 *  返回    ：  无   
 ******************************************************************************/
extern int getTaskCount();
/*******************************************************************************
 *  函数名字 ：  InterruptTimer0
 *  函数介绍 ：  定时器0的中断服务函数
 *  参数介绍 ：  无
 *  返回    ：  无   
 ******************************************************************************/
extern void InterruptTimer0() __interrupt 1;
/*******************************************************************************
 *  函数名字 ：  updateTIMER0
 *  函数介绍 ：  查看是否有时间发生
 *  参数介绍 ：  无
 *  返回    ：  无   
 ******************************************************************************/
extern void updateTIMER0();
/*******************************************************************************
 *  函数名字 ：  addTIMER0Task
 *  函数介绍 ：  添加定时服务
 *  参数介绍 ：  inTimerMs ： 要定时的时间
 *			： inTimerFun0 ： 定时器要调用的函数
 *			： intag    ： 当前任务的标志，删除时候使用
 *  返回    ：  无   
 ******************************************************************************/
extern void addTIMER0Task(unsigned int inTimerMs,void (*inTimerFun0)(),int intag);
/*******************************************************************************
 *  函数名字 ：  delTIMER0Task
 *  函数介绍 ：  删除定时服务
 *  参数介绍 ：  intag    ： 要删除的任务的标志
 *  返回    ：  无   
 ******************************************************************************/
extern void delTIMER0Task(int intag);
/*******************************************************************************
 *  函数名字 ：  delay10usValue
 *  函数介绍 ：  不精确延时,阻塞定义微秒,建议使用定时器1.
 *  参数介绍 ：  value :将要定时的微秒数
 *  返回    ：  无
 ******************************************************************************/
extern void delay10usValue(unsigned int value);
/*******************************************************************************
 * 函数名称 : delay10us
 * 函数介绍 : 精确延时10us,先执行一个LCALL指令（2 μs），然后执行6个_NOP_( )语句（6 μs），最
 * 后执行了一个RET指令（2 μs）
 * 参数介绍 : 无
 * 返回值   : 无
 ******************************************************************************/
void delay10us();
#endif
