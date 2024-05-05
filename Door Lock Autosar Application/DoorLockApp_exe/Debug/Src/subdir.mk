################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (12.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Src/DIO.c \
../Src/GPIO_program.c \
../Src/OS_program.c \
../Src/RCC_program.c \
../Src/STK_program.c \
../Src/main.c \
../Src/stm32f4xx_hal_msp.c \
../Src/syscalls.c \
../Src/sysmem.c \
../Src/system_stm32f4xx.c 

OBJS += \
./Src/DIO.o \
./Src/GPIO_program.o \
./Src/OS_program.o \
./Src/RCC_program.o \
./Src/STK_program.o \
./Src/main.o \
./Src/stm32f4xx_hal_msp.o \
./Src/syscalls.o \
./Src/sysmem.o \
./Src/system_stm32f4xx.o 

C_DEPS += \
./Src/DIO.d \
./Src/GPIO_program.d \
./Src/OS_program.d \
./Src/RCC_program.d \
./Src/STK_program.d \
./Src/main.d \
./Src/stm32f4xx_hal_msp.d \
./Src/syscalls.d \
./Src/sysmem.d \
./Src/system_stm32f4xx.d 


# Each subdirectory must supply rules for building sources it contributes
Src/%.o Src/%.su Src/%.cyclo: ../Src/%.c Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -c -I"C:/AutoSar Diploma/Lock Door Project/sadsad/Drivers/CMSIS/Device/ST/STM32F4xx/Include" -I"C:/AutoSar Diploma/Lock Door Project/sadsad/Inc" -I"C:/AutoSar Diploma/Lock Door Project/sadsad/Drivers/CMSIS/Include" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Src

clean-Src:
	-$(RM) ./Src/DIO.cyclo ./Src/DIO.d ./Src/DIO.o ./Src/DIO.su ./Src/GPIO_program.cyclo ./Src/GPIO_program.d ./Src/GPIO_program.o ./Src/GPIO_program.su ./Src/OS_program.cyclo ./Src/OS_program.d ./Src/OS_program.o ./Src/OS_program.su ./Src/RCC_program.cyclo ./Src/RCC_program.d ./Src/RCC_program.o ./Src/RCC_program.su ./Src/STK_program.cyclo ./Src/STK_program.d ./Src/STK_program.o ./Src/STK_program.su ./Src/main.cyclo ./Src/main.d ./Src/main.o ./Src/main.su ./Src/stm32f4xx_hal_msp.cyclo ./Src/stm32f4xx_hal_msp.d ./Src/stm32f4xx_hal_msp.o ./Src/stm32f4xx_hal_msp.su ./Src/syscalls.cyclo ./Src/syscalls.d ./Src/syscalls.o ./Src/syscalls.su ./Src/sysmem.cyclo ./Src/sysmem.d ./Src/sysmem.o ./Src/sysmem.su ./Src/system_stm32f4xx.cyclo ./Src/system_stm32f4xx.d ./Src/system_stm32f4xx.o ./Src/system_stm32f4xx.su

.PHONY: clean-Src

