// This file has been automatically generated by gen_deployment.
// Do not make manual modifications there or they will be lost.

#ifndef __POK_KERNEL_GENERATED_DEPLOYMENT_H_
#define __POK_KERNEL_GENERATED_DEPLOYMENT_H_

#include <core/schedvalues.h>

#define POK_CONFIG_NEEDS_FUNC_GETCHAR 1
#define POK_CONFIG_NB_LOCKOBJECTS 1
#define POK_CONFIG_NB_PARTITIONS 1
#define POK_CONFIG_NB_PROCESSORS 1
#define POK_CONFIG_NB_THREADS 12
#define POK_CONFIG_PARTITIONS_NLOCKOBJECTS                                     \
  { 0 }
#define POK_CONFIG_PARTITIONS_NTHREADS                                         \
  { 10 }
#define POK_CONFIG_PARTITIONS_SIZE                                             \
  {133120 }
#define POK_CONFIG_PROCESSOR_AFFINITY                                          \
  { 1 }
#define POK_CONFIG_SCHEDULING_MAJOR_FRAME 53000000000
#define POK_CONFIG_SCHEDULING_NBSLOTS 4
#define POK_CONFIG_SCHEDULING_SLOTS                                            \
  { 2000000000, 40000000000, 1000000000, 10000000000 }
#define POK_CONFIG_SCHEDULING_SLOTS_ALLOCATION                                 \
  { 0, 1, 0, 1 }

#define POK_NEEDS_CONSOLE 1
#define POK_NEEDS_DEBUG 1
#define POK_NEEDS_LOCKOBJECTS 1
#define POK_NEEDS_SCHED_STATIC 1
#define POK_NEEDS_THREAD_SLEEP 1
#define POK_NEEDS_THREAD_SUSPEND 1
#define POK_NEEDS_TIME 1

#define POK_CONFIG_PARTITIONS_SCHEDULER \
    { MY_SCHED_PRIORITY }

#endif // __POK_KERNEL_GENERATED_DEPLOYMENT_H_
