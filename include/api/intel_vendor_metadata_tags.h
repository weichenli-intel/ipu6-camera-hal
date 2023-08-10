/*
 * Copyright (C) 2012 The Android Open Source Project
 * Copyright (C) 2021-2023 Intel Corporation
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/**
 * ! Do not edit this file directly !
 *
 * Generated automatically from vendor_metadata_tags.mako
 */

/**
 * Top level hierarchy definitions for intel camera metadata.
 * Contains only one sections, new entry must be added before
 * INTEL_VENDOR_CAMERA_SECTION_END to maintain existing enumerations.
 */
#define INTEL_VENDOR_CAMERA_SECTION 0x8004
typedef enum vendor_metadata_section {
    INTEL_VENDOR_CAMERA = INTEL_VENDOR_CAMERA_SECTION,
    INTEL_VENDOR_CAMERA_SECTION_END
} vendor_metadata_section_t;
#define INTEL_VENDOR_SECTION_COUNT (INTEL_VENDOR_CAMERA_SECTION_END - INTEL_VENDOR_CAMERA_SECTION)

/**
 * Hierarchy positions in enum space.
 */
typedef enum vendor_metadata_section_start {
    INTEL_VENDOR_CAMERA_START      = uint32_t(INTEL_VENDOR_CAMERA              << 16),
} vendor_metadata_section_start_t;

/**
 * Main enum for defining camera vendor metadata tags.  New entries must always go
 * before the section _END tag to preserve existing enumeration values.  In
 * addition, the name and type of the tag needs to be added to
 * src/metadata/vendor_metadata_tag_info.c
 */
typedef enum vendor_metadata_tag {
    INTEL_VENDOR_CAMERA_CALLBACK_RGBS =               // enum         | public
            INTEL_VENDOR_CAMERA_START,
    INTEL_VENDOR_CAMERA_RGBS_GRID_SIZE,               // int32[]      | public
    INTEL_VENDOR_CAMERA_SHADING_CORRECTION,           // enum         | public
    INTEL_VENDOR_CAMERA_RGBS_STATS_BLOCKS,            // byte[]       | public
    INTEL_VENDOR_CAMERA_CALLBACK_TM_CURVE,            // enum         | public
    INTEL_VENDOR_CAMERA_TONE_MAP_CURVE,               // float[]      | public
    INTEL_VENDOR_CAMERA_POWER_MODE,                   // enum         | public
// LEVEL0_ICBM_S
    INTEL_VENDOR_CAMERA_IC_CAPS,                      // int32        | public
// LEVEL0_ICBM_E
// LEVEL0_ICBM_S
    INTEL_VENDOR_CAMERA_IC_PEACE_FEATURES,            // int32[]      | public
// LEVEL0_ICBM_E
// LEVEL0_ICBM_S
    INTEL_VENDOR_CAMERA_IC_ECC_MODE,                  // enum         | public
// LEVEL0_ICBM_E
// LEVEL0_ICBM_S
    INTEL_VENDOR_CAMERA_IC_BC_MODE,                   // enum         | public
// LEVEL0_ICBM_E
// LEVEL0_ICBM_S
    INTEL_VENDOR_CAMERA_IC_BR_PARAMETERS,             // int32[]      | public
// LEVEL0_ICBM_E
// LEVEL0_ICBM_S
    INTEL_VENDOR_CAMERA_IC_UF_MODE,                   // enum         | public
// LEVEL0_ICBM_E
    INTEL_VENDOR_CAMERA_TOTAL_EXPOSURE_TARGET,        // int64        | public
    INTEL_VENDOR_CAMERA_TOTAL_EXPOSURE_TARGET_RANGE,  // int64[]      | public
    INTEL_VENDOR_CAMERA_RAW_DATA_OUTPUT,              // enum         | public
    INTEL_VENDOR_CAMERA_HDR_RATIO,                    // float        | public
    INTEL_VENDOR_CAMERA_END,
} vendor_metadata_tag_t;

