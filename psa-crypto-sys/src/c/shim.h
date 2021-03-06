// Copyright 2020 Contributors to the Parsec project.
// SPDX-License-Identifier: Apache-2.0

#include <psa/crypto.h>
#include <psa/crypto_se_driver.h>

const size_t shim_PSA_MAX_KEY_BITS = PSA_MAX_KEY_BITS;
const psa_key_bits_t shim_PSA_KEY_BITS_TOO_LARGE = PSA_KEY_BITS_TOO_LARGE;
const psa_key_type_t shim_PSA_KEY_TYPE_NONE = PSA_KEY_TYPE_NONE;
const psa_key_type_t shim_PSA_KEY_TYPE_VENDOR_FLAG = PSA_KEY_TYPE_VENDOR_FLAG;
const psa_key_type_t shim_PSA_KEY_TYPE_CATEGORY_MASK =
    PSA_KEY_TYPE_CATEGORY_MASK;
const psa_key_type_t shim_PSA_KEY_TYPE_CATEGORY_SYMMETRIC =
    PSA_KEY_TYPE_CATEGORY_SYMMETRIC;
const psa_key_type_t shim_PSA_KEY_TYPE_CATEGORY_RAW = PSA_KEY_TYPE_CATEGORY_RAW;
const psa_key_type_t shim_PSA_KEY_TYPE_CATEGORY_PUBLIC_KEY =
    PSA_KEY_TYPE_CATEGORY_PUBLIC_KEY;
const psa_key_type_t shim_PSA_KEY_TYPE_CATEGORY_KEY_PAIR =
    PSA_KEY_TYPE_CATEGORY_KEY_PAIR;
const psa_key_type_t shim_PSA_KEY_TYPE_CATEGORY_FLAG_PAIR =
    PSA_KEY_TYPE_CATEGORY_FLAG_PAIR;
const psa_key_type_t shim_PSA_KEY_TYPE_DSA_PUBLIC_KEY =
    PSA_KEY_TYPE_DSA_PUBLIC_KEY;
const psa_key_type_t shim_PSA_KEY_TYPE_ECC_PUBLIC_KEY_BASE =
    PSA_KEY_TYPE_ECC_PUBLIC_KEY_BASE;
const psa_key_type_t shim_PSA_KEY_TYPE_ECC_KEY_PAIR_BASE =
    PSA_KEY_TYPE_ECC_KEY_PAIR_BASE;
const psa_key_type_t shim_PSA_KEY_TYPE_ECC_CURVE_MASK =
    PSA_KEY_TYPE_ECC_CURVE_MASK;
const psa_algorithm_t shim_PSA_ALG_VENDOR_FLAG = PSA_ALG_VENDOR_FLAG;
const psa_algorithm_t shim_PSA_ALG_CATEGORY_MASK = PSA_ALG_CATEGORY_MASK;
const psa_algorithm_t shim_PSA_ALG_CATEGORY_HASH = PSA_ALG_CATEGORY_HASH;
const psa_algorithm_t shim_PSA_ALG_CATEGORY_MAC = PSA_ALG_CATEGORY_MAC;
const psa_algorithm_t shim_PSA_ALG_CATEGORY_CIPHER = PSA_ALG_CATEGORY_CIPHER;
const psa_algorithm_t shim_PSA_ALG_CATEGORY_AEAD = PSA_ALG_CATEGORY_AEAD;
const psa_algorithm_t shim_PSA_ALG_CATEGORY_SIGN = PSA_ALG_CATEGORY_SIGN;
const psa_algorithm_t shim_PSA_ALG_CATEGORY_ASYMMETRIC_ENCRYPTION =
    PSA_ALG_CATEGORY_ASYMMETRIC_ENCRYPTION;
const psa_algorithm_t shim_PSA_ALG_CATEGORY_KEY_AGREEMENT =
    PSA_ALG_CATEGORY_KEY_AGREEMENT;
const psa_algorithm_t shim_PSA_ALG_CATEGORY_KEY_DERIVATION =
    PSA_ALG_CATEGORY_KEY_DERIVATION;
