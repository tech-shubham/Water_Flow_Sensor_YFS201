/***************************************************************************
*
*
* WFS.h
*
* Created by Shubham Gupta 
* Copyright (c) shubhamgupta.org  and/or its affiliates.
* All rights reserved.
***************************************************************************/

#ifndef __WFS_HEADER_H__
#define __WFS_HEADER_H__

#include "interrupt.h"
#include "timers.h"

/////////////////////////////// water flow sensor///////////////////////
int sec1,min1,f_count,q1;// for water flow sensors
void AB_STEM_init_WFS(void);
int AB_STEM_Read_WFS(void);


















#endif //__WFS_HEADER_H__