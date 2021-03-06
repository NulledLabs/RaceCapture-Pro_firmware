/*
 * Race Capture Firmware
 *
 * Copyright (C) 2016 Autosport Labs
 *
 * This file is part of the Race Capture firmware suite
 *
 * This is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *
 * See the GNU General Public License for more details. You should
 * have received a copy of the GNU General Public License along with
 * this code. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef _BYTESWAP_H_
#define _BYTESWAP_H_

#include "cpp_guard.h"

#include <stdint.h>

CPP_GUARD_BEGIN

//! Byte swap unsigned short
uint16_t swap_uint16( uint16_t val );

//! Byte swap short
int16_t swap_int16( int16_t val );

//! Byte swap unsigned int
uint32_t swap_uint32( uint32_t val );

//! Byte swap int
int32_t swap_int32( int32_t val );


CPP_GUARD_END

#endif /* _BYTESWAP_H_ */
