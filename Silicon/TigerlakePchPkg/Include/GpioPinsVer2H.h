/** @file
  GPIO pins for TGL-PCH-H,

  Copyright (c) 2017 - 2018, Intel Corporation. All rights reserved.<BR>
  SPDX-License-Identifier: BSD-2-Clause-Patent
**/
#ifndef _GPIO_PINS_VER2_H_H_
#define _GPIO_PINS_VER2_H_H_
///
/// This header file should be used together with
/// PCH GPIO lib in C and ASL. All defines used
/// must match both ASL/C syntax
///

///
/// Unique ID used in GpioPad defines
///
#define GPIO_VER2_H_CHIPSET_ID     0x8

///
/// TGL LP GPIO Groups
/// Use below for functions from PCH GPIO Lib which
/// require GpioGroup as argument
///
#define GPIO_VER2_H_GROUP_GPP_A     0x0800
#define GPIO_VER2_H_GROUP_GPP_R     0x0801
#define GPIO_VER2_H_GROUP_GPP_B     0x0802
#define GPIO_VER2_H_GROUP_VGPIO_0   0x0803
#define GPIO_VER2_H_GROUP_GPP_D     0x0804
#define GPIO_VER2_H_GROUP_GPP_C     0x0805
#define GPIO_VER2_H_GROUP_GPP_S     0x0806
#define GPIO_VER2_H_GROUP_GPP_G     0x0807
#define GPIO_VER2_H_GROUP_VGPIO     0x0808
#define GPIO_VER2_H_GROUP_GPD       0x0809
#define GPIO_VER2_H_GROUP_GPP_E     0x080A
#define GPIO_VER2_H_GROUP_GPP_F     0x080B
#define GPIO_VER2_H_GROUP_VGPIO_3   0x080C
#define GPIO_VER2_H_GROUP_GPP_H     0x080D
#define GPIO_VER2_H_GROUP_GPP_J     0x080E
#define GPIO_VER2_H_GROUP_GPP_K     0x080F
#define GPIO_VER2_H_GROUP_GPP_I     0x0810
#define GPIO_VER2_H_GROUP_JTAG      0x0811
#define GPIO_VER2_H_GROUP_CPU       0x0812

///
/// TGL H GPIO pins
/// Use below for functions from PCH GPIO Lib which
/// require GpioPad as argument. Encoding used here
/// has all information required by library functions
///
#define GPIO_VER2_H_GPP_A0                   0x08000000
#define GPIO_VER2_H_GPP_A1                   0x08000001
#define GPIO_VER2_H_GPP_A2                   0x08000002
#define GPIO_VER2_H_GPP_A3                   0x08000003
#define GPIO_VER2_H_GPP_A4                   0x08000004
#define GPIO_VER2_H_GPP_A5                   0x08000005
#define GPIO_VER2_H_GPP_A6                   0x08000006
#define GPIO_VER2_H_GPP_A7                   0x08000007
#define GPIO_VER2_H_GPP_A8                   0x08000008
#define GPIO_VER2_H_GPP_A9                   0x08000009
#define GPIO_VER2_H_GPP_A10                  0x0800000A
#define GPIO_VER2_H_GPP_A11                  0x0800000B
#define GPIO_VER2_H_GPP_A12                  0x0800000C
#define GPIO_VER2_H_GPP_A13                  0x0800000D
#define GPIO_VER2_H_GPP_A14                  0x0800000E
#define GPIO_VER2_H_SPI0_CLK_LOOPBK          0x0800000F
#define GPIO_VER2_H_ESPI_CLK_LOOPBK          0x08000010

