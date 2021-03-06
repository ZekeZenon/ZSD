#define SPACE 257
#define LETTER 258
#define NEWLINE 259
#define COMMENT 260
#define COLON 261
#define ANY 262
#define ZONESTR 263
#define STRING_ARG 264
#define VAR_SERVER 265
#define VAR_VERBOSITY 266
#define VAR_NUM_THREADS 267
#define VAR_PORT 268
#define VAR_OUTGOING_RANGE 269
#define VAR_INTERFACE 270
#define VAR_DO_IP4 271
#define VAR_DO_IP6 272
#define VAR_DO_UDP 273
#define VAR_DO_TCP 274
#define VAR_CHROOT 275
#define VAR_USERNAME 276
#define VAR_DIRECTORY 277
#define VAR_LOGFILE 278
#define VAR_PIDFILE 279
#define VAR_MSG_CACHE_SIZE 280
#define VAR_MSG_CACHE_SLABS 281
#define VAR_NUM_QUERIES_PER_THREAD 282
#define VAR_RRSET_CACHE_SIZE 283
#define VAR_RRSET_CACHE_SLABS 284
#define VAR_OUTGOING_NUM_TCP 285
#define VAR_INFRA_HOST_TTL 286
#define VAR_INFRA_LAME_TTL 287
#define VAR_INFRA_CACHE_SLABS 288
#define VAR_INFRA_CACHE_NUMHOSTS 289
#define VAR_INFRA_CACHE_LAME_SIZE 290
#define VAR_NAME 291
#define VAR_STUB_ZONE 292
#define VAR_STUB_HOST 293
#define VAR_STUB_ADDR 294
#define VAR_TARGET_FETCH_POLICY 295
#define VAR_HARDEN_SHORT_BUFSIZE 296
#define VAR_HARDEN_LARGE_QUERIES 297
#define VAR_FORWARD_ZONE 298
#define VAR_FORWARD_HOST 299
#define VAR_FORWARD_ADDR 300
#define VAR_DO_NOT_QUERY_ADDRESS 301
#define VAR_HIDE_IDENTITY 302
#define VAR_HIDE_VERSION 303
#define VAR_IDENTITY 304
#define VAR_VERSION 305
#define VAR_HARDEN_GLUE 306
#define VAR_MODULE_CONF 307
#define VAR_TRUST_ANCHOR_FILE 308
#define VAR_TRUST_ANCHOR 309
#define VAR_VAL_OVERRIDE_DATE 310
#define VAR_BOGUS_TTL 311
#define VAR_VAL_CLEAN_ADDITIONAL 312
#define VAR_VAL_PERMISSIVE_MODE 313
#define VAR_INCOMING_NUM_TCP 314
#define VAR_MSG_BUFFER_SIZE 315
#define VAR_KEY_CACHE_SIZE 316
#define VAR_KEY_CACHE_SLABS 317
#define VAR_TRUSTED_KEYS_FILE 318
#define VAR_VAL_NSEC3_KEYSIZE_ITERATIONS 319
#define VAR_USE_SYSLOG 320
#define VAR_OUTGOING_INTERFACE 321
#define VAR_ROOT_HINTS 322
#define VAR_DO_NOT_QUERY_LOCALHOST 323
#define VAR_CACHE_MAX_TTL 324
#define VAR_HARDEN_DNSSEC_STRIPPED 325
#define VAR_ACCESS_CONTROL 326
#define VAR_LOCAL_ZONE 327
#define VAR_LOCAL_DATA 328
#define VAR_INTERFACE_AUTOMATIC 329
#define VAR_STATISTICS_INTERVAL 330
#define VAR_DO_DAEMONIZE 331
#define VAR_USE_CAPS_FOR_ID 332
#define VAR_STATISTICS_CUMULATIVE 333
#define VAR_OUTGOING_PORT_PERMIT 334
#define VAR_OUTGOING_PORT_AVOID 335
#define VAR_DLV_ANCHOR_FILE 336
#define VAR_DLV_ANCHOR 337
#define VAR_NEG_CACHE_SIZE 338
#define VAR_HARDEN_REFERRAL_PATH 339
#define VAR_PRIVATE_ADDRESS 340
#define VAR_PRIVATE_DOMAIN 341
#define VAR_REMOTE_CONTROL 342
#define VAR_CONTROL_ENABLE 343
#define VAR_CONTROL_INTERFACE 344
#define VAR_CONTROL_PORT 345
#define VAR_SERVER_KEY_FILE 346
#define VAR_SERVER_CERT_FILE 347
#define VAR_CONTROL_KEY_FILE 348
#define VAR_CONTROL_CERT_FILE 349
#define VAR_EXTENDED_STATISTICS 350
#define VAR_LOCAL_DATA_PTR 351
#define VAR_JOSTLE_TIMEOUT 352
#define VAR_STUB_PRIME 353
#define VAR_UNWANTED_REPLY_THRESHOLD 354
#define VAR_LOG_TIME_ASCII 355
#define VAR_DOMAIN_INSECURE 356
#define VAR_PYTHON 357
#define VAR_PYTHON_SCRIPT 358
#define VAR_VAL_SIG_SKEW_MIN 359
#define VAR_VAL_SIG_SKEW_MAX 360
#define VAR_CACHE_MIN_TTL 361
#define VAR_VAL_LOG_LEVEL 362
#define VAR_AUTO_TRUST_ANCHOR_FILE 363
#define VAR_KEEP_MISSING 364
#define VAR_ADD_HOLDDOWN 365
#define VAR_DEL_HOLDDOWN 366
#define VAR_SO_RCVBUF 367
#define VAR_EDNS_BUFFER_SIZE 368
#define VAR_PREFETCH 369
#define VAR_PREFETCH_KEY 370
#define VAR_SO_SNDBUF 371
#define VAR_SO_REUSEPORT 372
#define VAR_HARDEN_BELOW_NXDOMAIN 373
#define VAR_IGNORE_CD_FLAG 374
#define VAR_LOG_QUERIES 375
#define VAR_TCP_UPSTREAM 376
#define VAR_SSL_UPSTREAM 377
#define VAR_SSL_SERVICE_KEY 378
#define VAR_SSL_SERVICE_PEM 379
#define VAR_SSL_PORT 380
#define VAR_FORWARD_FIRST 381
#define VAR_STUB_FIRST 382
#define VAR_MINIMAL_RESPONSES 383
#define VAR_RRSET_ROUNDROBIN 384
#define VAR_MAX_UDP_SIZE 385
#define VAR_DELAY_CLOSE 386
#ifdef YYSTYPE
#undef  YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#endif
#ifndef YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
typedef union {
	char*	str;
} YYSTYPE;
#endif /* !YYSTYPE_IS_DECLARED */
extern YYSTYPE yylval;
