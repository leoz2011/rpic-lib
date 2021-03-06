/******************************************************************************
 *  Copyright (C) 2012 - 2013, Leonid Zolotarev
 *
 *  Licensed under the terms of the BSD license, see file COPYING
 *  for details.
 *
 *  Raspberry Pi Car Library
 *
 *  Header file for the rpic-lib
 *
 *****************************************************************************/

#ifndef __RPIC_LIB_H__
#define __RPIC_LIB_H__

#define RPI_CAR_VAL_STOP     1500
#define RPI_CAR_VAL_FWD_FAST 1700
#define RPI_CAR_VAL_BWD_FAST 1300
#define RPI_CAR_VAL_FORWARD  1600
#define RPI_CAR_VAL_BACKWARD 1400

void rpi_car_forward();
void rpi_car_backward();
void rpi_car_stop();
void rpi_car_left();
void rpi_car_right();
void rpi_car_deccelerate();
void rpi_car_accelerate();

int rpi_car_dev_open();
void rpi_car_dev_close(int dev);
char* rpi_car_dev_version();

#endif /* __RPIC_LIB_H__ */