#define GPIO_VER2_H_GPP_R0                   0x08010000
#define GPIO_VER2_H_GPP_R1                   0x08010001
#define GPIO_VER2_H_GPP_R2                   0x08010002
#define GPIO_VER2_H_GPP_R3                   0x08010003
#define GPIO_VER2_H_GPP_R4                   0x08010004
#define GPIO_VER2_H_GPP_R5                   0x08010005
#define GPIO_VER2_H_GPP_R6                   0x08010006
#define GPIO_VER2_H_GPP_R7                   0x08010007
#define GPIO_VER2_H_GPP_R8                   0x08010008
#define GPIO_VER2_H_GPP_R9                   0x08010009
#define GPIO_VER2_H_GPP_R10                  0x0801000A
#define GPIO_VER2_H_GPP_R11                  0x0801000B
#define GPIO_VER2_H_GPP_R12                  0x0801000C
#define GPIO_VER2_H_GPP_R13                  0x0801000D
#define GPIO_VER2_H_GPP_R14                  0x0801000E
#define GPIO_VER2_H_GPP_R15                  0x0801000F
#define GPIO_VER2_H_GPP_R16                  0x08010010
#define GPIO_VER2_H_GPP_R17                  0x08010011
#define GPIO_VER2_H_GPP_R18                  0x08010012
#define GPIO_VER2_H_GPP_R19                  0x08010013

#define GPIO_VER2_H_GPP_B0                   0x08020000
#define GPIO_VER2_H_GPP_B1                   0x08020001
#define GPIO_VER2_H_GPP_B2                   0x08020002
#define GPIO_VER2_H_GPP_B3                   0x08020003
#define GPIO_VER2_H_GPP_B4                   0x08020004
#define GPIO_VER2_H_GPP_B5                   0x08020005
#define GPIO_VER2_H_GPP_B6                   0x08020006
#define GPIO_VER2_H_GPP_B7                   0x08020007
#define GPIO_VER2_H_GPP_B8                   0x08020008
#define GPIO_VER2_H_GPP_B9                   0x08020009
#define GPIO_VER2_H_GPP_B10                  0x0802000A
#define GPIO_VER2_H_GPP_B11                  0x0802000B
#define GPIO_VER2_H_GPP_B12                  0x0802000C
#define GPIO_VER2_H_GPP_B13                  0x0802000D
#define GPIO_VER2_H_GPP_B14                  0x0802000E
#define GPIO_VER2_H_GPP_B15                  0x0802000F
#define GPIO_VER2_H_GPP_B16                  0x08020010
#define GPIO_VER2_H_GPP_B17                  0x08020011
#define GPIO_VER2_H_GPP_B18                  0x08020012
#define GPIO_VER2_H_GPP_B19                  0x08020013
#define GPIO_VER2_H_GPP_B20                  0x08020014
#define GPIO_VER2_H_GPP_B21                  0x08020015
#define GPIO_VER2_H_GPP_B22                  0x08020016
#define GPIO_VER2_H_GPP_B23                  0x08020017
#define GPIO_VER2_H_GSPI0_CLK_LOOPBK         0x08020018
#define GPIO_VER2_H_GSPI1_CLK_LOOPBK         0x08020019

#define GPIO_VER2_H_VGPIO_USB_0              0x08030000
#define GPIO_VER2_H_VGPIO_USB_1              0x08030001
#define GPIO_VER2_H_VGPIO_USB_2              0x08030002
#define GPIO_VER2_H_VGPIO_USB_3              0x08030003
#define GPIO_VER2_H_VGPIO_USB_8              0x08030004
#define GPIO_VER2_H_VGPIO_USB_9              0x08030005
#define GPIO_VER2_H_VGPIO_USB_10             0x08030006
#define GPIO_VER2_H_VGPIO_USB_11             0x08030007

