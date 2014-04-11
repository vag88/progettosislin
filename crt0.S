
	/*
	 * A stupid crt0.S for "freestanding" stuff on gnu/linux
	 *
	 * Copyright (C) 2011 CERN (www.cern.ch)
	 * Author: Alessandro Rubini
	 *
	 * Released according to the GNU LGPL, version 2.1 or any later version.
	 */
	.section .boot, "ax"
	.extern vag_main

       	/* inspired from uClib */
	
	/* Pop argc and place it in the first parameter-passing register. */
	popq %rdi 
	/* Place argv in the second parameter-passing register. */
	movq %rsp, %rsi
	/* Align the stack at a 16-byte boundary. */
	andq $~15, %rsp

	.end
