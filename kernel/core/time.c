/*
 *                               POK header
 *
 * The following file is a part of the POK project. Any modification should
 * be made according to the POK licence. You CANNOT use this file or a part
 * of a file for your own project.
 *
 * For more information on the POK licence, please see our LICENCE FILE
 *
 * Please follow the coding guidelines described in doc/CODING_GUIDELINES
 *
 *                                      Copyright (c) 2007-2020 POK team
 */

/**
 * \file    core/time.c
 * \author  François Goudal
 * \author  Julien Delange
 * \date    2008-2009
 */

#include <bsp.h>
#include <errno.h>
#include <types.h>

#include <core/partition.h>
#include <core/sched.h>
#include <core/thread.h>
#include <core/time.h>

/**
 * A global variable that contains the number
 * of elapsed ticks since the beginning
 */
uint64_t pok_tick_counter = 0;

/**
 * \brief Init the timing service.
 *
 * Call BSP-defined function to initialize
 * the timing service.
 */
void pok_time_init(void) {
  pok_tick_counter = 0;
  pok_bsp_time_init();
}

#ifdef POK_NEEDS_GETTICK
/**
 * Get the current ticks value, store it in
 * \a clk_val
 * Returns POK_ERRNO_OK
 * Need the GETTICK service (POK_NEEDS_GETTICKS maccro)
 */
pok_ret_t pok_gettick_by_pointer(uint64_t *clk_val) {
  *clk_val = POK_GETTICK();
  return POK_ERRNO_OK;
}
#endif
