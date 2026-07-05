#ifndef LWIPOPTS_H
#define LWIPOPTS_H

#define NO_SYS                  1
#define LWIP_NETIF_HOSTNAME     1
#define BOARDNAME               "TC387TFT_SDV"

#define MEM_ALIGNMENT           4
#define MEM_SIZE                (25 * 1024)

/* Static IP (see Ifx_Lwip_init()) to match the Vector 차량용 이더넷 통신 실습
 * exercises (TC387=192.168.2.20, PC=192.168.2.10) instead of DHCP. */
#define LWIP_DHCP               0
#define LWIP_NETCONN            0
#define LWIP_SOCKET             0

#define SYS_LIGHTWEIGHT_PROT    0
#define ETH_PAD_SIZE            2

#define LWIP_NETIF_EXT_STATUS_CALLBACK  1

/* arch/cc.h has an #error if LWIP_DEBUG is left undefined - keep it defined. */
#define __LWIP_DEBUG__
#define LWIP_DEBUG
#define IFX_LWIP_DEBUG          LWIP_DBG_ON
#define DHCP_DEBUG              LWIP_DBG_OFF
#define NETIF_DEBUG             LWIP_DBG_ON
#define LWIP_DBG_TYPES_ON       LWIP_DBG_STATE

#endif /* LWIPOPTS_H */
