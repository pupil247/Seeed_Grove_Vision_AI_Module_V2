/*
 * Copyright (c) 2025 EdgeImpulse Inc.
 *
 * Generated by Edge Impulse and licensed under the applicable Edge Impulse
 * Terms of Service. Community and Professional Terms of Service
 * (https://edgeimpulse.com/legal/terms-of-service) or Enterprise Terms of
 * Service (https://edgeimpulse.com/legal/enterprise-terms-of-service),
 * according to your product plan subscription (the “License”).
 *
 * This software, documentation and other associated files (collectively referred
 * to as the “Software”) is a single SDK variation generated by the Edge Impulse
 * platform and requires an active paid Edge Impulse subscription to use this
 * Software for any purpose.
 *
 * You may NOT use this Software unless you have an active Edge Impulse subscription
 * that meets the eligibility requirements for the applicable License, subject to
 * your full and continued compliance with the terms and conditions of the License,
 * including without limitation any usage restrictions under the applicable License.
 *
 * If you do not have an active Edge Impulse product plan subscription, or if use
 * of this Software exceeds the usage limitations of your Edge Impulse product plan
 * subscription, you are not permitted to use this Software and must immediately
 * delete and erase all copies of this Software within your control or possession.
 * Edge Impulse reserves all rights and remedies available to enforce its rights.
 *
 * Unless required by applicable law or agreed to in writing, the Software is
 * distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
 * either express or implied. See the License for the specific language governing
 * permissions, disclaimers and limitations under the License.
 */

#ifndef _EI_CLASSIFIER_MODEL_METADATA_H_
#define _EI_CLASSIFIER_MODEL_METADATA_H_

/**
* @file
*  Auto-generated global deployment macros.
*  model_metadata.h defines if certain functions are enabled or disabled in the whole project.
*/

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#ifdef __cplusplus
#include <tuple>
#endif
#include "edge-impulse-sdk/classifier/ei_constants.h"

#define EI_CLASSIFIER_NONE                       255
#define EI_CLASSIFIER_UTENSOR                    1
#define EI_CLASSIFIER_TFLITE                     2
#define EI_CLASSIFIER_CUBEAI                     3
#define EI_CLASSIFIER_TFLITE_FULL                4
#define EI_CLASSIFIER_TENSAIFLOW                 5
#define EI_CLASSIFIER_TENSORRT                   6
#define EI_CLASSIFIER_DRPAI                      7
#define EI_CLASSIFIER_TFLITE_TIDL                8
#define EI_CLASSIFIER_AKIDA                      9
#define EI_CLASSIFIER_SYNTIANT                   10
#define EI_CLASSIFIER_ONNX_TIDL                  11
#define EI_CLASSIFIER_MEMRYX                     12
#define EI_CLASSIFIER_ETHOS_LINUX                13
#define EI_CLASSIFIER_ATON                       14
#define EI_CLASSIFIER_CEVA_NPN                   15

#define EI_CLASSIFIER_SENSOR_UNKNOWN             -1
#define EI_CLASSIFIER_SENSOR_MICROPHONE          1
#define EI_CLASSIFIER_SENSOR_ACCELEROMETER       2
#define EI_CLASSIFIER_SENSOR_CAMERA              3
#define EI_CLASSIFIER_SENSOR_9DOF                4
#define EI_CLASSIFIER_SENSOR_ENVIRONMENTAL       5
#define EI_CLASSIFIER_SENSOR_FUSION              6

#define EI_ANOMALY_TYPE_UNKNOWN                   0
#define EI_ANOMALY_TYPE_KMEANS                    1
#define EI_ANOMALY_TYPE_GMM                       2
#define EI_ANOMALY_TYPE_VISUAL_GMM                3
#define EI_ANOMALY_TYPE_VISUAL_PATCHCORE          4

// These must match the enum values in TensorFlow Lite's "TfLiteType"
#define EI_CLASSIFIER_DATATYPE_FLOAT32           1
#define EI_CLASSIFIER_DATATYPE_UINT8             3
#define EI_CLASSIFIER_DATATYPE_INT8              9

