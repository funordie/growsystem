################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
INO_SRCS += \
../GrowinSystem.ino 

CPP_SRCS += \
../.ino.cpp 

LINK_OBJ += \
./.ino.cpp.o 

INO_DEPS += \
./GrowinSystem.ino.d 

CPP_DEPS += \
./.ino.cpp.d 


# Each subdirectory must supply rules for building sources it contributes
.ino.cpp.o: ../.ino.cpp
	@echo 'Building file: $<'
	@echo 'Starting C++ compile'
	"/home/ipaev/arduino-1.6.5-r5/hardware/tools/avr/bin/avr-g++" -c -g -Os -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -MMD -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10605 -DARDUINO_AVR_UNO -DARDUINO_ARCH_AVR     -I"/home/ipaev/arduino-1.6.5-r5/hardware/arduino/avr/cores/arduino" -I"/home/ipaev/arduino-1.6.5-r5/hardware/arduino/avr/variants/standard" -I"/home/ipaev/source/GrowinSystem/moisture" -I"/home/ipaev/arduino-1.6.5-r5/libraries/Adafruit_SSD1306" -I"/home/ipaev/arduino-1.6.5-r5/hardware/arduino/avr/libraries/SPI" -I"/home/ipaev/arduino-1.6.5-r5/hardware/arduino/avr/libraries/Wire" -I"/home/ipaev/arduino-1.6.5-r5/hardware/arduino/avr/libraries/Wire/utility" -I"/home/ipaev/arduino-1.6.5-r5/libraries/AdafruitGFXLibrarymaster" -I"/home/ipaev/source/GrowinSystem/ssd1306" -I"/home/ipaev/source/GrowinSystem/demo" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -D__IN_ECLIPSE__=1 -x c++ "$<"  -o  "$@"   -Wall
	@echo 'Finished building: $<'
	@echo ' '

GrowinSystem.o: ../GrowinSystem.ino
	@echo 'Building file: $<'
	@echo 'Starting C++ compile'
	"/home/ipaev/arduino-1.6.5-r5/hardware/tools/avr/bin/avr-g++" -c -g -Os -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -MMD -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10605 -DARDUINO_AVR_UNO -DARDUINO_ARCH_AVR     -I"/home/ipaev/arduino-1.6.5-r5/hardware/arduino/avr/cores/arduino" -I"/home/ipaev/arduino-1.6.5-r5/hardware/arduino/avr/variants/standard" -I"/home/ipaev/source/GrowinSystem/moisture" -I"/home/ipaev/arduino-1.6.5-r5/libraries/Adafruit_SSD1306" -I"/home/ipaev/arduino-1.6.5-r5/hardware/arduino/avr/libraries/SPI" -I"/home/ipaev/arduino-1.6.5-r5/hardware/arduino/avr/libraries/Wire" -I"/home/ipaev/arduino-1.6.5-r5/hardware/arduino/avr/libraries/Wire/utility" -I"/home/ipaev/arduino-1.6.5-r5/libraries/AdafruitGFXLibrarymaster" -I"/home/ipaev/source/GrowinSystem/ssd1306" -I"/home/ipaev/source/GrowinSystem/demo" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -D__IN_ECLIPSE__=1 -x c++ "$<"  -o  "$@"   -Wall
	@echo 'Finished building: $<'
	@echo ' '


