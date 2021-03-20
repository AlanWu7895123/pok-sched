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
 *                                      Copyright (c) 2007-2021 POK team
 */

/**
 * \file libpok/include/core/shutdown.h
 * \brief This file declares a shutdown function.
 * \author Romain Guilloteau
 */

#ifdef POK_NEEDS_SHUTDOWN

#ifndef __LIBPOK_SHUTDOWN_H__
#define __LIBPOK_SHUTDOWN_H__

/**
 * Function that performs a shutdown in a virtual environment.
 * This method is mainly used in debug purposes.
 */

__attribute__((noreturn)) void pok_shutdown(void);

#endif /* __LIBPOK_SHUTDOWN_H__ */
#endif /* POK_NEEDS_SHUTDOWN */
