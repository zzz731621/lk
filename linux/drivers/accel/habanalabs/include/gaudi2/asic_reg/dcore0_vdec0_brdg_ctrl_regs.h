/* SPDX-License-Identifier: GPL-2.0
 *
 * Copyright 2016-2020 HabanaLabs, Ltd.
 * All Rights Reserved.
 *
 */

/************************************
 ** This is an auto-generated file **
 **       DO NOT EDIT BELOW        **
 ************************************/

#ifndef ASIC_REG_DCORE0_VDEC0_BRDG_CTRL_REGS_H_
#define ASIC_REG_DCORE0_VDEC0_BRDG_CTRL_REGS_H_

/*
 *****************************************
 *   DCORE0_VDEC0_BRDG_CTRL
 *   (Prototype: VDEC_BRDG_CTRL)
 *****************************************
 */

#define mmDCORE0_VDEC0_BRDG_CTRL_CGM_DISABLE 0x41E3100

#define mmDCORE0_VDEC0_BRDG_CTRL_IDLE_MASK 0x41E3104

#define mmDCORE0_VDEC0_BRDG_CTRL_APB_CGM_CNT 0x41E3108

#define mmDCORE0_VDEC0_BRDG_CTRL_APB_ARB_WDOG_CNT 0x41E310C

#define mmDCORE0_VDEC0_BRDG_CTRL_GRACEFUL 0x41E3110

#define mmDCORE0_VDEC0_BRDG_CTRL_IDLE_CGM_CNT 0x41E3114

#define mmDCORE0_VDEC0_BRDG_CTRL_CAUSE_INTR 0x41E3120

#define mmDCORE0_VDEC0_BRDG_CTRL_HBW_AXI_VIOL_CAUSE 0x41E3124

#define mmDCORE0_VDEC0_BRDG_CTRL_LBW_AXI_VIOL_CAUSE 0x41E3128

#define mmDCORE0_VDEC0_BRDG_CTRL_AXI_VIOL_CLR_STICKY_TERM 0x41E312C

#define mmDCORE0_VDEC0_BRDG_CTRL_CAUSE_INTR_MASK 0x41E3130

#define mmDCORE0_VDEC0_BRDG_CTRL_HBW_AXI_VIOL_MASK 0x41E3134

#define mmDCORE0_VDEC0_BRDG_CTRL_LBW_AXI_VIOL_MASK 0x41E3138

#define mmDCORE0_VDEC0_BRDG_CTRL_VCD_GIC_INTR_MASK 0x41E3160

#define mmDCORE0_VDEC0_BRDG_CTRL_L2C_GIC_INTR_MASK 0x41E3170

#define mmDCORE0_VDEC0_BRDG_CTRL_NRM_GIC_INTR_MASK 0x41E3180

#define mmDCORE0_VDEC0_BRDG_CTRL_ABNRM_GIC_INTR_MASK 0x41E3190

#define mmDCORE0_VDEC0_BRDG_CTRL_DEC_HBW_AWPROT 0x41E31A0

#define mmDCORE0_VDEC0_BRDG_CTRL_DEC_HBW_ARPROT 0x41E31A4

#define mmDCORE0_VDEC0_BRDG_CTRL_DEC_LBW_AWPROT 0x41E31B0

#define mmDCORE0_VDEC0_BRDG_CTRL_DEC_LBW_ARPROT 0x41E31B4

#define mmDCORE0_VDEC0_BRDG_CTRL_DEC_LBW_SLV_AWPROT 0x41E31C0

#define mmDCORE0_VDEC0_BRDG_CTRL_DEC_LBW_SLV_ARPROT 0x41E31C4

#define mmDCORE0_VDEC0_BRDG_CTRL_DEC_AXI_LEGAL_AXSIZE 0x41E31D0

#define mmDCORE0_VDEC0_BRDG_CTRL_ARC_MSG_MASK 0x41E3200

#define mmDCORE0_VDEC0_BRDG_CTRL_ARC_START_LBW_WDATA 0x41E3230

#define mmDCORE0_VDEC0_BRDG_CTRL_ARC_FINISH_LBW_WDATA 0x41E3260

#define mmDCORE0_VDEC0_BRDG_CTRL_HWEVENT_TRACE_SEL 0x41E3270

#define mmDCORE0_VDEC0_BRDG_CTRL_HWEVENT_TRACE_ADDR 0x41E3280

#define mmDCORE0_VDEC0_BRDG_CTRL_DEC_FREE_RUN_CNT_L 0x41E3290

#define mmDCORE0_VDEC0_BRDG_CTRL_DEC_FREE_RUN_CNT_H 0x41E3294

#define mmDCORE0_VDEC0_BRDG_CTRL_DEC_FREE_RUN_SET_VALUE_L 0x41E32A0

#define mmDCORE0_VDEC0_BRDG_CTRL_DEC_FREE_RUN_SET_VALUE_H 0x41E32A4

#define mmDCORE0_VDEC0_BRDG_CTRL_DEC_BUSY_CNT_L 0x41E32B0

