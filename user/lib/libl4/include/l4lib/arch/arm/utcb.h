/*
 * Copyright (C) 2009 Bahadir Bilgehan Balban
 */
#ifndef __ARM_UTCB_H__
#define __ARM_UTCB_H__

/* Functions to read/write utcb registers */
static inline unsigned int read_mr(int offset)
{
	unsigned int result;

	switch(offset) {
		case 0:
			__asm__ __volatile__ ("str r4, %[output]\n": [output] "=m" (result));
			break;
		case 1:
			__asm__ __volatile__ ("str r5, %[output]\n": [output] "=m" (result));
			break;
		case 2:
			__asm__ __volatile__ ("str r6, %[output]\n": [output] "=m" (result));
			break;
		case 3:
			__asm__ __volatile__ ("str r7, %[output]\n": [output] "=m" (result));
			break;
		case 4:
			__asm__ __volatile__ ("str r8, %[output]\n": [output] "=m" (result));
			break;
		case 5:
			__asm__ __volatile__ ("str r9, %[output]\n": [output] "=m" (result));
			break;
		case 6:
			__asm__ __volatile__ ("str r10, %[output]\n": [output] "=m" (result));
			break;
		case 7:
			__asm__ __volatile__ ("str r11, %[output]\n": [output] "=m" (result));
			break;
		default:
			// TODO: rest MRs
			;
	}

	return result;
}

static inline void write_mr(unsigned int offset, unsigned int val)
{
	switch(offset) {
		case 0:
			__asm__ __volatile__ ("ldr r4, %0\n":: "m" (val));
			break;
		case 1:
			__asm__ __volatile__ ("ldr r5, %0\n":: "m" (val));
			break;
		case 2:
			__asm__ __volatile__ ("ldr r6, %0\n":: "m" (val));
			break;
		case 3:
			__asm__ __volatile__ ("ldr r7, %0\n":: "m" (val));
			break;
		case 4:
			__asm__ __volatile__ ("ldr r8, %0\n":: "m" (val));
			break;
		case 5:
			__asm__ __volatile__ ("ldr r9, %0\n":: "m" (val));
			break;
		case 6:
			__asm__ __volatile__ ("ldr r10, %0\n":: "m" (val));
			break;
		case 7:
			__asm__ __volatile__ ("ldr r11, %0\n":: "m" (val));
			break;
		default:
			// TODO: rest MRs
			;
	}
}

#endif /* __ARM_UTCB_H__ */
