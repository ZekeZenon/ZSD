/*-
 * Copyright (c) 2010-2011 Juniper Networks, Inc.
 * All rights reserved.
 *
 * This software was developed by Robert N. M. Watson under contract
 * to Juniper Networks, Inc.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE AUTHOR OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 *
 * $FreeBSD$
 */

#ifndef _NETINET_IN_RSS_H_
#define	_NETINET_IN_RSS_H_

#include <netinet/in.h>		/* in_addr_t */

/*
 * Supported RSS hash functions.
 */
#define	RSS_HASH_NAIVE		0x00000001	/* Poor but fast hash. */
#define	RSS_HASH_TOEPLITZ	0x00000002	/* Required by RSS. */
#define	RSS_HASH_CRC32		0x00000004	/* Future; some NICs do it. */

#define	RSS_HASH_MASK		(RSS_HASH_NAIVE | RSS_HASH_TOEPLITZ)

/*
 * Instances of struct inpcbinfo declare an RSS hash type indicating what
 * header fields are covered.
 */
#define	RSS_HASHFIELDS_NONE		0
#define	RSS_HASHFIELDS_4TUPLE		1
#define	RSS_HASHFIELDS_2TUPLE		2

/*
 * Compile-time limits on the size of the indirection table.
 */
#define	RSS_MAXBITS	7
#define	RSS_TABLE_MAXLEN	(1 << RSS_MAXBITS)

/*
 * Maximum key size used throughout.  It's OK for hardware to use only the
 * first 16 bytes, which is all that's required for IPv4.
 */
#define	RSS_KEYSIZE	40

/*
 * Device driver interfaces to query RSS properties that must be programmed
 * into hardware.
 */
u_int	rss_getbits(void);
u_int	rss_getbucket(u_int hash);
u_int	rss_getcpu(u_int bucket);
void	rss_getkey(uint8_t *key);
u_int	rss_gethashalgo(void);
u_int	rss_getnumbuckets(void);
u_int	rss_getnumcpus(void);

/*
 * Network stack interface to generate a hash for a protocol tuple.
 */
uint32_t	rss_hash_ip4_4tuple(struct in_addr src, u_short srcport,
		    struct in_addr dst, u_short dstport);
uint32_t	rss_hash_ip4_2tuple(struct in_addr src, struct in_addr dst);
uint32_t	rss_hash_ip6_4tuple(struct in6_addr src, u_short srcport,
		    struct in6_addr dst, u_short dstport);
uint32_t	rss_hash_ip6_2tuple(struct in6_addr src,
		    struct in6_addr dst);

/*
 * Network stack interface to query desired CPU affinity of a packet.
 */
struct mbuf	*rss_m2cpuid(struct mbuf *m, uintptr_t source, u_int *cpuid);
u_int		rss_hash2cpuid(uint32_t hash_val, uint32_t hash_type);
int		rss_hash2bucket(uint32_t hash_val, uint32_t hash_type,
		uint32_t *bucket_id);
int		rss_m2bucket(struct mbuf *m, uint32_t *bucket_id);

#endif /* !_NETINET_IN_RSS_H_ */
