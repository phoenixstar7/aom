/*
 * Copyright (c) 2016, Alliance for Open Media. All rights reserved
 *
 * This source code is subject to the terms of the BSD 2 Clause License and
 * the Alliance for Open Media Patent License 1.0. If the BSD 2 Clause License
 * was not distributed with this source code in the LICENSE file, you can
 * obtain it at www.aomedia.org/license/software. If the Alliance for Open
 * Media Patent License 1.0 was not distributed with this source code in the
 * PATENTS file, you can obtain it at www.aomedia.org/license/patent.
 */

#ifndef AOM_DSP_QUANTIZE_H_
#define AOM_DSP_QUANTIZE_H_

#include "./aom_config.h"
#include "aom_dsp/aom_dsp_common.h"

#ifdef __cplusplus
extern "C" {
#endif

#if CONFIG_AOM_QM
void aom_quantize_dc(const tran_low_t *coeff_ptr, int n_coeffs, int skip_block,
                     const int16_t *round_ptr, const int16_t quant_ptr,
                     tran_low_t *qcoeff_ptr, tran_low_t *dqcoeff_ptr,
                     const int16_t dequant_ptr, uint16_t *eob_ptr,
                     const qm_val_t *qm_ptr, const qm_val_t *iqm_ptr);
void aom_quantize_dc_32x32(const tran_low_t *coeff_ptr, int skip_block,
                           const int16_t *round_ptr, const int16_t quant_ptr,
                           tran_low_t *qcoeff_ptr, tran_low_t *dqcoeff_ptr,
                           const int16_t dequant_ptr, uint16_t *eob_ptr,
                           const qm_val_t *qm_ptr, const qm_val_t *iqm_ptr);
#if CONFIG_TX64X64
void aom_quantize_dc_64x64(const tran_low_t *coeff_ptr, int skip_block,
                           const int16_t *round_ptr, const int16_t quant_ptr,
                           tran_low_t *qcoeff_ptr, tran_low_t *dqcoeff_ptr,
                           const int16_t dequant_ptr, uint16_t *eob_ptr,
                           const qm_val_t *qm_ptr, const qm_val_t *iqm_ptr);
#endif  // CONFIG_TX64X64
void aom_quantize_b_c(const tran_low_t *coeff_ptr, intptr_t n_coeffs,
                      int skip_block, const int16_t *zbin_ptr,
                      const int16_t *round_ptr, const int16_t *quant_ptr,
                      const int16_t *quant_shift_ptr, tran_low_t *qcoeff_ptr,
                      tran_low_t *dqcoeff_ptr, const int16_t *dequant_ptr,
                      uint16_t *eob_ptr, const int16_t *scan,
                      const int16_t *iscan, const qm_val_t *qm_ptr,
                      const qm_val_t *iqm_ptr);
#if CONFIG_AOM_HIGHBITDEPTH
void aom_highbd_quantize_dc(const tran_low_t *coeff_ptr, int n_coeffs,
                            int skip_block, const int16_t *round_ptr,
                            const int16_t quant_ptr, tran_low_t *qcoeff_ptr,
                            tran_low_t *dqcoeff_ptr, const int16_t dequant_ptr,
                            uint16_t *eob_ptr, const qm_val_t *qm_ptr,
                            const qm_val_t *iqm_ptr);
void aom_highbd_quantize_dc_32x32(
    const tran_low_t *coeff_ptr, int skip_block, const int16_t *round_ptr,
    const int16_t quant_ptr, tran_low_t *qcoeff_ptr, tran_low_t *dqcoeff_ptr,
    const int16_t dequant_ptr, uint16_t *eob_ptr, const qm_val_t *qm_ptr,
    const qm_val_t *iqm_ptr);
#if CONFIG_TX64X64
void aom_highbd_quantize_dc_64x64(
    const tran_low_t *coeff_ptr, int skip_block, const int16_t *round_ptr,
    const int16_t quant_ptr, tran_low_t *qcoeff_ptr, tran_low_t *dqcoeff_ptr,
    const int16_t dequant_ptr, uint16_t *eob_ptr, const qm_val_t *qm_ptr,
    const qm_val_t *iqm_ptr);
#endif  // CONFIG_TX64X64
void aom_highbd_quantize_b_c(const tran_low_t *coeff_ptr, intptr_t n_coeffs,
                             int skip_block, const int16_t *zbin_ptr,
                             const int16_t *round_ptr, const int16_t *quant_ptr,
                             const int16_t *quant_shift_ptr,
                             tran_low_t *qcoeff_ptr, tran_low_t *dqcoeff_ptr,
                             const int16_t *dequant_ptr, uint16_t *eob_ptr,
                             const int16_t *scan, const int16_t *iscan,
                             const qm_val_t *qm_ptr, const qm_val_t *iqm_ptr);
#endif  // CONFIG_AOM_HIGHBITDEPTH

#else  // CONFIG_AOM_QM

void aom_quantize_dc(const tran_low_t *coeff_ptr, int n_coeffs, int skip_block,
                     const int16_t *round_ptr, const int16_t quant_ptr,
                     tran_low_t *qcoeff_ptr, tran_low_t *dqcoeff_ptr,
                     const int16_t dequant_ptr, uint16_t *eob_ptr);
void aom_quantize_dc_32x32(const tran_low_t *coeff_ptr, int skip_block,
                           const int16_t *round_ptr, const int16_t quant_ptr,
                           tran_low_t *qcoeff_ptr, tran_low_t *dqcoeff_ptr,
                           const int16_t dequant_ptr, uint16_t *eob_ptr);
#if CONFIG_TX64X64
void aom_quantize_dc_64x64(const tran_low_t *coeff_ptr, int skip_block,
                           const int16_t *round_ptr, const int16_t quant_ptr,
                           tran_low_t *qcoeff_ptr, tran_low_t *dqcoeff_ptr,
                           const int16_t dequant_ptr, uint16_t *eob_ptr);
#endif  // CONFIG_TX64X64
#if CONFIG_AOM_HIGHBITDEPTH
void aom_highbd_quantize_dc(const tran_low_t *coeff_ptr, int n_coeffs,
                            int skip_block, const int16_t *round_ptr,
                            const int16_t quant_ptr, tran_low_t *qcoeff_ptr,
                            tran_low_t *dqcoeff_ptr, const int16_t dequant_ptr,
                            uint16_t *eob_ptr);
void aom_highbd_quantize_dc_32x32(const tran_low_t *coeff_ptr, int skip_block,
                                  const int16_t *round_ptr,
                                  const int16_t quant_ptr,
                                  tran_low_t *qcoeff_ptr,
                                  tran_low_t *dqcoeff_ptr,
                                  const int16_t dequant_ptr, uint16_t *eob_ptr);
#if CONFIG_TX64X64
void aom_highbd_quantize_dc_64x64(const tran_low_t *coeff_ptr, int skip_block,
                                  const int16_t *round_ptr,
                                  const int16_t quant_ptr,
                                  tran_low_t *qcoeff_ptr,
                                  tran_low_t *dqcoeff_ptr,
                                  const int16_t dequant_ptr, uint16_t *eob_ptr);
#endif  // CONFIG_TX64X64
#endif  // CONFIG_AOM_HIGHBITDEPTH
#endif  // CONFIG_AOM_QM

#ifdef __cplusplus
}  // extern "C"
#endif

#endif  // AOM_DSP_QUANTIZE_H_