const psa_algorithm_t shim_PSA_ALG_HASH_MASK = PSA_ALG_HASH_MASK;
const psa_algorithm_t shim_PSA_ALG_MAC_SUBCATEGORY_MASK =
    PSA_ALG_MAC_SUBCATEGORY_MASK;
const psa_algorithm_t shim_PSA_ALG_HMAC_BASE = PSA_ALG_HMAC_BASE;
const psa_algorithm_t shim_PSA_ALG_MAC_TRUNCATION_MASK =
    PSA_ALG_MAC_TRUNCATION_MASK;
const psa_algorithm_t shim_PSA_ALG_CIPHER_MAC_BASE = PSA_ALG_CIPHER_MAC_BASE;
const psa_algorithm_t shim_PSA_ALG_CIPHER_STREAM_FLAG =
    PSA_ALG_CIPHER_STREAM_FLAG;
const psa_algorithm_t shim_PSA_ALG_CIPHER_FROM_BLOCK_FLAG =
    PSA_ALG_CIPHER_FROM_BLOCK_FLAG;
const psa_algorithm_t shim_PSA_ALG_AEAD_TAG_LENGTH_MASK =
    PSA_ALG_AEAD_TAG_LENGTH_MASK;
const psa_algorithm_t shim_PSA_ALG_RSA_PKCS1V15_SIGN_BASE =
    PSA_ALG_RSA_PKCS1V15_SIGN_BASE;
const psa_algorithm_t shim_PSA_ALG_RSA_PSS_BASE = PSA_ALG_RSA_PSS_BASE;
const psa_algorithm_t shim_PSA_ALG_DSA_BASE = PSA_ALG_DSA_BASE;
const psa_algorithm_t shim_PSA_ALG_DETERMINISTIC_DSA_BASE =
    PSA_ALG_DETERMINISTIC_DSA_BASE;
const psa_algorithm_t shim_PSA_ALG_DSA_DETERMINISTIC_FLAG =
    PSA_ALG_DSA_DETERMINISTIC_FLAG;
const psa_algorithm_t shim_PSA_ALG_ECDSA_BASE = PSA_ALG_ECDSA_BASE;
const psa_algorithm_t shim_PSA_ALG_DETERMINISTIC_ECDSA_BASE =
    PSA_ALG_DETERMINISTIC_ECDSA_BASE;
const psa_algorithm_t shim_PSA_ALG_RSA_OAEP_BASE = PSA_ALG_RSA_OAEP_BASE;
const psa_algorithm_t shim_PSA_ALG_HKDF_BASE = PSA_ALG_HKDF_BASE;
const psa_algorithm_t shim_PSA_ALG_TLS12_PRF_BASE = PSA_ALG_TLS12_PRF_BASE;
const psa_algorithm_t shim_PSA_ALG_TLS12_PSK_TO_MS_BASE =
    PSA_ALG_TLS12_PSK_TO_MS_BASE;
const psa_algorithm_t shim_PSA_ALG_KEY_DERIVATION_MASK =
    PSA_ALG_KEY_DERIVATION_MASK;

psa_algorithm_t shim_get_key_algorithm(const psa_key_attributes_t *attributes);
psa_status_t shim_get_key_attributes(psa_key_handle_t key_handle, psa_key_attributes_t *attributes);
size_t shim_get_key_bits(const psa_key_attributes_t *attributes);
psa_key_id_t shim_get_key_id(const psa_key_attributes_t *attributes);
psa_key_lifetime_t shim_get_key_lifetime(const psa_key_attributes_t *attributes);
psa_key_type_t shim_get_key_type(const psa_key_attributes_t *attributes);
psa_key_usage_t shim_get_key_usage_flags(const psa_key_attributes_t *attributes);
psa_key_attributes_t shim_key_attributes_init(void);
psa_key_derivation_operation_t shim_key_derivation_operation_init(void);

