Example Description:
    This application demonstrates the usage of the Mcu Driver.
    The application includes an EB Tresos project that configures the Base, Mcu, Platform and Resource drivers.
    The application software functionality:
        - Mcu_Init, Mcu_InitClock, Mcu_DistributePllClock, Mcu_SetMode, Mcu_GetClockFrequency
            Initialize the clock sources, the clock tree and to configure the clock gating of the peripherals.
            The clock configuration that is used will enable and use the PLL as source clock.   
        - Config FXOSC_CLK frequency to 16MHz and PLL_CLK to 960MHz, the other clock value is referred from the reference manual: Option A - High-Performance Mode.
Hardware:
    SCH-47478 REV A/SCH-47478 REV C
Software:
    SW32K3_RTD_4.4_1.0.0
