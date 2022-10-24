
#ifndef __BSW_H__
#define __BSW_H__

#if Micro == 0
void Init_bsw();
void delay_bsw();
#define blink_led() HAL_GPIO_TogglePin(GPIOC,GPIO_PIN_13)
#define delay_bsw() HAL_Delay(1000)
#else
void Init_bsw();
void delay_bsw();
#define blink_led() HAL_GPIO_TogglePin(GPIOC,GPIO_PIN_13)
#define delay_bsw() HAL_Delay(100)
#endif

#endif