#define GPIO_VER2_H_GPP_D0                   0x08040000
#define GPIO_VER2_H_GPP_D1                   0x08040001
#define GPIO_VER2_H_GPP_D2                   0x08040002
#define GPIO_VER2_H_GPP_D3                   0x08040003
#define GPIO_VER2_H_GPP_D4                   0x08040004
#define GPIO_VER2_H_GPP_D5                   0x08040005
#define GPIO_VER2_H_GPP_D6                   0x08040006
#define GPIO_VER2_H_GPP_D7                   0x08040007
#define GPIO_VER2_H_GPP_D8                   0x08040008
#define GPIO_VER2_H_GPP_D9                   0x08040009
#define GPIO_VER2_H_GPP_D10                  0x0804000A
#define GPIO_VER2_H_GPP_D11                  0x0804000B
#define GPIO_VER2_H_GPP_D12                  0x0804000C
#define GPIO_VER2_H_GPP_D13                  0x0804000D
#define GPIO_VER2_H_GPP_D14                  0x0804000E
#define GPIO_VER2_H_GPP_D15                  0x0804000F
#define GPIO_VER2_H_GPP_D16                  0x08040010
#define GPIO_VER2_H_GPP_D17                  0x08040011
#define GPIO_VER2_H_GPP_D18                  0x08040012
#define GPIO_VER2_H_GPP_D19                  0x08040013
#define GPIO_VER2_H_GPP_D20                  0x08040014
#define GPIO_VER2_H_GPP_D21                  0x08040015
#define GPIO_VER2_H_GPP_D22                  0x08040016
#define GPIO_VER2_H_GPP_D23                  0x08040017
#define GPIO_VER2_H_SPI1_THC0_CLK_LOOPBK     0x08040018
#define GPIO_VER2_H_GPI3_THC1_CLK_LOOPBK     0x08040019

#define GPIO_VER2_H_GPP_C0                   0x08050000
#define GPIO_VER2_H_GPP_C1                   0x08050001
#define GPIO_VER2_H_GPP_C2                   0x08050002
#define GPIO_VER2_H_GPP_C3                   0x08050003
#define GPIO_VER2_H_GPP_C4                   0x08050004
#define GPIO_VER2_H_GPP_C5                   0x08050005
#define GPIO_VER2_H_GPP_C6                   0x08050006
#define GPIO_VER2_H_GPP_C7                   0x08050007
#define GPIO_VER2_H_GPP_C8                   0x08050008
#define GPIO_VER2_H_GPP_C9                   0x08050009
#define GPIO_VER2_H_GPP_C10                  0x0805000A
#define GPIO_VER2_H_GPP_C11                  0x0805000B
#define GPIO_VER2_H_GPP_C12                  0x0805000C
#define GPIO_VER2_H_GPP_C13                  0x0805000D
#define GPIO_VER2_H_GPP_C14                  0x0805000E
#define GPIO_VER2_H_GPP_C15                  0x0805000F
#define GPIO_VER2_H_GPP_C16                  0x08050010
#define GPIO_VER2_H_GPP_C17                  0x08050011
#define GPIO_VER2_H_GPP_C18                  0x08050012
#define GPIO_VER2_H_GPP_C19                  0x08050013
#define GPIO_VER2_H_GPP_C20                  0x08050014
#define GPIO_VER2_H_GPP_C21                  0x08050015
#define GPIO_VER2_H_GPP_C22                  0x08050016
#define GPIO_VER2_H_GPP_C23                  0x08050017

#define GPIO_VER2_H_GPP_S0                   0x08060000
#define GPIO_VER2_H_GPP_S1                   0x08060001
#define GPIO_VER2_H_GPP_S2                   0x08060002
#define GPIO_VER2_H_GPP_S3                   0x08060003
#define GPIO_VER2_H_GPP_S4                   0x08060004
#define GPIO_VER2_H_GPP_S5                   0x08060005
#define GPIO_VER2_H_GPP_S6                   0x08060006
#define GPIO_VER2_H_GPP_S7                   0x08060007

#define GPIO_VER2_H_GPP_G0                   0x08070000
#define GPIO_VER2_H_GPP_G1                   0x08070001
#define GPIO_VER2_H_GPP_G2                   0x08070002
#define GPIO_VER2_H_GPP_G3                   0x08070003
#define GPIO_VER2_H_GPP_G4                   0x08070004
#define GPIO_VER2_H_GPP_G5                   0x08070005
#define GPIO_VER2_H_GPP_G6                   0x08070006
#define GPIO_VER2_H_GPP_G7                   0x08070007
#define GPIO_VER2_H_GPP_G8                   0x08070008
#define GPIO_VER2_H_GPP_G9                   0x08070009
#define GPIO_VER2_H_GPP_G10                  0x0807000A
#define GPIO_VER2_H_GPP_G11                  0x0807000B
#define GPIO_VER2_H_GPP_G12                  0x0807000C
#define GPIO_VER2_H_GPP_G13                  0x0807000D
#define GPIO_VER2_H_GPP_G14                  0x0807000E
#define GPIO_VER2_H_GPP_G15                  0x0807000F

