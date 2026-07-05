#ifndef CONFIGURATION_H
#define CONFIGURATION_H

#include "Ifx_Cfg.h"
#include <_PinMap/IfxGeth_PinMap.h>

/* Which CPU core services the Ethernet (GETH) interrupts */
#define CPU_WHICH_SERVICE_ETHERNET  0

/* STM ticks per millisecond, used to drive the 1ms LwIP tick (Cpu0_Main.c).
 * Reused from Infineon's official Ethernet_1_KIT_TC397_TFT example (same AURIX
 * 2G STM base clock) - re-verify against measured timing on first bring-up. */
#define IFX_CFG_STM_TICKS_PER_MS    100000

/* RGMII pin assignment for the onboard Realtek RTL8211FI-CG PHY.
 * Application Kit TC3X7 TFT board (P11/P12) - identical pinout on the
 * TC387 TFT and TC397 TFT variants since it is the same physical board,
 * confirmed against Libraries/iLLD/TC3xx/Tricore/_PinMap/TC38x/
 * IfxGeth_PinMap_TC38x_LFBGA292.h */
#define ETH_GREFCLK_PIN IfxGeth_GREFCLK_P11_5_IN
#define ETH_RXCTL_PIN   IfxGeth_RXCTLA_P11_11_IN
#define ETH_RXCLK_PIN   IfxGeth_RXCLKA_P11_12_IN
#define ETH_RXD0_PIN    IfxGeth_RXD0A_P11_10_IN
#define ETH_RXD1_PIN    IfxGeth_RXD1A_P11_9_IN
#define ETH_RXD2_PIN    IfxGeth_RXD2A_P11_8_IN
#define ETH_RXD3_PIN    IfxGeth_RXD3A_P11_7_IN
#define ETH_MDC_PIN     IfxGeth_MDC_P12_0_OUT
#define ETH_MDIO_PIN    IfxGeth_MDIO_P12_1_INOUT
#define ETH_TXD0_PIN    IfxGeth_TXD0_P11_3_OUT
#define ETH_TXD1_PIN    IfxGeth_TXD1_P11_2_OUT
#define ETH_TXD2_PIN    IfxGeth_TXD2_P11_1_OUT
#define ETH_TXD3_PIN    IfxGeth_TXD3_P11_0_OUT
#define ETH_TXCTL_PIN   IfxGeth_TXCTL_P11_6_OUT
#define ETH_TXCLK_PIN   IfxGeth_TXCLK_P11_4_OUT

/* Port numbers used across the Vector 차량용 이더넷 통신 실습 exercises.
 * This Ethernet bring-up step only wires up TCP echo (1000) and UDP echo
 * (3000, both hardcoded in examples/tcp_echo.c and examples/udp_echo.c).
 * The remaining macros mirror the TC375LK_NGV lecture project so SOME/IP
 * and DoIP can be ported later without renumbering. */
#define PN_MY                   30400
#define PN_DoIP                 13400
#define PN_SD                   30490
#define PN_SOMEIPSD             30490
#define PN_SERVICE_1            30509
#define ETH_SOMEIP_PROT_VER     0x01
#define ETH_SOMEIP_IFACE_VER    0x01

#endif /* CONFIGURATION_H */