#define mmDCORE0_VDEC0_BRDG_CTRL_DEC_BUSY_CNT_H 0x41E32B4

#define mmDCORE0_VDEC0_BRDG_CTRL_DEC_BUSY_SET_VALUE_L 0x41E32C0

#define mmDCORE0_VDEC0_BRDG_CTRL_DEC_BUSY_SET_VALUE_H 0x41E32C4

#define mmDCORE0_VDEC0_BRDG_CTRL_STAT_CNTR_EN 0x41E32D0

#define mmDCORE0_VDEC0_BRDG_CTRL_VCD_INTR_MASK 0x41E3300

#define mmDCORE0_VDEC0_BRDG_CTRL_VCD_MSIX_FLOW_MASK 0x41E3310

#define mmDCORE0_VDEC0_BRDG_CTRL_VCD_WAIT_CNTR 0x41E3320

#define mmDCORE0_VDEC0_BRDG_CTRL_VCD_MSIX_WAIT_CNTR 0x41E3330

#define mmDCORE0_VDEC0_BRDG_CTRL_STAT_VCD_WAIT_CNTR 0x41E3334

#define mmDCORE0_VDEC0_BRDG_CTRL_STAT_VCD_MSIX_WAIT_CNTR 0x41E3338

#define mmDCORE0_VDEC0_BRDG_CTRL_VCD_SWREG1_ADDR 0x41E3340

#define mmDCORE0_VDEC0_BRDG_CTRL_VCD_APB_WR_ADDR 0x41E3350

#define mmDCORE0_VDEC0_BRDG_CTRL_VCD_APB_WR_DATA 0x41E3360

#define mmDCORE0_VDEC0_BRDG_CTRL_VCD_CPLQ_HBW_AWPROT 0x41E3380

#define mmDCORE0_VDEC0_BRDG_CTRL_VCD_CPLQ_HBW_AWADDR_L 0x41E3390

#define mmDCORE0_VDEC0_BRDG_CTRL_VCD_CPLQ_HBW_AWADDR_H 0x41E3394

#define mmDCORE0_VDEC0_BRDG_CTRL_VCD_MSIX_LBW_AWPROT 0x41E33C0

#define mmDCORE0_VDEC0_BRDG_CTRL_VCD_MSIX_LBW_AWADDR 0x41E33D0

#define mmDCORE0_VDEC0_BRDG_CTRL_VCD_MSIX_LBW_WDATA 0x41E33E0

#define mmDCORE0_VDEC0_BRDG_CTRL_L2C_INTR_MASK 0x41E3400

#define mmDCORE0_VDEC0_BRDG_CTRL_L2C_MSIX_FLOW_MASK 0x41E3410

#define mmDCORE0_VDEC0_BRDG_CTRL_L2C_WAIT_CNTR 0x41E3420

#define mmDCORE0_VDEC0_BRDG_CTRL_L2C_MSIX_WAIT_CNTR 0x41E3430

#define mmDCORE0_VDEC0_BRDG_CTRL_STAT_L2C_WAIT_CNTR 0x41E3434

#define mmDCORE0_VDEC0_BRDG_CTRL_STAT_L2C_MSIX_WAIT_CNTR 0x41E3438

#define mmDCORE0_VDEC0_BRDG_CTRL_L2C_SWREG1_ADDR 0x41E3440

#define mmDCORE0_VDEC0_BRDG_CTRL_L2C_APB_WR_ADDR 0x41E3450

#define mmDCORE0_VDEC0_BRDG_CTRL_L2C_APB_WR_DATA 0x41E3460

#define mmDCORE0_VDEC0_BRDG_CTRL_L2C_CPLQ_HBW_AWPROT 0x41E3480

#define mmDCORE0_VDEC0_BRDG_CTRL_L2C_CPLQ_HBW_AWADDR_L 0x41E3490

#define mmDCORE0_VDEC0_BRDG_CTRL_L2C_CPLQ_HBW_AWADDR_H 0x41E3494

#define mmDCORE0_VDEC0_BRDG_CTRL_L2C_MSIX_LBW_AWPROT 0x41E34C0

#define mmDCORE0_VDEC0_BRDG_CTRL_L2C_MSIX_LBW_AWADDR 0x41E34D0

#define mmDCORE0_VDEC0_BRDG_CTRL_L2C_MSIX_LBW_WDATA 0x41E34E0

#define mmDCORE0_VDEC0_BRDG_CTRL_NRM_INTR_MASK 0x41E3500

#define mmDCORE0_VDEC0_BRDG_CTRL_NRM_MSIX_FLOW_MASK 0x41E3510

#define mmDCORE0_VDEC0_BRDG_CTRL_NRM_WAIT_CNTR 0x41E3520

#define mmDCORE0_VDEC0_BRDG_CTRL_NRM_MSIX_WAIT_CNTR 0x41E3530

#define mmDCORE0_VDEC0_BRDG_CTRL_STAT_NRM_WAIT_CNTR 0x41E3534

