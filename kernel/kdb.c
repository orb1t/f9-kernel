/* Copyright (c) 2013 The F9 Microkernel Project. All rights reserved.
 * Use of this source code is governed by a BSD-style license that can be
 * found in the LICENSE file.
 */

#include <types.h>
#include <kdb.h>
#include <config.h>
#include <debug.h>

#ifdef CONFIG_KDB

typedef void (*kdb_function_t)();

struct kdb_t {
	char option;
	char *name;
	char *menuentry;
	kdb_function_t function;
};

extern void kdb_dump_events();
extern void kdb_dump_ktable();
extern void kdb_show_ktimer();
extern void kdb_dump_softirq();
extern void kdb_dump_threads();
extern void kdb_dump_mempool();
extern void kdb_dump_as();
extern void kdb_show_tickless_verify();

struct kdb_t kdb_functions[] =
{
	{
		.option = 'K',
		.name = "KTABLES",
		.menuentry = "print kernel tables",
		.function = kdb_dump_ktable
	},
	{
		.option = 'e',
		.name = "KTIMER",
		.menuentry = "dump ktimer events",
		.function = kdb_dump_events
	},
	{
		.option = 'n',
		.name = "NOW",
		.menuentry = "show timer (now)",
		.function = kdb_show_ktimer
	},
	{
		.option = 's',
		.name = "SOFTIRQ",
		.menuentry = "show softirqs",
		.function = kdb_dump_softirq
	},
	{
		.option = 't',
		.name = "THREADS",
		.menuentry = "dump threads",
		.function = kdb_dump_threads
	},
	{
		.option = 'm',
		.name = "MEMPOOLS",
		.menuentry = "dump memory pools",
		.function = kdb_dump_mempool
	},
	{
		.option = 'a',
		.name = "AS",
		.menuentry = "dump address spaces",
		.function = kdb_dump_as
	},
	{
		.option = 'v',
		.name = "TICKLESS VERIFY",
		.menuentry = "show tickless scheduling stat",
		.function = kdb_show_tickless_verify
	},
	/* Insert KDB functions here */
};

static void kdb_print_menu()
{
	int i;

	dbg_printf(DL_KDB, "commands: \n");
	for (i = 0; i < (sizeof(kdb_functions) / sizeof(struct kdb_t)); ++i) {
		dbg_printf(DL_KDB, "%c: %s\n",
			kdb_functions[i].option, kdb_functions[i].menuentry);
	}
}


int kdb_handler(char c)
{
	int i;

	dbg_printf(DL_KDB, "\n\n## KDB ##\n");
	for (i = 0; i < (sizeof(kdb_functions) / sizeof(struct kdb_t)); ++i) {
		if (c == kdb_functions[i].option) {
			dbg_printf(DL_KDB, "-------%s------\n", kdb_functions[i].name);
			kdb_functions[i].function();
			goto ok;
		}
	}

	if (c == '?') {
		kdb_print_menu();
		goto ok;
	}

	return 1;

ok:
	dbg_printf(DL_KDB, "----------------\n");
	return 0;
}

int kdb_dump_error()
{
	int i = 0;

	for (i = 0; i < (sizeof(kdb_functions) / sizeof(struct kdb_t)); ++i) {
		dbg_printf(DL_KDB, "-------%s------\n", kdb_functions[i].name);
		kdb_functions[i].function();
	}

	return 0;
}

#endif
