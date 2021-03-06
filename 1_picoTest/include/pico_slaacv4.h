/*********************************************************************
   PicoTCP. Copyright (c) 2012 TASS Belgium NV. Some rights reserved.
   See LICENSE and COPYING for usage.

   Authors: Bogdan Lupu
 *********************************************************************/
#ifndef INCLUDE_PICO_SUPPORT_SLAACV4
#define INCLUDE_PICO_SUPPORT_SLAACV4
#include "pico_arp.h"

#define PICO_SLAACV4_SUCCESS  0
#define PICO_SLAACV4_ERROR    1

int     pico_slaacv4_claimip(struct pico_device *dev, void (*cb)(struct pico_ip4 *ip,  uint8_t code));
void    pico_slaacv4_unregisterip(void);

#endif /* _INCLUDE_PICO_SUPPORT_SLAACV4 */

