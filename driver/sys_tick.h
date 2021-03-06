/*
 * Open-BLDC - Open BrushLess DC Motor Controller
 * Copyright (C) 2010-2013 by Piotr Esden-Tempski <piotr@esden.net>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef SYS_TICK_H
#define SYS_TICK_H

#include <stdint.h>

/**
 * Sys Tick based soft timer callback type
 *
 * @param id timer slot the callback got called from.
 */
typedef void (*sys_tick_timer_callback_t) (int id);

void sys_tick_init(void);
uint32_t sys_tick_get_timer(void);
bool sys_tick_check_timer(uint32_t timer, uint32_t time);
int sys_tick_timer_register(sys_tick_timer_callback_t callback, uint32_t time);
void sys_tick_timer_unregister(int id);
void sys_tick_timer_update(int id, uint32_t time);

#endif /* SYS_TICK_H */
