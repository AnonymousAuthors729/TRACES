#include "kremlib.h"
#ifndef __Hacl_HMAC_SHA2_256_H
#define __Hacl_HMAC_SHA2_256_H

typedef uint8_t Hacl_Hash_Lib_Create_uint8_t;

typedef uint32_t Hacl_Hash_Lib_Create_uint32_t;

typedef uint64_t Hacl_Hash_Lib_Create_uint64_t;

typedef uint8_t Hacl_Hash_Lib_Create_uint8_ht;

typedef uint32_t Hacl_Hash_Lib_Create_uint32_ht;

typedef uint64_t Hacl_Hash_Lib_Create_uint64_ht;

typedef uint8_t *Hacl_Hash_Lib_Create_uint8_p;

typedef uint32_t *Hacl_Hash_Lib_Create_uint32_p;

typedef uint64_t *Hacl_Hash_Lib_Create_uint64_p;

typedef uint8_t *Hacl_Hash_Lib_LoadStore_uint8_p;

typedef uint8_t Hacl_Impl_SHA2_256_uint8_t;

typedef uint32_t Hacl_Impl_SHA2_256_uint32_t;

typedef uint64_t Hacl_Impl_SHA2_256_uint64_t;

typedef uint8_t Hacl_Impl_SHA2_256_uint8_ht;

typedef uint32_t Hacl_Impl_SHA2_256_uint32_ht;

typedef uint64_t Hacl_Impl_SHA2_256_uint64_ht;

typedef uint32_t *Hacl_Impl_SHA2_256_uint32_p;

typedef uint8_t *Hacl_Impl_SHA2_256_uint8_p;

typedef uint8_t Hacl_Impl_HMAC_SHA2_256_uint8_t;

typedef uint32_t Hacl_Impl_HMAC_SHA2_256_uint32_t;

typedef uint64_t Hacl_Impl_HMAC_SHA2_256_uint64_t;

typedef uint8_t Hacl_Impl_HMAC_SHA2_256_uint8_ht;

typedef uint32_t Hacl_Impl_HMAC_SHA2_256_uint32_ht;

typedef uint64_t Hacl_Impl_HMAC_SHA2_256_uint64_ht;

typedef uint32_t *Hacl_Impl_HMAC_SHA2_256_uint32_p;

typedef uint8_t *Hacl_Impl_HMAC_SHA2_256_uint8_p;

typedef uint8_t uint8_ht;

typedef uint32_t uint32_t;

typedef uint8_t *uint8_p;

void hmac_core(uint8_t *mac, uint8_t *key, uint8_t *data, uint32_t len);

void hmac(uint8_t *mac, uint8_t *key, uint32_t keylen, uint8_t *data, uint32_t datalen);
#endif /* INC_HACL_HMAC_SHA2_256_H_ */