#define EI_CLASSIFIER_PROJECT_ID                 693636
#define EI_CLASSIFIER_PROJECT_OWNER              "fparent"
#define EI_CLASSIFIER_PROJECT_NAME               "SMS v2"
#define EI_CLASSIFIER_PROJECT_DEPLOY_VERSION     14
#define EI_CLASSIFIER_NN_INPUT_FRAME_SIZE        49152
#define EI_CLASSIFIER_RAW_SAMPLE_COUNT           16384
#define EI_CLASSIFIER_RAW_SAMPLES_PER_FRAME      1
#define EI_CLASSIFIER_DSP_INPUT_FRAME_SIZE       (EI_CLASSIFIER_RAW_SAMPLE_COUNT * EI_CLASSIFIER_RAW_SAMPLES_PER_FRAME)
#define EI_CLASSIFIER_INPUT_WIDTH                128
#define EI_CLASSIFIER_INPUT_HEIGHT               128
#define EI_CLASSIFIER_RESIZE_MODE                EI_CLASSIFIER_RESIZE_FIT_SHORTEST
#define EI_CLASSIFIER_INPUT_FRAMES               1
#define EI_CLASSIFIER_NN_OUTPUT_COUNT            512
#define EI_CLASSIFIER_INTERVAL_MS                1
#define EI_CLASSIFIER_LABEL_COUNT                1
#define EI_CLASSIFIER_HAS_ANOMALY                EI_ANOMALY_TYPE_UNKNOWN
#define EI_CLASSIFIER_HAS_VISUAL_ANOMALY         0
#define EI_CLASSIFIER_SINGLE_FEATURE_INPUT       1
#define EI_CLASSIFIER_FREQUENCY                  0
#define EI_CLASSIFIER_HAS_MODEL_VARIABLES        1


#define EI_CLASSIFIER_OBJECT_DETECTION             1
#define EI_CLASSIFIER_OBJECT_DETECTION_LAST_LAYER  EI_CLASSIFIER_LAST_LAYER_FOMO
#warning 'EI_CLASSFIER_OBJECT_DETECTION_COUNT' is used for the guaranteed minimum number of objects detected. To get all objects during inference use 'bounding_boxes_count' from the 'ei_impulse_result_t' struct instead.
#define EI_CLASSIFIER_OBJECT_DETECTION_COUNT       10
#define EI_CLASSIFIER_OBJECT_DETECTION_THRESHOLD   0.8
#define EI_CLASSIFIER_TFLITE_OUTPUT_DATA_TENSOR    0
#define EI_CLASSIFIER_TFLITE_OUTPUT_LABELS_TENSOR  1
#define EI_CLASSIFIER_TFLITE_OUTPUT_SCORE_TENSOR   2

#define EI_CLASSIFIER_TFLITE_INPUT_DATATYPE         EI_CLASSIFIER_DATATYPE_INT8
#define EI_CLASSIFIER_TFLITE_OUTPUT_DATATYPE        EI_CLASSIFIER_DATATYPE_INT8

#define EI_CLASSIFIER_TFLITE_LARGEST_ARENA_SIZE  497862

#define EI_CLASSIFIER_INFERENCING_ENGINE            EI_CLASSIFIER_TFLITE
#define EI_CLASSIFIER_COMPILED                      0
#define EI_CLASSIFIER_HAS_TFLITE_OPS_RESOLVER       0

#define EI_CLASSIFIER_QUANTIZATION_ENABLED       1
#define EI_CLASSIFIER_LOAD_IMAGE_SCALING         1


#define EI_CLASSIFIER_HAS_FFT_INFO               0

#define EI_DSP_PARAMS_GENERATED 1

#define EI_CLASSIFIER_DSP_AXES_INDEX_TYPE        uint8_t

#define EI_CLASSIFIER_SENSOR                     EI_CLASSIFIER_SENSOR_CAMERA
#define EI_CLASSIFIER_FUSION_AXES_STRING         "image"
#define EI_CLASSIFIER_CALIBRATION_ENABLED        0
#define EI_CLASSIFIER_OBJECT_TRACKING_ENABLED    0

#ifndef EI_CLASSIFIER_SLICES_PER_MODEL_WINDOW
#define EI_CLASSIFIER_SLICES_PER_MODEL_WINDOW    4
#endif // EI_CLASSIFIER_SLICES_PER_MODEL_WINDOW
#define EI_CLASSIFIER_SLICE_SIZE                 (EI_CLASSIFIER_RAW_SAMPLE_COUNT / EI_CLASSIFIER_SLICES_PER_MODEL_WINDOW)

#define EI_STUDIO_VERSION_MAJOR             1
#define EI_STUDIO_VERSION_MINOR             72
#define EI_STUDIO_VERSION_PATCH             9

#define EI_CLASSIFIER_HR_ENABLED            0

#if ((EI_CLASSIFIER_INFERENCING_ENGINE == EI_CLASSIFIER_TFLITE) ||      (EI_CLASSIFIER_INFERENCING_ENGINE == EI_CLASSIFIER_DRPAI)) &&      EI_CLASSIFIER_USE_FULL_TFLITE == 1