#define GPIO_VER2_H_VGPIO0                   0x08080000
#define GPIO_VER2_H_VGPIO4                   0x08080001
#define GPIO_VER2_H_VGPIO5                   0x08080002
#define GPIO_VER2_H_VGPIO6                   0x08080003
#define GPIO_VER2_H_VGPIO7                   0x08080004
#define GPIO_VER2_H_VGPIO8                   0x08080005
#define GPIO_VER2_H_VGPIO9                   0x08080006
#define GPIO_VER2_H_VGPIO10                  0x08080007
#define GPIO_VER2_H_VGPIO11                  0x08080008
#define GPIO_VER2_H_VGPIO12                  0x08080009
#define GPIO_VER2_H_VGPIO13                  0x0808000A
#define GPIO_VER2_H_VGPIO18                  0x0808000B
#define GPIO_VER2_H_VGPIO19                  0x0808000C
#define GPIO_VER2_H_VGPIO20                  0x0808000D
#define GPIO_VER2_H_VGPIO21                  0x0808000E
#define GPIO_VER2_H_VGPIO22                  0x0808000F
#define GPIO_VER2_H_VGPIO23                  0x08080010
#define GPIO_VER2_H_VGPIO24                  0x08080011
#define GPIO_VER2_H_VGPIO25                  0x08080012
#define GPIO_VER2_H_VGPIO30                  0x08080013
#define GPIO_VER2_H_VGPIO31                  0x08080014
#define GPIO_VER2_H_VGPIO32                  0x08080015
#define GPIO_VER2_H_VGPIO33                  0x08080016
#define GPIO_VER2_H_VGPIO34                  0x08080017
#define GPIO_VER2_H_VGPIO35                  0x08080018
#define GPIO_VER2_H_VGPIO36                  0x08080019
#define GPIO_VER2_H_VGPIO37                  0x0808001A

#define GPIO_VER2_H_GPD0                     0x08090000
#define GPIO_VER2_H_GPD1                     0x08090001
#define GPIO_VER2_H_GPD2                     0x08090002
#define GPIO_VER2_H_GPD3                     0x08090003
#define GPIO_VER2_H_GPD4                     0x08090004
#define GPIO_VER2_H_GPD5                     0x08090005
#define GPIO_VER2_H_GPD6                     0x08090006
#define GPIO_VER2_H_GPD7                     0x08090007
#define GPIO_VER2_H_GPD8                     0x08090008
#define GPIO_VER2_H_GPD9                     0x08090009
#define GPIO_VER2_H_GPD10                    0x0809000A
#define GPIO_VER2_H_GPD11                    0x0809000B
#define GPIO_VER2_H_GPD12                    0x0809000C
#define GPIO_VER2_H_SLP_LANB                 0x0809000D
#define GPIO_VER2_H_SLP_SUSB                 0x0809000E
#define GPIO_VER2_H_WAKEB                    0x0809000F
#define GPIO_VER2_H_DRAM_RESETB              0x08090010

#define GPIO_VER2_H_GPP_E0                   0x080A0000
#define GPIO_VER2_H_GPP_E1                   0x080A0001
#define GPIO_VER2_H_GPP_E2                   0x080A0002
#define GPIO_VER2_H_GPP_E3                   0x080A0003
#define GPIO_VER2_H_GPP_E4                   0x080A0004
#define GPIO_VER2_H_GPP_E5                   0x080A0005
#define GPIO_VER2_H_GPP_E6                   0x080A0006
#define GPIO_VER2_H_GPP_E7                   0x080A0007
#define GPIO_VER2_H_GPP_E8                   0x080A0008
#define GPIO_VER2_H_GPP_E9                   0x080A0009
#define GPIO_VER2_H_GPP_E10                  0x080A000A
#define GPIO_VER2_H_GPP_E11                  0x080A000B
#define GPIO_VER2_H_GPP_E12                  0x080A000C

