/*
 * Copyright (C) 2014 The CyanogenMod Project
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

#define CAMERA_PARAMETERS_EXTRA_C \
const char CameraParameters::KEY_ISO_MODE[] = "iso"; \
const char CameraParameters::KEY_SUPPORTED_ISO_MODES[] = "iso-values"; \
const char CameraParameters::KEY_AUTO_EXPOSURE[] = "auto-exposure"; \
const char CameraParameters::KEY_SUPPORTED_AUTO_EXPOSURE[] = "auto-exposure-values"; \
const char CameraParameters::KEY_SONY_ISO[] = "sony-iso"; \
const char CameraParameters::KEY_SONY_METERING_MODE[] = "sony-metering-mode"; \
const char CameraParameters::KEY_SONY_VS[] = "sony-vs"; \
const char CameraParameters::KEY_SONY_MAX_BURST_SHOT_SIZE[] = "sony-max-burst-shot-size"; \
const char CameraParameters::KEY_SONY_BURST_SHOT_VALUES[] = "sony-burst-shot-values"; \
const char CameraParameters::KEY_SONY_VS_VALUES[] = "sony-vs-values"; \
const char CameraParameters::KEY_SONY_METERING_MODE_VALUES[] = "sony-metering-mode-values"; \
const char CameraParameters::KEY_SONY_AE_MODE[] = "sony-ae-mode"; \
const char CameraParameters::KEY_SONY_AE_MODE_VALUES[] = "sony-ae-mode-values"; \
const char CameraParameters::KEY_SONY_ISO_VALUES[] = "sony-iso-values"; \
const char CameraParameters::KEY_SONY_IS[] = "sony-is"; \
const char CameraParameters::KEY_SONY_IS_VALUES[] = "sony-is-values"; \
const char CameraParameters::KEY_SONY_EXTENSION_VERSION[] = "sony-extension-version"; \
const char CameraParameters::KEY_SONY_FOCUS_AREA[] = "sony-focus-area"; \
const char CameraParameters::KEY_SONY_FOCUS_AREA_VALUES[] = "sony-focus-area-values"; \
const char CameraParameters::KEY_SONY_MAX_MULTI_FOCUS_NUM[] = "sony-max-multi-focus-num"; \
const char CameraParameters::KEY_SONY_SCENE_DETECT_SUPPORTED[] = "sony-scene-detect-supported"; \
const char CameraParameters::KEY_SONY_SELECT_FACE_POSITION[] = "sony-select-face-position"; \
const char CameraParameters::KEY_SONY_MAX_VIDEO_STABILIZER_SIZE[] = "max-video-stabilizer-size";\
const char CameraParameters::KEY_SONY_OBJECT_TRACKING_SUPPORTED[] = "sony-object-tracking-supported"; \
const char CameraParameters::KEY_SONY_SCENE_DETECTION_SUPPORTED[] = "sony-scene-detection-supported"; \
const char CameraParameters::KEY_SONY_MAX_STILL_HDR_LEVEL[] = "sony-max-still-hdr-level"; \
const char CameraParameters::KEY_SONY_STILL_HDR_LEVEL[] = "sony-still-hdr-level";\
const char CameraParameters::KEY_SONY_BURST_SHOTS_FRAME_RATE[] = "burst-shots-frame-rate"; \
const char CameraParameters::KEY_SONY_SUPPORTED_BURST_SHOTS[]  = "sony-supported-burst-shots"; \
const char CameraParameters::KEY_SONY_BURST_SHOT[] = "sony-burst-shot"; \
const char CameraParameters::KEY_SONY_SHUTTER_SPEED_STEP[] = "sony-shutter-speed-step"; \
const char CameraParameters::KEY_SONY_MIN_SHUTTER_SPEED[] = "sony-min-shutter-speed"; \
const char CameraParameters::KEY_SONY_MAX_SHUTTER_SPEED[] = "sony-max-shutter-speed"; \
const char CameraParameters::KEY_SONY_SHUTTER_SPEED[]  = "sony-shutter-speed"; \
const char CameraParameters::KEY_SONY_MAX_MULTI_FOCUS_RECTS[] = "sony-max-multi-focus-rects"; \
const char CameraParameters::KEY_SONY_SUPPORTED_SMILE_DETECTIONS[] = "sony-supported-smile-detections"; \
const char CameraParameters::KEY_SONY_SMILE_DETECTION[] = "sony-smile-detection"; \
const char CameraParameters::KEY_SONY_SUPPORTED_FACE_DETECTIONS[] = "sony-supported-face-detections"; \
const char CameraParameters::KEY_SONY_MAX_VIDEO_HDR_SIZE[] = "sony-max-video-hdr-size"; \
const char CameraParameters::KEY_SONY_SUPPORTED_HDR_VIDEO_MODES[] = "sony-supported-hdr-video-modes"; \
const char CameraParameters::KEY_SONY_HDR_VIDEO_MODE[] = "sony-hdr-video-mode"; \
const char CameraParameters::KEY_SONY_SUPPORTED_IS_MODES[] = "sony-supported-is-modes"; \
const char CameraParameters::KEY_SONY_IS_MODE[] = "sony-is-mode"; \
const char CameraParameters::KEY_SONY_SUPPORTED_VS_MODES[] = "sony-supported-vs-modes"; \
const char CameraParameters::KEY_SONY_VS_MODE[] = "sony-vs-mode"; \
const char CameraParameters::KEY_SONY_SUPPORTED_METERING_MODES[] = "sony-supported-metering-modes"; \
const char CameraParameters::KEY_SONY_SUPPORTED_AE_MODE[] = "sony-supported-ae-mode"; \
const char CameraParameters::KEY_SONY_SUPPORTED_ISO_MODES[] = "sony-supported-iso-mode"; \
const char CameraParameters::KEY_SONY_ISO_MODE[] = "sony-iso-mode";


#define CAMERA_PARAMETERS_EXTRA_H \
    static const char KEY_ISO_MODE[]; \
    static const char KEY_SUPPORTED_ISO_MODES[]; \
    static const char KEY_AUTO_EXPOSURE[]; \
    static const char KEY_SUPPORTED_AUTO_EXPOSURE[]; \
    static const char KEY_SONY_ISO[]; \
    static const char KEY_SONY_METERING_MODE[]; \
    static const char KEY_SONY_VS[]; \
    static const char KEY_SONY_MAX_BURST_SHOT_SIZE[]; \
    static const char KEY_SONY_BURST_SHOT_VALUES[]; \
    static const char KEY_SONY_VS_VALUES[]; \
    static const char KEY_SONY_METERING_MODE_VALUES[]; \
    static const char KEY_SONY_AE_MODE[]; \
    static const char KEY_SONY_AE_MODE_VALUES[]; \
    static const char KEY_SONY_ISO_VALUES[]; \
    static const char KEY_SONY_IS[]; \
    static const char KEY_SONY_IS_VALUES[]; \
    static const char KEY_SONY_EXTENSION_VERSION[]; \
    static const char KEY_SONY_FOCUS_AREA[]; \
    static const char KEY_SONY_FOCUS_AREA_VALUES[]; \
    static const char KEY_SONY_MAX_MULTI_FOCUS_NUM[]; \
    static const char KEY_SONY_SCENE_DETECT_SUPPORTED[]; \
    static const char KEY_SONY_SELECT_FACE_POSITION[] ; \
    static const char KEY_SONY_MAX_VIDEO_STABILIZER_SIZE[] ; \
    static const char KEY_SONY_OBJECT_TRACKING_SUPPORTED[] ; \
    static const char KEY_SONY_SCENE_DETECTION_SUPPORTED[] ; \
    static const char KEY_SONY_MAX_STILL_HDR_LEVEL[] ; \
    static const char KEY_SONY_STILL_HDR_LEVEL[] ; \
    static const char KEY_SONY_BURST_SHOTS_FRAME_RATE[] ; \
    static const char KEY_SONY_SUPPORTED_BURST_SHOTS[] ; \
    static const char KEY_SONY_BURST_SHOT[] ; \
    static const char KEY_SONY_SHUTTER_SPEED_STEP[] ; \
    static const char KEY_SONY_MIN_SHUTTER_SPEED[] ; \
    static const char KEY_SONY_MAX_SHUTTER_SPEED[] ; \
    static const char KEY_SONY_SHUTTER_SPEED[] ; \
    static const char KEY_SONY_MAX_MULTI_FOCUS_RECTS[] ; \
    static const char KEY_SONY_SUPPORTED_SMILE_DETECTIONS[] ; \
    static const char KEY_SONY_SMILE_DETECTION[] ; \
    static const char KEY_SONY_SUPPORTED_FACE_DETECTIONS[] ; \
    static const char KEY_SONY_MAX_VIDEO_HDR_SIZE[] ; \
    static const char KEY_SONY_SUPPORTED_HDR_VIDEO_MODES[] ; \
    static const char KEY_SONY_HDR_VIDEO_MODE[] ; \
    static const char KEY_SONY_SUPPORTED_IS_MODES[] ; \
    static const char KEY_SONY_IS_MODE[] ; \
    static const char KEY_SONY_SUPPORTED_VS_MODES[] ; \
    static const char KEY_SONY_VS_MODE[] ; \
    static const char KEY_SONY_SUPPORTED_METERING_MODES[] ; \
    static const char KEY_SONY_SUPPORTED_AE_MODE[] ; \
    static const char KEY_SONY_SUPPORTED_ISO_MODES[] ; \
    static const char KEY_SONY_ISO_MODE[] ;
