/*
 * TLS module
 *
 * Copyright (C) 2019 Asipto GmbH
 *
 * Permission to use, copy, modify, and distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
 * ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 * ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
 * OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 */


#ifndef _TLS_RAND_H_
#define _TLS_RAND_H_

#include <openssl/ssl.h>
#if OPENSSL_VERSION_NUMBER >= 0x10100000L

#include <openssl/rand.h>

const RAND_METHOD *RAND_ksr_krand_method(void);
const RAND_METHOD *RAND_ksr_fastrand_method(void);
const RAND_METHOD *RAND_ksr_cryptorand_method(void);

void ksr_cryptorand_seed_init();

#endif /* OPENSSL_VERSION_NUMBER >= 0x10100000L */
#endif