#define GPIO_VER2_H_GPP_F0                   0x080B0000
#define GPIO_VER2_H_GPP_F1                   0x080B0001
#define GPIO_VER2_H_GPP_F2                   0x080B0002
#define GPIO_VER2_H_GPP_F3                   0x080B0003
#define GPIO_VER2_H_GPP_F4                   0x080B0004
#define GPIO_VER2_H_GPP_F5                   0x080B0005
#define GPIO_VER2_H_GPP_F6                   0x080B0006
#define GPIO_VER2_H_GPP_F7                   0x080B0007
#define GPIO_VER2_H_GPP_F8                   0x080B0008
#define GPIO_VER2_H_GPP_F9                   0x080B0009
#define GPIO_VER2_H_GPP_F10                  0x080B000A
#define GPIO_VER2_H_GPP_F11                  0x080B000B
#define GPIO_VER2_H_GPP_F12                  0x080B000C
#define GPIO_VER2_H_GPP_F13                  0x080B000D
#define GPIO_VER2_H_GPP_F14                  0x080B000E
#define GPIO_VER2_H_GPP_F15                  0x080B000F
#define GPIO_VER2_H_GPP_F16                  0x080B0010
#define GPIO_VER2_H_GPP_F17                  0x080B0011
#define GPIO_VER2_H_GPP_F18                  0x080B0012
#define GPIO_VER2_H_GPP_F19                  0x080B0013
#define GPIO_VER2_H_GPP_F20                  0x080B0014
#define GPIO_VER2_H_GPP_F21                  0x080B0015
#define GPIO_VER2_H_GPP_F22                  0x080B0016
#define GPIO_VER2_H_GPP_F23                  0x080B0017

