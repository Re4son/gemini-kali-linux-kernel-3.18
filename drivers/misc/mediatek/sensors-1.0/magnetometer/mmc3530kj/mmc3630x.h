/*****************************************************************************
 *  Copyright Statement:
 *  --------------------
 *  This software is protected by Copyright and the information and source code
 *  contained herein is confidential. The software including the source code
 *  may not be copied and the information contained herein may not be used or
 *  disclosed except with the written permission of MEMSIC Inc. (C) 2017
 *****************************************************************************/
 
/*
 * mmc3630x.h - Definitions for mmc3630x magnetic sensor chip.
 */
 
 
#ifndef __MMC3630x_H__
#define __MMC3630x_H__

#include <linux/ioctl.h>


#ifndef TRUE
	#define TRUE 		1
#endif
#define MMC3630x_DEVICE_ID	    0x09//0x0A

/* MMC3630x register address */
#define MMC3630X_REG_CTRL		0x07
#define MMC3630X_REG_BITS		0x08;//0x09
#define MMC3630X_REG_DATA		0x00
#define MMC3630X_REG_PRODUCTID		0x20//0x2F

/* MMC3630x control bit */
#define MMC3630X_CTRL_TM		0x01
#define MMC3630X_CTRL_CM		0x02
#define MMC3630X_CTRL_50HZ		0x00
#define MMC3630X_CTRL_25HZ		0x04
#define MMC3630X_CTRL_12HZ		0x08
#define MMC3630X_CTRL_SET  	     0x20;//  0x08
#define MMC3630X_CTRL_RESET      0x40;// 0x10
#define MMC3630X_CTRL_REFILL        0x80;//    0x20



#define MMC3630X_MAG_REG_ADDR_OTP         		   0x1B//	0x2A


#define MMC3630X_BITS_SLOW_16            0x00
#define MMC3630X_BITS_FAST_16            0x01
#define MMC3630X_BITS_14                 0x02

// conversion of magnetic data to uT units
// 32768 = 1Guass = 100 uT
// 100 / 32768 = 25 / 8192
// 65536 = 360Degree
// 360 / 65536 = 45 / 8192


//#define CONVERT_M_DIV			8192
#define CONVERT_M_DIV			1024000





#endif /* __MMC3630x_H__ */

