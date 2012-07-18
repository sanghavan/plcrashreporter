/*
 * Author: Landon Fuller <landonf@plausible.coop>
 *
 * Copyright (c) 2012 Plausible Labs Cooperative, Inc.
 * All rights reserved.
 *
 * Permission is hereby granted, free of charge, to any person
 * obtaining a copy of this software and associated documentation
 * files (the "Software"), to deal in the Software without
 * restriction, including without limitation the rights to use,
 * copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following
 * conditions:
 *
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
 * OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
 * HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
 * WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
 * OTHER DEALINGS IN THE SOFTWARE.
 */

#if __x86_64__

/* sizeof(struct ucontext) */
#define PL_UCONTEXT_SIZE 56

/* sizeof(struct mcontext) */
#define PL_MCONTEXT_SIZE 712

#elif __i386__

/* sizeof(struct ucontext) */
#define PL_UCONTEXT_SIZE 32

/* sizeof(struct mcontext) */
#define PL_MCONTEXT_SIZE 600

#elif defined(__arm__)

/* sizeof(struct ucontext) */
#define PL_UCONTEXT_SIZE 32

/* sizeof(struct mcontext) */
#define PL_MCONTEXT_SIZE 340

#else

#error Unsupported Platform

#endif