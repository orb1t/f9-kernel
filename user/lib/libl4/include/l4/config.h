/* Automatically generated, don't edit */
/* Generated on: localhost */
/* At: Tue, 20 Aug 2013 05:11:46 +0000 */
/* Linux version 3.10.6-2-ARCH (tobias@testing-i686) (gcc version 4.8.1 20130725 (prerelease) (GCC) ) #1 SMP PREEMPT Tue Aug 13 10:20:52 CEST 2013 */

/* Codezero Microkernel Configurator */

/* Main architecture */
#define CONFIG_ARCH_ARM 1


/* ARM Architecture Configuration */

/* ARM Platform Type */
#define CONFIG_PLATFORM_PB926 1
#undef  CONFIG_PLATFORM_EB


/* ARM Processor Type */
#define CONFIG_CPU_ARM926 1



/* Generic Processor Properties */
#undef  CONFIG_ICACHE_DISABLE
#undef  CONFIG_DCACHE_DISABLE


/* Generic Kernel Properties */
#undef  CONFIG_PREEMPT_DISABLE
#undef  CONFIG_DEBUG_ACCOUNTING
#undef  CONFIG_DEBUG_SPINLOCKS
#define CONFIG_SCHED_TICKS 1000


/* Toolchain Prefix */
#define CONFIG_TOOLCHAIN_USERSPACE "arm-none-eabi-"
#define CONFIG_TOOLCHAIN_KERNEL "arm-none-eabi-"


/* Container Setup */
#define CONFIG_CAPABILITIES 1
#define CONFIG_CONTAINERS 1

/* Container 0 Parameters */

/* Container 0 Type */
#define CONFIG_CONT0_TYPE_BAREMETAL 1
#undef  CONFIG_CONT0_TYPE_POSIX
#undef  CONFIG_CONT0_TYPE_LINUX


/* Container 0 Options */
#define CONFIG_CONT0_OPT_NAME "ipc-demo"

/* Baremetal Project Type */
#undef  CONFIG_CONT0_BAREMETAL_PROJ_EMPTY
#undef  CONFIG_CONT0_BAREMETAL_PROJ_HELLO_WORLD
#undef  CONFIG_CONT0_BAREMETAL_PROJ_THREADS_DEMO
#undef  CONFIG_CONT0_BAREMETAL_PROJ_TEST_SUITE
#undef  CONFIG_CONT0_BAREMETAL_PROJ_UART_SERVICE
#undef  CONFIG_CONT0_BAREMETAL_PROJ_TIMER_SERVICE
#undef  CONFIG_CONT0_BAREMETAL_PROJ_KMI_SERVICE
#define CONFIG_CONT0_BAREMETAL_PROJ_MUTEX_DEMO 1
#undef  CONFIG_CONT0_BAREMETAL_PROJ_IPC_DEMO


/* Container 0 Pager Linker Parameters */
#define CONFIG_CONT0_PAGER_LMA 0x100000
#define CONFIG_CONT0_PAGER_VMA 0xa0000000


/* Container 0 Pager Physical Memory Regions (Capabilities) */
#define CONFIG_CONT0_PAGER_PHYSMEM_REGIONS 1
#define CONFIG_CONT0_PAGER_PHYS0_START 0x100000
#define CONFIG_CONT0_PAGER_PHYS0_END 0xe00000


/* Container 0 Pager Virtual Memory Regions (Capabilities) */
#define CONFIG_CONT0_PAGER_VIRTMEM_REGIONS 1
#define CONFIG_CONT0_PAGER_VIRT0_START 0xa0000000
#define CONFIG_CONT0_PAGER_VIRT0_END 0xb0000000


/* Container 0 Pager Capabilities */

/* Container 0 Thread Pool Capability */
#define CONFIG_CONT0_PAGER_CAP_THREADPOOL_USE 1
#define CONFIG_CONT0_PAGER_CAP_THREADPOOL_SIZE 64


/* Container 0 Space Pool Capability */
#define CONFIG_CONT0_PAGER_CAP_SPACEPOOL_USE 1
#define CONFIG_CONT0_PAGER_CAP_SPACEPOOL_SIZE 64