#define GPIO_VER2_H_VGPIO_PCIE_0             0x080C0000
#define GPIO_VER2_H_VGPIO_PCIE_1             0x080C0001
#define GPIO_VER2_H_VGPIO_PCIE_2             0x080C0002
#define GPIO_VER2_H_VGPIO_PCIE_3             0x080C0003
#define GPIO_VER2_H_VGPIO_PCIE_4             0x080C0004
#define GPIO_VER2_H_VGPIO_PCIE_5             0x080C0005
#define GPIO_VER2_H_VGPIO_PCIE_6             0x080C0006
#define GPIO_VER2_H_VGPIO_PCIE_7             0x080C0007
#define GPIO_VER2_H_VGPIO_PCIE_8             0x080C0008
#define GPIO_VER2_H_VGPIO_PCIE_9             0x080C0009
#define GPIO_VER2_H_VGPIO_PCIE_10            0x080C000A
#define GPIO_VER2_H_VGPIO_PCIE_11            0x080C000B
#define GPIO_VER2_H_VGPIO_PCIE_12            0x080C000C
#define GPIO_VER2_H_VGPIO_PCIE_13            0x080C000D
#define GPIO_VER2_H_VGPIO_PCIE_14            0x080C000E
#define GPIO_VER2_H_VGPIO_PCIE_15            0x080C000F
#define GPIO_VER2_H_VGPIO_PCIE_16            0x080C0010
#define GPIO_VER2_H_VGPIO_PCIE_17            0x080C0011
#define GPIO_VER2_H_VGPIO_PCIE_18            0x080C0012
#define GPIO_VER2_H_VGPIO_PCIE_19            0x080C0013
#define GPIO_VER2_H_VGPIO_PCIE_20            0x080C0014
#define GPIO_VER2_H_VGPIO_PCIE_21            0x080C0015
#define GPIO_VER2_H_VGPIO_PCIE_22            0x080C0016
#define GPIO_VER2_H_VGPIO_PCIE_23            0x080C0017
#define GPIO_VER2_H_VGPIO_PCIE_24            0x080C0018
#define GPIO_VER2_H_VGPIO_PCIE_25            0x080C0019
#define GPIO_VER2_H_VGPIO_PCIE_26            0x080C001A
#define GPIO_VER2_H_VGPIO_PCIE_27            0x080C001B
#define GPIO_VER2_H_VGPIO_PCIE_28            0x080C001C
#define GPIO_VER2_H_VGPIO_PCIE_29            0x080C001D
#define GPIO_VER2_H_VGPIO_PCIE_30            0x080C001E
#define GPIO_VER2_H_VGPIO_PCIE_31            0x080C001F
#define GPIO_VER2_H_VGPIO_PCIE_32            0x080C0020
#define GPIO_VER2_H_VGPIO_PCIE_33            0x080C0021
#define GPIO_VER2_H_VGPIO_PCIE_34            0x080C0022
#define GPIO_VER2_H_VGPIO_PCIE_35            0x080C0023
#define GPIO_VER2_H_VGPIO_PCIE_36            0x080C0024
#define GPIO_VER2_H_VGPIO_PCIE_37            0x080C0025
#define GPIO_VER2_H_VGPIO_PCIE_38            0x080C0026
#define GPIO_VER2_H_VGPIO_PCIE_39            0x080C0027
#define GPIO_VER2_H_VGPIO_PCIE_40            0x080C0028
#define GPIO_VER2_H_VGPIO_PCIE_41            0x080C0029
#define GPIO_VER2_H_VGPIO_PCIE_42            0x080C002A
#define GPIO_VER2_H_VGPIO_PCIE_43            0x080C002B
#define GPIO_VER2_H_VGPIO_PCIE_44            0x080C002C
#define GPIO_VER2_H_VGPIO_PCIE_45            0x080C002D
#define GPIO_VER2_H_VGPIO_PCIE_46            0x080C002E
#define GPIO_VER2_H_VGPIO_PCIE_47            0x080C002F
#define GPIO_VER2_H_VGPIO_PCIE_48            0x080C0030
#define GPIO_VER2_H_VGPIO_PCIE_49            0x080C0031
#define GPIO_VER2_H_VGPIO_PCIE_50            0x080C0032
#define GPIO_VER2_H_VGPIO_PCIE_51            0x080C0033
#define GPIO_VER2_H_VGPIO_PCIE_52            0x080C0034
#define GPIO_VER2_H_VGPIO_PCIE_53            0x080C0035
#define GPIO_VER2_H_VGPIO_PCIE_54            0x080C0036
#define GPIO_VER2_H_VGPIO_PCIE_55            0x080C0037
#define GPIO_VER2_H_VGPIO_PCIE_56            0x080C0038
#define GPIO_VER2_H_VGPIO_PCIE_57            0x080C0039
#define GPIO_VER2_H_VGPIO_PCIE_58            0x080C003A
#define GPIO_VER2_H_VGPIO_PCIE_59            0x080C003B
#define GPIO_VER2_H_VGPIO_PCIE_60            0x080C003C
#define GPIO_VER2_H_VGPIO_PCIE_61            0x080C003D
#define GPIO_VER2_H_VGPIO_PCIE_62            0x080C003E
#define GPIO_VER2_H_VGPIO_PCIE_63            0x080C003F
#define GPIO_VER2_H_VGPIO_PCIE_64            0x080C0040
#define GPIO_VER2_H_VGPIO_PCIE_65            0x080C0041
#define GPIO_VER2_H_VGPIO_PCIE_66            0x080C0042
#define GPIO_VER2_H_VGPIO_PCIE_67            0x080C0043
#define GPIO_VER2_H_VGPIO_PCIE_68            0x080C0044
#define GPIO_VER2_H_VGPIO_PCIE_69            0x080C0045
#define GPIO_VER2_H_VGPIO_PCIE_70            0x080C0046
#define GPIO_VER2_H_VGPIO_PCIE_71            0x080C0047
#define GPIO_VER2_H_VGPIO_PCIE_72            0x080C0048
#define GPIO_VER2_H_VGPIO_PCIE_73            0x080C0049
#define GPIO_VER2_H_VGPIO_PCIE_74            0x080C004A
#define GPIO_VER2_H_VGPIO_PCIE_75            0x080C004B
#define GPIO_VER2_H_VGPIO_PCIE_76            0x080C004C
#define GPIO_VER2_H_VGPIO_PCIE_77            0x080C004D
#define GPIO_VER2_H_VGPIO_PCIE_78            0x080C004E
#define GPIO_VER2_H_VGPIO_PCIE_79            0x080C004F
#define GPIO_VER2_H_VGPIO_PCIE_80            0x080C0050
#define GPIO_VER2_H_VGPIO_PCIE_81            0x080C0051
#define GPIO_VER2_H_VGPIO_PCIE_82            0x080C0052
#define GPIO_VER2_H_VGPIO_PCIE_83            0x080C0053

