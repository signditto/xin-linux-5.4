/* SPDX-License-Identifier: GPL-2.0-only */
/*
 * Copyright (C) 2020 Nuvoton Technology Corporation.
 */

#ifndef __DT_BINDINGS_CLOCK_MA35D1_H
#define __DT_BINDINGS_CLOCK_MA35D1_H


#define	hxt			0
#define	hxt_gate		1
#define	lxt			2
#define	lxt_gate		3
#define	hirc			4
#define	hirc_gate		5
#define	lirc			6
#define	lirc_gate		7
#define	capll			8
#define	syspll			9
#define	ddrpll			10
#define	apll			11
#define	epll			12
#define	vpll			13
#define	epll_div2		14
#define	epll_div4		15
#define	epll_div8		16
#define	ca35clk_mux		17
#define	axiclk_div2		18
#define	axiclk_div4		19
#define	axiclk_mux		20
#define	sysclk0_mux		21
#define	sysclk1_mux		22
#define	sysclk1_div2		23
#define	hclk0			24
#define	hclk1			25
#define	hclk2			26
#define	pclk0			27
#define	pclk1			28
#define	pclk2			29
#define	hclk3			30
#define	pclk3			31
#define	pclk4			32
#define	usbphy0			33
#define	usbphy1			34
#define	ddr0_gate		35
#define	ddr6_gate		36
#define	can0_mux		37
#define	can0_div		38
#define	can0_gate		39
#define	can1_mux		40
#define	can1_div		41
#define	can1_gate		42
#define	can2_mux		43
#define	can2_div		44
#define	can2_gate		45
#define	can3_mux		46
#define	can3_div		47
#define	can3_gate		48
#define	sdh0_mux		49
#define	sdh0_gate		50
#define	sdh1_mux		51
#define	sdh1_gate		52
#define	nand_gate		53
#define	usbd_gate		54
#define	usbh_gate		55
#define	husbh0_gate		56
#define	husbh1_gate		57
#define	gfx_mux			58
#define	gfx_gate		59
#define	vc8k_gate		60
#define	dcu_mux			61
#define	dcu_gate		62
#define	dcup_mux		63
#define	dcup_div		64
#define	emac0_gate		65
#define	emac1_gate		66
#define	ccap0_mux		67
#define	ccap0_div		68
#define	ccap0_gate		69
#define	ccap1_mux		70
#define	ccap1_div		71
#define	ccap1_gate		72
#define	pdma0_gate		73
#define	pdma1_gate		74
#define	pdma2_gate		75
#define	pdma3_gate		76
#define	wh0_gate		77
#define	wh1_gate		78
#define	hws_gate		79
#define	ebi_gate		80
#define	sram0_gate		81
#define	sram1_gate		82
#define	rom_gate		83
#define	tra_gate		84
#define	dbg_mux			85
#define	dbg_gate		86
#define	cko_mux			87
#define	cko_div			88
#define	cko_gate		89
#define	gtmr_gate		90
#define	gpa_gate		91
#define	gpb_gate		92
#define	gpc_gate		93
#define	gpd_gate		94
#define	gpe_gate		95
#define	gpf_gate		96
#define	gpg_gate		97
#define	gph_gate		98
#define	gpi_gate		99
#define	gpj_gate		100
#define	gpk_gate		101
#define	gpl_gate		102
#define	gpm_gate		103
#define	gpn_gate		104
#define	tmr0_mux		105
#define	tmr0_gate		106
#define	tmr1_mux		107
#define	tmr1_gate		108
#define	tmr2_mux		109
#define	tmr2_gate		110
#define	tmr3_mux		111
#define	tmr3_gate		112
#define	tmr4_mux		113
#define	tmr4_gate		114
#define	tmr5_mux		115
#define	tmr5_gate		116
#define	tmr6_mux		117
#define	tmr6_gate		118
#define	tmr7_mux		119
#define	tmr7_gate		120
#define	tmr8_mux		121
#define	tmr8_gate		122
#define	tmr9_mux		123
#define	tmr9_gate		124
#define	tmr10_mux		125
#define	tmr10_gate		126
#define	tmr11_mux		127
#define	tmr11_gate		128
#define	uart0_mux		129
#define	uart0_div		130
#define	uart0_gate		131
#define	uart1_mux		132
#define	uart1_div		133
#define	uart1_gate		134
#define	uart2_mux		135
#define	uart2_div		136
#define	uart2_gate		137
#define	uart3_mux		138
#define	uart3_div		139
#define	uart3_gate		140
#define	uart4_mux		141
#define	uart4_div		142
#define	uart4_gate		143
#define	uart5_mux		144
#define	uart5_div		145
#define	uart5_gate		146
#define	uart6_mux		147
#define	uart6_div		148
#define	uart6_gate		149
#define	uart7_mux		150
#define	uart7_div		151
#define	uart7_gate		152
#define	uart8_mux		153
#define	uart8_div		154
#define	uart8_gate		155
#define	uart9_mux		156
#define	uart9_div		157
#define	uart9_gate		158
#define	uart10_mux		159
#define	uart10_div		160
#define	uart10_gate		161
#define	uart11_mux		162
#define	uart11_div		163
#define	uart11_gate		164
#define	uart12_mux		165
#define	uart12_div		166
#define	uart12_gate		167
#define	uart13_mux		168
#define	uart13_div		169
#define	uart13_gate		170
#define	uart14_mux		171
#define	uart14_div		172
#define	uart14_gate		173
#define	uart15_mux		174
#define	uart15_div		175
#define	uart15_gate		176
#define	uart16_mux		177
#define	uart16_div		178
#define	uart16_gate		179
#define	rtc_gate		180
#define	ddr_gate		181
#define	kpi_mux			182
#define	kpi_div			183
#define	kpi_gate		184
#define	i2c0_gate		185
#define	i2c1_gate		186
#define	i2c2_gate		187
#define	i2c3_gate		188
#define	i2c4_gate		189
#define	i2c5_gate		190
#define	qspi0_mux		191
#define	qspi0_gate		192
#define	qspi1_mux		193
#define	qspi1_gate		194
#define	smc0_mux		195
#define	smc0_div		196
#define	smc0_gate		197
#define	smc1_mux		198
#define	smc1_div		199
#define	smc1_gate		200
#define	wdt0_mux		201
#define	wdt0_gate		202
#define	wdt1_mux		203
#define	wdt1_gate		204
#define	wdt2_mux		205
#define	wdt2_gate		206
#define	wwdt0_mux		207
#define	wwdt1_mux		208
#define	wwdt2_mux		209
#define	epwm0_gate		210
#define	epwm1_gate		211
#define	epwm2_gate		212
#define	i2s0_mux		213
#define	i2s0_gate		214
#define	i2s1_mux		215
#define	i2s1_gate		216
#define	ssmcc_gate		217
#define	sspcc_gate		218
#define	spi0_mux		219
#define	spi0_gate		220
#define	spi1_mux		221
#define	spi1_gate		222
#define	spi2_mux		223
#define	spi2_gate		224
#define	spi3_mux		225
#define	spi3_gate		226
#define	ecap0_gate		227
#define	ecap1_gate		228
#define	ecap2_gate		229
#define	qei0_gate		230
#define	qei1_gate		231
#define	qei2_gate		232
#define	adc_div			233
#define	adc_gate		234
#define	eadc_div		235
#define	eadc_gate		236
#define	clk_max			237

#endif