/* Container 0 Mutex Pool Capability */
#define CONFIG_CONT0_PAGER_CAP_MUTEXPOOL_USE 1
#define CONFIG_CONT0_PAGER_CAP_MUTEXPOOL_SIZE 100


/* Container 0 Map Pool Capability */
#define CONFIG_CONT0_PAGER_CAP_MAPPOOL_USE 1
#define CONFIG_CONT0_PAGER_CAP_MAPPOOL_SIZE 800


/* Container 0 IPC Capability */
#define CONFIG_CONT0_PAGER_CAP_IPC_USE 1
#define CONFIG_CONT0_PAGER_CAP_IPC_TARGET_CURRENT_CONTAINER 1
#undef  CONFIG_CONT0_PAGER_CAP_IPC_TARGET_CURRENT_PAGER_SPACE
#undef  CONFIG_CONT0_PAGER_CAP_IPC_TARGET_OTHER_CONTAINER
#undef  CONFIG_CONT0_PAGER_CAP_IPC_TARGET_OTHER_PAGER


/* Container 0 IRQ Control Capability */
#define CONFIG_CONT0_PAGER_CAP_IRQCTRL_USE 1


/* Container 0 Custom Capability 0 Parameters */
#undef  CONFIG_CONT0_PAGER_CAP_CUSTOM0_USE


/* Container 0 Custom Capability 1 Parameters */
#undef  CONFIG_CONT0_PAGER_CAP_CUSTOM1_USE


/* Container 0 Custom Capability 2 Parameters */
#undef  CONFIG_CONT0_PAGER_CAP_CUSTOM2_USE


/* Container 0 Custom Capability 3 Parameters */
#undef  CONFIG_CONT0_PAGER_CAP_CUSTOM3_USE



/* Container 0 Global Capabilities */

/* Container 0 IPC Capability */
#define CONFIG_CONT0_CAP_IPC_USE 1
#define CONFIG_CONT0_CAP_IPC_TARGET_CURRENT_CONTAINER 1
#undef  CONFIG_CONT0_CAP_IPC_TARGET_CURRENT_PAGER_SPACE
#undef  CONFIG_CONT0_CAP_IPC_TARGET_OTHER_CONTAINER
#undef  CONFIG_CONT0_CAP_IPC_TARGET_OTHER_PAGER


/* Container 0 Mutex Pool Capability */
#define CONFIG_CONT0_CAP_MUTEXPOOL_USE 1
#define CONFIG_CONT0_CAP_MUTEXPOOL_SIZE 100






/* Derived symbols */
#define CONFIG_CONT3_START_PC_ADDR 0xd0000000
#undef  CONFIG_DEBUG_PERFMON_KERNEL
#define CONFIG_CONT1_PAGER_LOAD_ADDR 0x1100000
#define CONFIG_CONT2_START_PC_ADDR 0xc0000000
#define CONFIG_CONT2_PAGER_VIRT_ADDR 0xc0000000
#define CONFIG_RAM_BASE_PLAT 0
#define CONFIG_CONT2_PAGER_LOAD_ADDR 0x2100000
#define CONFIG_CONT1_PAGER_VIRT_ADDR 0xb0000000
#define CONFIG_CONT3_PAGER_LOAD_ADDR 0x3100000
#define CONFIG_SUBARCH_V5 1
#undef  CONFIG_SUBARCH_V6
#define CONFIG_CONT0_PAGER_LOAD_ADDR 0x100000
#define CONFIG_CONT0_PAGER_VIRT_ADDR 0xa0000000
#define CONFIG_CONT3_PAGER_VIRT_ADDR 0xd0000000
#define CONFIG_CONT0_START_PC_ADDR 0xa0000000
#define CONFIG_CONT1_START_PC_ADDR 0xb0000000
/* That's all, folks! */
#define __ARCH__ arm
#define __PLATFORM__ pb926
#define __SUBARCH__ v5
#define __CPU__ arm926
