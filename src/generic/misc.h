#ifndef __GENERIC_MISC_H
#define __GENERIC_MISC_H

#include <stdarg.h> // va_list
#include <stdint.h> // uint8_t

uint16_t read_magic_key(void);
void set_magic_key(void);
void jump_to_application(void);

// Timer Functions
uint32_t timer_from_us(uint32_t us);
uint8_t timer_is_before(uint32_t time1, uint32_t time2);
uint32_t timer_read_time(void);
void udelay(uint32_t usecs);

// Led Commands (generated by buildcommands.py)
void led_init();
void led_toggle();
void led_on();
void led_off();

#endif // misc.h