#define GPIO_VER2_H_GPP_H0                   0x080D0000
#define GPIO_VER2_H_GPP_H1                   0x080D0001
#define GPIO_VER2_H_GPP_H2                   0x080D0002
#define GPIO_VER2_H_GPP_H3                   0x080D0003
#define GPIO_VER2_H_GPP_H4                   0x080D0004
#define GPIO_VER2_H_GPP_H5                   0x080D0005
#define GPIO_VER2_H_GPP_H6                   0x080D0006
#define GPIO_VER2_H_GPP_H7                   0x080D0007
#define GPIO_VER2_H_GPP_H8                   0x080D0008
#define GPIO_VER2_H_GPP_H9                   0x080D0009
#define GPIO_VER2_H_GPP_H10                  0x080D000A
#define GPIO_VER2_H_GPP_H11                  0x080D000B
#define GPIO_VER2_H_GPP_H12                  0x080D000C
#define GPIO_VER2_H_GPP_H13                  0x080D000D
#define GPIO_VER2_H_GPP_H14                  0x080D000E
#define GPIO_VER2_H_GPP_H15                  0x080D000F
#define GPIO_VER2_H_GPP_H16                  0x080D0010
#define GPIO_VER2_H_GPP_H17                  0x080D0011
#define GPIO_VER2_H_GPP_H18                  0x080D0012
#define GPIO_VER2_H_GPP_H19                  0x080D0013
#define GPIO_VER2_H_GPP_H20                  0x080D0014
#define GPIO_VER2_H_GPP_H21                  0x080D0015
#define GPIO_VER2_H_GPP_H22                  0x080D0016
#define GPIO_VER2_H_GPP_H23                  0x080D0017

#define GPIO_VER2_H_GPP_J0                   0x080E0000
#define GPIO_VER2_H_GPP_J1                   0x080E0001
#define GPIO_VER2_H_GPP_J2                   0x080E0002
#define GPIO_VER2_H_GPP_J3                   0x080E0003
#define GPIO_VER2_H_GPP_J4                   0x080E0004
#define GPIO_VER2_H_GPP_J5                   0x080E0005
#define GPIO_VER2_H_GPP_J6                   0x080E0006
#define GPIO_VER2_H_GPP_J7                   0x080E0007
#define GPIO_VER2_H_GPP_J8                   0x080E0008
#define GPIO_VER2_H_GPP_J9                   0x080E0009

#define GPIO_VER2_H_GPP_K0                   0x080F0000
#define GPIO_VER2_H_GPP_K1                   0x080F0001
#define GPIO_VER2_H_GPP_K2                   0x080F0002
#define GPIO_VER2_H_GPP_K3                   0x080F0003
#define GPIO_VER2_H_GPP_K4                   0x080F0004
#define GPIO_VER2_H_GPP_K5                   0x080F0005
#define GPIO_VER2_H_GPP_K6                   0x080F0006
#define GPIO_VER2_H_GPP_K7                   0x080F0007
#define GPIO_VER2_H_GPP_K8                   0x080F0008
#define GPIO_VER2_H_GPP_K9                   0x080F0009
#define GPIO_VER2_H_GPP_K10                  0x080F000A
#define GPIO_VER2_H_GPP_K11                  0x080F000B
#define GPIO_VER2_H_SYS_PWROK                0x080F000C
#define GPIO_VER2_H_SYS_RESETB               0x080F000D
#define GPIO_VER2_H_MLK_RSTB                 0x080F000E

