
#ifndef _CONFIG_H_
#define _CONFIG_H_

//------------------------------ Environment Setting ------------------------------
#define COMPILER_IAR_EWARM
//#define COMPILER_GCC_ARM

#define PLATFORM_W7200_EVB
//#define PLATFORM_W5200_EVB

//#define HOST_STM32F10X	// Host will be set automatically by platform
//#define HOST_8051

//#define DEVICE_W5200	// Device will be set automatically by platform
//#define DEVICE_W5100

#define SYSTEM_LITTLE_ENDIAN	// ( Default )
//#define SYSTEM_BIG_ENDIAN

//------------------------------ Network Setting ------------------------------
#define USE_DHCP	VAL_ENABLE
#define DHCP_ALARM	// if not set, you should handle dhcp manually, if set, need to run 'alarm_run()' funtion in main loop
#define DHCP_ASYNC	// if not set, it works using sync function, if set, need to run 'sockwatch_run()' funtion in main loop

#define DEFAULT_MAC_ADDR	"00:08:DC:11:22:33"
#define DEFAULT_IP_ADDR		"192.168.0.100"
#define DEFAULT_SN_MASK		"255.255.255.0"
#define DEFAULT_GW_ADDR		"192.168.0.1"
#define DEFAULT_DNS_ADDR	"168.126.63.1"

//------------------------------ Etc ------------------------------
#define WIZ_LOG_LEVEL	3		// 0: No print,  1: Error,  2: Error+Log,  3: Error+Log+Debug
#define PRINT_TIME_LOG

#endif

