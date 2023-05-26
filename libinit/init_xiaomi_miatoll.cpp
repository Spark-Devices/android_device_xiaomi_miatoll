/*
 * Copyright (C) 2021-2022 The LineageOS Project
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <libinit_dalvik_heap.h>
#include <libinit_variant.h>

#include "vendor_init.h"

static const variant_info_t curtanain_info = {
    .hwc_value = "India",

    .brand = "Redmi",
    .device = "curtana",
    .mod_device = "curtana_in1_global",
    .model = "Redmi Note 10 Lite",
    .build_fingerprint = "Redmi/curtana_in1/curtana:12/RKQ1.211019.001/V13.0.1.0.SJWINRF:user/release-keys",

    .nfc = false,
};

static const variant_info_t curtana_info = {
    .hwc_value = "",

    .brand = "Redmi",
    .device = "curtana",
    .mod_device = "curtana_global",
    .model = "Redmi Note 9S",
    .build_fingerprint = "Redmi/curtana_global/curtana:12/RKQ1.211019.001/V13.0.2.0.SJWMIXM:user/release-keys",

    .nfc = false,
};

static const variant_info_t excalibur_info = {
    .hwc_value = "",

    .brand = "Redmi",
    .device = "excalibur",
    .mod_device = "excalibur_in_global",
    .model = "Redmi Note 9 Pro Max",
    .build_fingerprint = "Redmi/excalibur_in/excalibur:12/RKQ1.211019.001/V13.0.2.0.SJXINXM:user/release-keys",

    .nfc = false,
};

static const variant_info_t gram_info = {
    .hwc_value = "",

    .brand = "POCO",
    .device = "gram",
    .mod_device = "gram_in_global",
    .model = "POCO M2 Pro",
    .build_fingerprint = "POCO/gram_in/gram:12/RKQ1.211019.001/V13.0.2.0.SJPINXM:user/release-keys",

    .nfc = false,
};

static const variant_info_t joyeuse_info = {
    .hwc_value = "",

    .brand = "Redmi",
    .device = "joyeuse",
    .mod_device = "joyeuse_global",
    .model = "Redmi Note 9 Pro",
    .build_fingerprint = "Redmi/joyeuse_global/joyeuse:12/RKQ1.211019.001/V13.0.4.0.SJZMIXM:user/release-keys",

    .nfc = true,
};

static const std::vector<variant_info_t> variants = {
    curtanain_info,
    curtana_info,
    excalibur_info,
    gram_info,
    joyeuse_info,
};

void vendor_load_properties() {
    search_variant(variants);
    set_dalvik_heap();
}