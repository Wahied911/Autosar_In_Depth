################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (12.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Core/Src/DIO.c \
../Core/Src/GPIO_program.c \
../Core/Src/OS_program.c \
../Core/Src/RCC_program.c \
../Core/Src/STK_program.c \
../Core/Src/main.c \
../Core/Src/stm32f4xx_hal_msp.c \
../Core/Src/syscalls.c \
../Core/Src/sysmem.c \
../Core/Src/system_stm32f4xx.c 

OBJS += \
./Core/Src/DIO.o \
./Core/Src/GPIO_program.o \
./Core/Src/OS_program.o \
./Core/Src/RCC_program.o \
./Core/Src/STK_program.o \
./Core/Src/main.o \
./Core/Src/stm32f4xx_hal_msp.o \
./Core/Src/syscalls.o \
./Core/Src/sysmem.o \
./Core/Src/system_stm32f4xx.o 

C_DEPS += \
./Core/Src/DIO.d \
./Core/Src/GPIO_program.d \
./Core/Src/OS_program.d \
./Core/Src/RCC_program.d \
./Core/Src/STK_program.d \
./Core/Src/main.d \
./Core/Src/stm32f4xx_hal_msp.d \
./Core/Src/syscalls.d \
./Core/Src/sysmem.d \
./Core/Src/system_stm32f4xx.d 


# Each subdirectory must supply rules for building sources it contributes
Core/Src/%.o Core/Src/%.su Core/Src/%.cyclo: ../Core/Src/%.c Core/Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F401xC -c -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -I"C:/AutoSar Diploma/Lock Door Project/sadsad/Autosar_Implementation" -I"C:/AutoSar Diploma/Lock Door Project/sadsad/Autosar_Implementation/RTE_gen" -I"C:/AutoSar Diploma/Lock Door Project/sadsad/Autosar_Implementation/AutosarIncludeFiles" -I"C:/AutoSar Diploma/Lock Door Project/sadsad/Core/Src" -I"C:/AutoSar Diploma/Lock Door Project/sadsad/Core" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Core-2f-Src

clean-Core-2f-Src:
	-$(RM) ./Core/Src/DIO.cyclo ./Core/Src/DIO.d ./Core/Src/DIO.o ./Core/Src/DIO.su ./Core/Src/GPIO_program.cyclo ./Core/Src/GPIO_program.d ./Core/Src/GPIO_program.o ./Core/Src/GPIO_program.su ./Core/Src/OS_program.cyclo ./Core/Src/OS_program.d ./Core/Src/OS_program.o ./Core/Src/OS_program.su ./Core/Src/RCC_program.cyclo ./Core/Src/RCC_program.d ./Core/Src/RCC_program.o ./Core/Src/RCC_program.su ./Core/Src/STK_program.cyclo ./Core/Src/STK_program.d ./Core/Src/STK_program.o ./Core/Src/STK_program.su ./Core/Src/main.cyclo ./Core/Src/main.d ./Core/Src/main.o ./Core/Src/main.su ./Core/Src/stm32f4xx_hal_msp.cyclo ./Core/Src/stm32f4xx_hal_msp.d ./Core/Src/stm32f4xx_hal_msp.o ./Core/Src/stm32f4xx_hal_msp.su ./Core/Src/syscalls.cyclo ./Core/Src/syscalls.d ./Core/Src/syscalls.o ./Core/Src/syscalls.su ./Core/Src/sysmem.cyclo ./Core/Src/sysmem.d ./Core/Src/sysmem.o ./Core/Src/sysmem.su ./Core/Src/system_stm32f4xx.cyclo ./Core/Src/system_stm32f4xx.d ./Core/Src/system_stm32f4xx.o ./Core/Src/system_stm32f4xx.su

.PHONY: clean-Core-2f-Src