#define mmDCORE0_VDEC0_BRDG_CTRL_STAT_NRM_MSIX_WAIT_CNTR 0x41E3538

#define mmDCORE0_VDEC0_BRDG_CTRL_NRM_SWREG1_ADDR 0x41E3540

#define mmDCORE0_VDEC0_BRDG_CTRL_NRM_APB_WR_ADDR 0x41E3550

#define mmDCORE0_VDEC0_BRDG_CTRL_NRM_APB_WR_DATA 0x41E3560

#define mmDCORE0_VDEC0_BRDG_CTRL_NRM_CPLQ_HBW_AWPROT 0x41E3580

#define mmDCORE0_VDEC0_BRDG_CTRL_NRM_CPLQ_HBW_AWADDR_L 0x41E3590

#define mmDCORE0_VDEC0_BRDG_CTRL_NRM_CPLQ_HBW_AWADDR_H 0x41E3594

#define mmDCORE0_VDEC0_BRDG_CTRL_NRM_MSIX_LBW_AWPROT 0x41E35C0

#define mmDCORE0_VDEC0_BRDG_CTRL_NRM_MSIX_LBW_AWADDR 0x41E35D0

#define mmDCORE0_VDEC0_BRDG_CTRL_NRM_MSIX_LBW_WDATA 0x41E35E0

#define mmDCORE0_VDEC0_BRDG_CTRL_ABNRM_INTR_MASK 0x41E3600

#define mmDCORE0_VDEC0_BRDG_CTRL_ABNRM_MSIX_FLOW_MASK 0x41E3610

#define mmDCORE0_VDEC0_BRDG_CTRL_ABNRM_WAIT_CNTR 0x41E3620

#define mmDCORE0_VDEC0_BRDG_CTRL_ABNRM_MSIX_WAIT_CNTR 0x41E3630

#define mmDCORE0_VDEC0_BRDG_CTRL_STAT_ABNRM_WAIT_CNTR 0x41E3634

#define mmDCORE0_VDEC0_BRDG_CTRL_STAT_ABNRM_MSIX_WAIT_CNTR 0x41E3638

#define mmDCORE0_VDEC0_BRDG_CTRL_ABNRM_SWREG1_ADDR 0x41E3640

#define mmDCORE0_VDEC0_BRDG_CTRL_ABNRM_APB_WR_ADDR 0x41E3650

#define mmDCORE0_VDEC0_BRDG_CTRL_ABNRM_APB_WR_DATA 0x41E3660

#define mmDCORE0_VDEC0_BRDG_CTRL_ABNRM_CPLQ_HBW_AWPROT 0x41E3680

#define mmDCORE0_VDEC0_BRDG_CTRL_ABNRM_CPLQ_HBW_AWADDR_L 0x41E3690

#define mmDCORE0_VDEC0_BRDG_CTRL_ABNRM_CPLQ_HBW_AWADDR_H 0x41E3694

#define mmDCORE0_VDEC0_BRDG_CTRL_ABNRM_MSIX_LBW_AWPROT 0x41E36C0

#define mmDCORE0_VDEC0_BRDG_CTRL_ABNRM_MSIX_LBW_AWADDR 0x41E36D0

#define mmDCORE0_VDEC0_BRDG_CTRL_ABNRM_MSIX_LBW_WDATA 0x41E36E0

#define mmDCORE0_VDEC0_BRDG_CTRL_AXI_SPLIT_BRESP_ERR_ID 0x41E3700

#define mmDCORE0_VDEC0_BRDG_CTRL_AXI_SPLIT_CFG 0x41E3704

#define mmDCORE0_VDEC0_BRDG_CTRL_AXI_SPLIT_NO_WR_INFLIGHT 0x41E3708

#define mmDCORE0_VDEC0_BRDG_CTRL_HWEVENT_MASK 0x41E370C

#define mmDCORE0_VDEC0_BRDG_CTRL_HWEVENT_CNTXT 0x41E3714

#define mmDCORE0_VDEC0_BRDG_CTRL_LBW_SLV_TERM_ERR_RESP 0x41E3718

#define mmDCORE0_VDEC0_BRDG_CTRL_LBW_MSTR_TERM_ERR_RESP 0x41E371C

#define mmDCORE0_VDEC0_BRDG_CTRL_DEC_HBW_MSTR_ERR_RESP 0x41E3720

#define mmDCORE0_VDEC0_BRDG_CTRL_HBW_VIOL_TERM_STATUS 0x41E3724

#define mmDCORE0_VDEC0_BRDG_CTRL_HBW_LAST_AWADDR_TERM_L 0x41E3728

#define mmDCORE0_VDEC0_BRDG_CTRL_HBW_LAST_AWADDR_TERM_H 0x41E372C

#define mmDCORE0_VDEC0_BRDG_CTRL_HBW_LAST_ARADDR_TERM_L 0x41E3730

#define mmDCORE0_VDEC0_BRDG_CTRL_HBW_LAST_ARADDR_TERM_H 0x41E3734

#endif /* ASIC_REG_DCORE0_VDEC0_BRDG_CTRL_REGS_H_ */