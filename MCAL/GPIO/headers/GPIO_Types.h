#ifndef GPIO_TYPES_H_
#define GPIO_TYPES_H_

#define DIR_OUTPUT(PORT,PIN)            SETBIT((PORT).GPIODIR,PIN)
#define DIR_INPUT(PORT,PIN)		        CLRBIT((PORT).GPIODIR,PIN)

#define HIGH_OUTPUT(PORT,INDEX)	        (PORT).GPIODATA[INDEX]=0xFF
#define LOW_OUTPUT(PORT,INDEX)          (PORT).GPIODATA[INDEX]=0

#define WRITE_HIGH(PORT,PIN)					SETBIT((PORT).GPIODATA[255],PIN)
#define WRITE_LOW(PORT,PIN)							CLRBIT((PORT).GPIODATA[255],PIN)
#define READ_PIN(PORT,PIN)		        READBIT((PORT).GPIODATA[255], PIN)

#define GPIO_DIR_MODE(PORT,PIN)	        READBIT((PORT).GPIODIR,PIN)
#define ENABLE_PORT_CLOCK(PORT_NUM)     SETBIT(RCGCGPIO,PORT_NUM)

#define UNLOCK_PORT_CONFIG(PORT, PIN) 	(PORT).GPIOLOCK=0x4C4F434B; SETBIT((PORT).GPIOCR,PIN)
#define LOCK_PORT_CONFIG(PORT, PIN)		CLRBIT((PORT).GPIOCR,PIN); (PORT).GPIOLOCK=0

#define DIGITAL_ENABLE(PORT, PIN)		SETBIT((PORT).GPIODEN, PIN)
#define DIGITAL_DISABLE(PORT, PIN)	    CLRBIT((PORT).GPIODEN, PIN)

#endif

