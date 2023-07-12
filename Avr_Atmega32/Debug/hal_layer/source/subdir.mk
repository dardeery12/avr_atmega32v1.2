################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../hal_layer/source/hal_gpio.c 

OBJS += \
./hal_layer/source/hal_gpio.o 

C_DEPS += \
./hal_layer/source/hal_gpio.d 


# Each subdirectory must supply rules for building sources it contributes
hal_layer/source/%.o: ../hal_layer/source/%.c hal_layer/source/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=16000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