void shim_set_key_algorithm(psa_key_attributes_t *attributes, psa_algorithm_t alg);
void shim_set_key_bits(psa_key_attributes_t *attributes, size_t bits);
void shim_set_key_id(psa_key_attributes_t *attributes, psa_key_id_t id);
void shim_set_key_lifetime(psa_key_attributes_t *attributes, psa_key_lifetime_t lifetime);
void shim_set_key_type(psa_key_attributes_t *attributes, psa_key_type_t type_);
void shim_set_key_usage_flags(psa_key_attributes_t *attributes, psa_key_usage_t usage_flags);

int shim_PSA_ALG_IS_HASH(psa_algorithm_t alg);
int shim_PSA_ALG_IS_MAC(psa_algorithm_t alg);
int shim_PSA_ALG_IS_HMAC(psa_algorithm_t alg);
int shim_PSA_ALG_IS_BLOCK_CIPHER_MAC(psa_algorithm_t alg);
int shim_PSA_ALG_IS_CIPHER(psa_algorithm_t alg);
int shim_PSA_ALG_IS_AEAD(psa_algorithm_t alg);
int shim_PSA_ALG_IS_SIGN(psa_algorithm_t alg);
int shim_PSA_ALG_IS_ASYMMETRIC_ENCRYPTION(psa_algorithm_t alg);
int shim_PSA_ALG_IS_RSA_OAEP(psa_algorithm_t alg);
int shim_PSA_ALG_IS_KEY_AGREEMENT(psa_algorithm_t alg);
int shim_PSA_ALG_IS_RAW_KEY_AGREEMENT(psa_algorithm_t alg);
int shim_PSA_ALG_IS_FFDH(psa_algorithm_t alg);
int shim_PSA_ALG_IS_ECDH(psa_algorithm_t alg);
int shim_PSA_ALG_IS_KEY_DERIVATION(psa_algorithm_t alg);
int shim_PSA_ALG_IS_RSA_PKCS1V15_SIGN(psa_algorithm_t alg);
int shim_PSA_ALG_IS_RSA_PSS(psa_algorithm_t alg);
int shim_PSA_ALG_IS_ECDSA(psa_algorithm_t alg);
int shim_PSA_ALG_IS_DETERMINISTIC_ECDSA(psa_algorithm_t alg);
int shim_PSA_ALG_IS_HKDF(psa_algorithm_t alg);
int shim_PSA_ALG_IS_TLS12_PRF(psa_algorithm_t alg);
int shim_PSA_ALG_IS_TLS12_PSK_TO_MS(psa_algorithm_t alg);
psa_algorithm_t shim_PSA_ALG_RSA_OAEP(psa_algorithm_t hash_alg);
psa_algorithm_t shim_PSA_ALG_RSA_PKCS1V15_SIGN(psa_algorithm_t hash_alg);
psa_algorithm_t shim_PSA_ALG_RSA_PSS(psa_algorithm_t hash_alg);
psa_algorithm_t shim_PSA_ALG_ECDSA(psa_algorithm_t hash_alg);
psa_algorithm_t shim_PSA_ALG_DETERMINISTIC_ECDSA(psa_algorithm_t hash_alg);
psa_algorithm_t shim_PSA_ALG_HMAC(psa_algorithm_t hash_alg);
psa_algorithm_t shim_PSA_ALG_SIGN_GET_HASH(psa_algorithm_t sign_alg);
psa_algorithm_t shim_PSA_ALG_RSA_OAEP_GET_HASH(psa_algorithm_t rsa_oaep_alg);
psa_algorithm_t shim_PSA_ALG_HMAC_GET_HASH(psa_algorithm_t hmac_alg);
psa_algorithm_t shim_PSA_ALG_HKDF_GET_HASH(psa_algorithm_t hkdf_alg);
psa_algorithm_t shim_PSA_ALG_TLS12_PRF_GET_HASH(psa_algorithm_t tls12_prf_alg);
psa_algorithm_t shim_PSA_ALG_TLS12_PSK_TO_MS_GET_HASH(psa_algorithm_t tls12_psk_to_ms_alg);
psa_algorithm_t shim_PSA_ALG_KEY_AGREEMENT_GET_BASE(psa_algorithm_t alg);
psa_algorithm_t shim_PSA_ALG_KEY_AGREEMENT_GET_KDF(psa_algorithm_t alg);
psa_algorithm_t shim_PSA_ALG_TRUNCATED_MAC(psa_algorithm_t mac_alg, size_t mac_length);
psa_algorithm_t shim_PSA_ALG_FULL_LENGTH_MAC(psa_algorithm_t mac_alg);
psa_algorithm_t shim_PSA_ALG_AEAD_WITH_DEFAULT_LENGTH_TAG(psa_algorithm_t aead_alg);
psa_algorithm_t shim_PSA_ALG_AEAD_WITH_SHORTENED_TAG(psa_algorithm_t aead_alg, size_t tag_length);
psa_algorithm_t shim_PSA_ALG_HKDF(psa_algorithm_t hash_alg);
psa_algorithm_t shim_PSA_ALG_TLS12_PRF(psa_algorithm_t hash_alg);
psa_algorithm_t shim_PSA_ALG_TLS12_PSK_TO_MS(psa_algorithm_t hash_alg);
psa_algorithm_t shim_PSA_ALG_KEY_AGREEMENT(psa_algorithm_t raw_key_agreement, psa_algorithm_t key_derivation);
int shim_PSA_KEY_TYPE_IS_ECC_KEY_PAIR(psa_key_type_t key_type);
int shim_PSA_KEY_TYPE_IS_ECC_PUBLIC_KEY(psa_key_type_t key_type);
int shim_PSA_KEY_TYPE_IS_DH_PUBLIC_KEY(psa_key_type_t key_type);
int shim_PSA_KEY_TYPE_IS_DH_KEY_PAIR(psa_key_type_t key_type);
psa_ecc_curve_t shim_PSA_KEY_TYPE_GET_CURVE(psa_key_type_t key_type);
psa_dh_group_t shim_PSA_KEY_TYPE_GET_GROUP(psa_key_type_t key_type);
psa_key_type_t shim_PSA_KEY_TYPE_ECC_KEY_PAIR(psa_ecc_curve_t curve);
psa_key_type_t shim_PSA_KEY_TYPE_ECC_PUBLIC_KEY(psa_ecc_curve_t curve);
psa_key_type_t shim_PSA_KEY_TYPE_DH_KEY_PAIR(psa_dh_group_t group);
psa_key_type_t shim_PSA_KEY_TYPE_DH_PUBLIC_KEY(psa_dh_group_t group);
psa_key_type_t shim_PSA_KEY_TYPE_PUBLIC_KEY_OF_KEY_PAIR(psa_key_type_t key_type);
size_t shim_PSA_SIGN_OUTPUT_SIZE(psa_key_type_t key_type, size_t key_bits, psa_algorithm_t alg);
size_t shim_PSA_ASYMMETRIC_ENCRYPT_OUTPUT_SIZE(psa_key_type_t key_type, size_t key_bits, psa_algorithm_t alg);
size_t shim_PSA_ASYMMETRIC_DECRYPT_OUTPUT_SIZE(psa_key_type_t key_type, size_t key_bits, psa_algorithm_t alg);
size_t shim_PSA_KEY_EXPORT_MAX_SIZE(psa_key_type_t key_type, size_t key_bits);
size_t shim_PSA_HASH_LENGTH(psa_algorithm_t alg);
size_t shim_PSA_MAC_LENGTH(psa_key_type_t key_type, size_t key_bits, psa_algorithm_t alg);
size_t shim_PSA_MAC_TRUNCATED_LENGTH(psa_algorithm_t alg);
size_t shim_PSA_AEAD_TAG_LENGTH(/*psa_key_type_t key_type, size_t key_bits, Spec states these are required*/psa_algorithm_t alg);
size_t shim_PSA_AEAD_ENCRYPT_OUTPUT_SIZE(psa_algorithm_t aead_alg, size_t plaintext_bytes);
size_t shim_PSA_AEAD_DECRYPT_OUTPUT_SIZE(psa_algorithm_t aead_alg, size_t ciphertext_bytes);