#if EI_CLASSIFIER_INFERENCING_ENGINE == EI_CLASSIFIER_TFLITE
#undef EI_CLASSIFIER_INFERENCING_ENGINE
#define EI_CLASSIFIER_INFERENCING_ENGINE          EI_CLASSIFIER_TFLITE_FULL
#endif

#undef EI_CLASSIFIER_HAS_TFLITE_OPS_RESOLVER
#define EI_CLASSIFIER_HAS_TFLITE_OPS_RESOLVER     0

#if EI_CLASSIFIER_COMPILED == 1
#error "Cannot use full TensorFlow Lite with EON"
#endif
#endif // ((EI_CLASSIFIER_INFERENCING_ENGINE == EI_CLASSIFIER_TFLITE) || (EI_CLASSIFIER_INFERENCING_ENGINE == EI_CLASSIFIER_DRPAI)) && EI_CLASSIFIER_USE_FULL_TFLITE == 1

typedef struct {
    const char *name;
    int axis;
} ei_dsp_named_axis_t;

typedef struct {
    uint32_t block_id;
    uint16_t implementation_version;
    int axes;
    float scale_axes;
    bool average;
    bool minimum;
    bool maximum;
    bool rms;
    bool stdev;
    bool skewness;
    bool kurtosis;
    int moving_avg_num_windows;
} ei_dsp_config_flatten_t;

typedef struct {
    uint32_t block_id;
    uint16_t implementation_version;
    int axes;
    ei_dsp_named_axis_t * named_axes;
    size_t named_axes_size;
    const char * channels;
} ei_dsp_config_image_t;

typedef struct {
    uint32_t block_id;
    uint16_t implementation_version;
    int axes;
    ei_dsp_named_axis_t * named_axes;
    size_t named_axes_size;
    int num_cepstral;
    float frame_length;
    float frame_stride;
    int num_filters;
    int fft_length;
    int win_size;
    int low_frequency;
    int high_frequency;
    float pre_cof;
    int pre_shift;
} ei_dsp_config_mfcc_t;

typedef struct {
    uint32_t block_id;
    uint16_t implementation_version;
    int axes;
    ei_dsp_named_axis_t * named_axes;
    size_t named_axes_size;
    float frame_length;
    float frame_stride;
    int num_filters;
    int fft_length;
    int low_frequency;
    int high_frequency;
    int win_size;
    int noise_floor_db;
} ei_dsp_config_mfe_t;

typedef struct {
    uint32_t block_id;
    uint16_t implementation_version;
    int axes;
    float scale_axes;
} ei_dsp_config_raw_t;

typedef struct {
    uint32_t block_id;
    uint16_t implementation_version;
    int axes;
    float scale_axes;
    int input_decimation_ratio;
    const char * filter_type;
    float filter_cutoff;
    int filter_order;
    const char * analysis_type;
    int fft_length;
    int spectral_peaks_count;
    float spectral_peaks_threshold;
    const char * spectral_power_edges;
    bool do_log;
    bool do_fft_overlap;
    int wavelet_level;
    const char * wavelet;
    bool extra_low_freq;
} ei_dsp_config_spectral_analysis_t;

typedef struct {
    uint32_t block_id;
    uint16_t implementation_version;
    int axes;
    ei_dsp_named_axis_t * named_axes;
    size_t named_axes_size;
    float frame_length;
    float frame_stride;
    int fft_length;
    int noise_floor_db;
    bool show_axes;
} ei_dsp_config_spectrogram_t;

typedef struct {
    uint32_t block_id;
    uint16_t implementation_version;
    int axes;
    ei_dsp_named_axis_t * named_axes;
    size_t named_axes_size;
    float frame_length;
    float frame_stride;
    int num_filters;
    int fft_length;
    int low_frequency;
    int high_frequency;
    float pre_cof;
    const char * extractor;
} ei_dsp_config_audio_syntiant_t;

typedef struct {
    uint32_t block_id;
    uint16_t implementation_version;
    int axes;
    bool scaling;
    bool scaling_raw;
    bool padding;
} ei_dsp_config_imu_syntiant_t;

typedef struct {
    uint32_t block_id;
    uint16_t implementation_version;
    int axes;
    ei_dsp_named_axis_t * named_axes;
    size_t named_axes_size;
    const char * ppg_ecg;
    int filter_preset;
    int hr_win_size_s;
    float sensitivity;
    float acc_resting_std;
    const char * hrv_features;
    bool include_hr;
    float hrv_update_interval_s;
    float hrv_win_size_s;
} ei_dsp_config_hr_t;

typedef struct {
    int:0;
} ei_post_processing_output_t;


#endif // _EI_CLASSIFIER_MODEL_METADATA_H_
