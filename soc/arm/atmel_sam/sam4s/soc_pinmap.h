/*
 * Copyright (c) 2019 Gerson Fernando Budke
 * Copyright (c) 2017 Justin Watson
 * SPDX-License-Identifier: Apache-2.0
 */

/** @file
 * @brief Atmel SAM4S MCU pin definitions.
 *
 * This file contains pin configuration data required by different MCU
 * modules to correctly configure GPIO controller.
 */

#ifndef _ATMEL_SAM4S_SOC_PINMAP_H_
#define _ATMEL_SAM4S_SOC_PINMAP_H_

#include <soc.h>

/* Two-wire Interface (TWI) */

#define PIN_TWI0_TWCK {PIO_PA4A_TWCK0, PIOA, ID_PIOA, SOC_GPIO_FUNC_A}
#define PIN_TWI0_TWD  {PIO_PA3A_TWD0,  PIOA, ID_PIOA, SOC_GPIO_FUNC_A}

#define PINS_TWI0 {PIN_TWI0_TWCK, PIN_TWI0_TWD}

#define PIN_TWI1_TWCK {PIO_PB5A_TWCK1, PIOB, ID_PIOB, SOC_GPIO_FUNC_A}
#define PIN_TWI1_TWD  {PIO_PB4A_TWD1,  PIOB, ID_PIOB, SOC_GPIO_FUNC_A}

#define PINS_TWI1 {PIN_TWI1_TWCK, PIN_TWI1_TWD}

/* Serial Peripheral Interface (SPI) */

#ifdef CONFIG_SPI_SAM_PORT_0_PIN_CS0_PA11
#define PIN_SPI0_CS0 {PIO_PA11A_NPCS0, PIOA, ID_PIOA, SOC_GPIO_FUNC_A}
#endif
#ifdef CONFIG_SPI_SAM_PORT_0_PIN_CS1_PA9
#define PIN_SPI0_CS1 {PIO_PA9B_NPCS1, PIOA, ID_PIOA, SOC_GPIO_FUNC_B}
#endif
#ifdef CONFIG_SPI_SAM_PORT_0_PIN_CS1_PA31
#define PIN_SPI0_CS1 {PIO_PA31A_NPCS1, PIOA, ID_PIOA, SOC_GPIO_FUNC_A}
#endif
#ifdef CONFIG_SPI_SAM_PORT_0_PIN_CS1_PB14
#define PIN_SPI0_CS1 {PIO_PB14A_NPCS1, PIOB, ID_PIOB, SOC_GPIO_FUNC_A}
#endif
#ifdef CONFIG_SPI_SAM_PORT_0_PIN_CS1_PC4
#define PIN_SPI0_CS1 {PIO_PC4B_NPCS1, PIOC, ID_PIOC, SOC_GPIO_FUNC_B}
#endif
#ifdef CONFIG_SPI_SAM_PORT_0_PIN_CS2_PA10
#define PIN_SPI0_CS2 {PIO_PA10B_NPCS2, PIOA, ID_PIOA, SOC_GPIO_FUNC_B}
#endif
#ifdef CONFIG_SPI_SAM_PORT_0_PIN_CS2_PA30
#define PIN_SPI0_CS2 {PIO_PA30B_NPCS2, PIOA, ID_PIOA, SOC_GPIO_FUNC_B}
#endif
#ifdef CONFIG_SPI_SAM_PORT_0_PIN_CS2_PB2
#define PIN_SPI0_CS2 {PIO_PB2B_NPCS2, PIOB, ID_PIOB, SOC_GPIO_FUNC_B}
#endif
#ifdef CONFIG_SPI_SAM_PORT_0_PIN_CS3_PA3
#define PIN_SPI0_CS3 {PIO_PA3B_NPCS3, PIOA, ID_PIOA, SOC_GPIO_FUNC_B}
#endif
#ifdef CONFIG_SPI_SAM_PORT_0_PIN_CS3_PA5
#define PIN_SPI0_CS3 {PIO_PA5B_NPCS3, PIOA, ID_PIOA, SOC_GPIO_FUNC_B}
#endif
#ifdef CONFIG_SPI_SAM_PORT_0_PIN_CS3_PA22
#define PIN_SPI0_CS3 {PIO_PA22B_NPCS3, PIOA, ID_PIOA, SOC_GPIO_FUNC_B}
#endif

#define PINS_SPI0_MASK \
	(PIO_PA12A_MISO | PIO_PA13A_MOSI | PIO_PA14A_SPCK)
#define PINS_SPI0 {PINS_SPI0_MASK, PIOA, ID_PIOA, SOC_GPIO_FUNC_A}

#endif /* _ATMEL_SAM4S_SOC_PINMAP_H_ */
