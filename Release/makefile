################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include subdir.mk
-include ssd1306/subdir.mk
-include moisture/subdir.mk
-include dht11/subdir.mk
-include demo/subdir.mk
-include arduino/core/subdir.mk
-include Libraries/idDHT11/subdir.mk
-include Libraries/Wire/utility/subdir.mk
-include Libraries/Wire/subdir.mk
-include Libraries/SPI/subdir.mk
-include Libraries/OneWire/subdir.mk
-include Libraries/Adafruit_SSD1306/subdir.mk
-include Libraries/AdafruitGFXLibrarymaster/subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(CC_DEPS)),)
-include $(CC_DEPS)
endif
ifneq ($(strip $(C++_DEPS)),)
-include $(C++_DEPS)
endif
ifneq ($(strip $(C_UPPER_DEPS)),)
-include $(C_UPPER_DEPS)
endif
ifneq ($(strip $(CXX_DEPS)),)
-include $(CXX_DEPS)
endif
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(INO_DEPS)),)
-include $(INO_DEPS)
endif
ifneq ($(strip $(PDE_DEPS)),)
-include $(PDE_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(CPP_DEPS)),)
-include $(CPP_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
AR += \
arduino.ar \

ELF += \
GrowinSystem.elf \

EEP += \
GrowinSystem.eep \

FLASH_IMAGE += \
GrowinSystem.hex \


# All Target
all: GrowinSystem

# Tool invocations
GrowinSystem: $(FLASH_IMAGE)
	@echo 'Building target: $@'
	@echo 'Printing size:'
	"/home/ipaev/arduino-1.6.5-r5/hardware/tools/avr/bin/avr-size" -A "/home/ipaev/source/GrowinSystem/Release/GrowinSystem.elf"
	@echo 'Finished building target: $@'
	@echo ' '

arduino.ar: $(AR_OBJ)
	@echo 'Starting archiver'
	"/home/ipaev/arduino-1.6.5-r5/hardware/tools/avr/bin/avr-ar" rcs  "/home/ipaev/source/GrowinSystem/Release/arduino.ar"   $(AR_OBJ)
	@echo 'Finished building: $@'
	@echo ' '

GrowinSystem.elf: $(LINK_OBJ) $(AR)
	@echo 'Starting combiner'
	"/home/ipaev/arduino-1.6.5-r5/hardware/tools/avr/bin/avr-gcc" -Os -Wl,--gc-sections -mmcu=atmega328p  -o "/home/ipaev/source/GrowinSystem/Release/GrowinSystem.elf"   $(LINK_OBJ) $(AR)  "/home/ipaev/source/GrowinSystem/Release/arduino.ar" "-L/home/ipaev/source/GrowinSystem/Release" -lm
	@echo 'Finished building: $@'
	@echo ' '

GrowinSystem.eep: $(ELF)
	@echo 'Create eeprom image'
	"/home/ipaev/arduino-1.6.5-r5/hardware/tools/avr/bin/avr-objcopy" -O ihex -j .eeprom --set-section-flags=.eeprom=alloc,load --no-change-warnings --change-section-lma .eeprom=0  "/home/ipaev/source/GrowinSystem/Release/GrowinSystem.elf" "/home/ipaev/source/GrowinSystem/Release/GrowinSystem.eep"
	@echo 'Finished building: $@'
	@echo ' '

GrowinSystem.hex: $(EEP)
	@echo 'Create Flash image (ihex format)'
	"/home/ipaev/arduino-1.6.5-r5/hardware/tools/avr/bin/avr-objcopy" -O ihex -R .eeprom  "/home/ipaev/source/GrowinSystem/Release/GrowinSystem.elf" "/home/ipaev/source/GrowinSystem/Release/GrowinSystem.hex"
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(C_UPPER_DEPS)$(PDE_DEPS)$(C_DEPS)$(AR)$(EEP)$(FLASH_IMAGE)$(CC_DEPS)$(AR_OBJ)$(C++_DEPS)$(LINK_OBJ)$(CXX_DEPS)$(ASM_DEPS)$(INO_DEPS)$(SIZEDUMMY)$(S_UPPER_DEPS)$(ELF)$(CPP_DEPS) GrowinSystem
	-@echo ' '

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
