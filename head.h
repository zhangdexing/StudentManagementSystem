#ifndef __HEAD_H__
#define __HEAD_H__

#include "stdio.h"
#include "string.h"
#include "stdlib.h"
#include "stdbool.h"
#include "string.h"

#define NONE		"\033[m"//结束符
#define YELLOW		"\033[1;33m" //黄色
#define RED 		"\033[0;32;31m"//红色
#define WRITE		"\033[1;37m"//白色
typedef struct info
{
char name[22];
unsigned char age;
}info_t;


extern int tmp;
extern int i,j,flag2,mode,student_num,elect;
extern info_t *p;
extern info_t *q;
extern info_t str_tmp;
//extern info_t change;
//extern info_t array[5];

extern void call_back( );

#endif