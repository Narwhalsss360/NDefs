#ifndef NDefs_h
#define NDefs_h

#define NDEFS_VERSION "1.1.0"
#define NDEFS_MAJOR 1
#define NDEFS_MINOR 1
#define NDEFS_PATCH 0

#ifdef ARDUINO_ARCH_AVR
    #define ADC_MAX 1023
    #define PWN_MAX 255

    #define AVR_RESET() ((void (*)(void))0x00)()
#endif

#define reinterpret_c_style(type, origin) *((type *)origin)
#define isBetween(l, v, h) (l < v && v < h)
#define isBetweenOr(l, v, h) (l <= v && v <= h)
#define boolToString(v) (v ? "True" : "False")

#endif
