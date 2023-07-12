################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../ecu_layer/source/BCD_SSD.c \
../ecu_layer/source/SSD.c \
../ecu_layer/source/btn.c \
../ecu_layer/source/char_lcd.c \
../ecu_layer/source/dc_motor.c \
../ecu_layer/source/ecu_layer_init.c \
../ecu_layer/source/led.c \
../ecu_layer/source/relay.c 

OBJS += \
./ecu_layer/source/BCD_SSD.o \
./ecu_layer/source/SSD.o \
./ecu_layer/source/btn.o \
./ecu_layer/source/char_lcd.o \
./ecu_layer/source/dc_motor.o \
./ecu_layer/source/ecu_layer_init.o \
./ecu_layer/source/led.o \
./ecu_layer/source/relay.o 

C_DEPS += \
./ecu_layer/source/BCD_SSD.d \
./ecu_layer/source/SSD.d \
./ecu_layer/source/btn.d \
./ecu_layer/source/char_lcd.d \
./ecu_layer/source/dc_motor.d \
./ecu_layer/source/ecu_layer_init.d \
./ecu_layer/source/led.d \
./ecu_layer/source/relay.d 


# Each subdirectory must supply rules for building sources it contributes
ecu_layer/source/%.o: ../ecu_layer/source/%.c ecu_layer/source/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=16000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