/**
 * Enumeration definitions for the various entries that need them
 */

// INTEL_VENDOR_CAMERA_CALLBACK_RGBS
typedef enum vendor_metadata_enum_intel_vendor_camera_callback_rgbs {
    INTEL_VENDOR_CAMERA_CALLBACK_RGBS_FALSE,
    INTEL_VENDOR_CAMERA_CALLBACK_RGBS_TRUE,
} vendor_metadata_enum_intel_vendor_camera_callback_rgbs_t;

// INTEL_VENDOR_CAMERA_SHADING_CORRECTION
typedef enum vendor_metadata_enum_intel_vendor_camera_shading_correction {
    INTEL_VENDOR_CAMERA_SHADING_CORRECTION_FALSE,
    INTEL_VENDOR_CAMERA_SHADING_CORRECTION_TRUE,
} vendor_metadata_enum_intel_vendor_camera_shading_correction_t;

// INTEL_VENDOR_CAMERA_CALLBACK_TM_CURVE
typedef enum vendor_metadata_enum_intel_vendor_camera_callback_tm_curve {
    INTEL_VENDOR_CAMERA_CALLBACK_TM_CURVE_FALSE,
    INTEL_VENDOR_CAMERA_CALLBACK_TM_CURVE_TRUE,
} vendor_metadata_enum_intel_vendor_camera_callback_tm_curve_t;

// INTEL_VENDOR_CAMERA_POWER_MODE
typedef enum vendor_metadata_enum_intel_vendor_camera_power_mode {
    INTEL_VENDOR_CAMERA_POWER_MODE_LOW_POWER,
    INTEL_VENDOR_CAMERA_POWER_MODE_HIGH_QUALITY,
} vendor_metadata_enum_intel_vendor_camera_power_mode_t;

// LEVEL0_ICBM_S
// INTEL_VENDOR_CAMERA_IC_ECC_MODE
typedef enum vendor_metadata_enum_intel_vendor_camera_ic_ecc_mode {
    INTEL_VENDOR_CAMERA_IC_ECC_MODE_OFF,
    INTEL_VENDOR_CAMERA_IC_ECC_MODE_ON,
} vendor_metadata_enum_intel_vendor_camera_ic_ecc_mode_t;

// LEVEL0_ICBM_E
// LEVEL0_ICBM_S
// INTEL_VENDOR_CAMERA_IC_BC_MODE
typedef enum vendor_metadata_enum_intel_vendor_camera_ic_bc_mode {
    INTEL_VENDOR_CAMERA_IC_BC_MODE_OFF,
    INTEL_VENDOR_CAMERA_IC_BC_MODE_BLUR,
    INTEL_VENDOR_CAMERA_IC_BC_MODE_REPLACEMENT,
} vendor_metadata_enum_intel_vendor_camera_ic_bc_mode_t;

// LEVEL0_ICBM_E
// LEVEL0_ICBM_S
// INTEL_VENDOR_CAMERA_IC_UF_MODE
typedef enum vendor_metadata_enum_intel_vendor_camera_ic_uf_mode {
    INTEL_VENDOR_CAMERA_IC_UF_MODE_OFF,
    INTEL_VENDOR_CAMERA_IC_UF_MODE_AUTO,
} vendor_metadata_enum_intel_vendor_camera_ic_uf_mode_t;

// LEVEL0_ICBM_E
// INTEL_VENDOR_CAMERA_RAW_DATA_OUTPUT
typedef enum vendor_metadata_enum_intel_vendor_camera_raw_data_output {
    INTEL_VENDOR_CAMERA_RAW_DATA_OUTPUT_OFF,
    INTEL_VENDOR_CAMERA_RAW_DATA_OUTPUT_ON,
} vendor_metadata_enum_intel_vendor_camera_raw_data_output_t;