#define GPIO_VER2_H_GPP_I0                   0x08100000
#define GPIO_VER2_H_GPP_I1                   0x08100001
#define GPIO_VER2_H_GPP_I2                   0x08100002
#define GPIO_VER2_H_GPP_I3                   0x08100003
#define GPIO_VER2_H_GPP_I4                   0x08100004
#define GPIO_VER2_H_GPP_I5                   0x08100005
#define GPIO_VER2_H_GPP_I6                   0x08100006
#define GPIO_VER2_H_GPP_I7                   0x08100007
#define GPIO_VER2_H_GPP_I8                   0x08100008
#define GPIO_VER2_H_GPP_I9                   0x08100009
#define GPIO_VER2_H_GPP_I10                  0x0810000A
#define GPIO_VER2_H_GPP_I11                  0x0810000B
#define GPIO_VER2_H_GPP_I12                  0x0810000C
#define GPIO_VER2_H_GPP_I13                  0x0810000D
#define GPIO_VER2_H_GPP_I14                  0x0810000E

#define GPIO_VER2_H_JTAG_TDO                 0x08110000
#define GPIO_VER2_H_JTAGX                    0x08110001
#define GPIO_VER2_H_PRDYB                    0x08110002
#define GPIO_VER2_H_PREQB                    0x08110003
#define GPIO_VER2_H_CPU_TRSTB                0x08110004
#define GPIO_VER2_H_JTAG_TDI                 0x08110005
#define GPIO_VER2_H_JTAG_TMS                 0x08110006
#define GPIO_VER2_H_JTAG_TCK                 0x08110007
#define GPIO_VER2_H_DBG_PMODE                0x08110008
#define GPIO_VER2_H_MLK                      0x08110009

#define GPIO_VER2_H_HDACPU_SDI               0x08120000
#define GPIO_VER2_H_HDACPU_SDO               0x08120001
#define GPIO_VER2_H_HDACPU_BCLK              0x08120002
#define GPIO_VER2_H_PM_SYNC                  0x08120003
#define GPIO_VER2_H_PECI                     0x08120004
#define GPIO_VER2_H_CPUPWRGD                 0x08120005
#define GPIO_VER2_H_THRMTRIPB                0x08120006
#define GPIO_VER2_H_PLTRST_CPUB              0x08120007
#define GPIO_VER2_H_PM_DOWN                  0x08120008
#define GPIO_VER2_H_TRIGGER_IN               0x08120009
#define GPIO_VER2_H_TRIGGER_OUT              0x0812000A
#define GPIO_VER2_H_CLKOUT_CPURTC            0x0812000B
#define GPIO_VER2_H_VCCST_OVERRIDE           0x0812000C
#define GPIO_VER2_H_C10_WAKE                 0x0812000D

//
// GPIO Pin Muxing
// Determines a selection of physical pad for a given signal.
// Please refer to GPIO_NATIVE_PAD type.
// If certain signal is not listed below it means that it can be enabled
// only on a single pad and musing setting is not needed.
//
#define GPIO_VER2_H_MUXING_SERIALIO_UART0_RXD_GPP_C8         (GPIO_NATIVE_PAD_DEF (GPIO_VER2_H_GPP_C8,  1, GPIO_FUNCTION_SERIAL_IO_UART_RX(0)))
#define GPIO_VER2_H_MUXING_SERIALIO_UART0_RXD_GPP_J3         (GPIO_NATIVE_PAD_DEF (GPIO_VER2_H_GPP_J3,  2, GPIO_FUNCTION_SERIAL_IO_UART_RX(0)))

#endif // _GPIO_PINS_VER2_H_H_
