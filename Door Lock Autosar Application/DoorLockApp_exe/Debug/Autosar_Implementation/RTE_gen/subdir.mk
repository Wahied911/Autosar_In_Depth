################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (12.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Autosar_Implementation/RTE_gen/Algo_App_SWC.c \
../Autosar_Implementation/RTE_gen/IO_SWC.c \
../Autosar_Implementation/RTE_gen/Rte_Algo_App_SWC.c \
../Autosar_Implementation/RTE_gen/Rte_IO_SWC.c \
../Autosar_Implementation/RTE_gen/Rte_SA1_SWC.c \
../Autosar_Implementation/RTE_gen/Rte_SA2_SWC.c \
../Autosar_Implementation/RTE_gen/SA1_SWC.c \
../Autosar_Implementation/RTE_gen/SA2_SWC.c 

OBJS += \
./Autosar_Implementation/RTE_gen/Algo_App_SWC.o \
./Autosar_Implementation/RTE_gen/IO_SWC.o \
./Autosar_Implementation/RTE_gen/Rte_Algo_App_SWC.o \
./Autosar_Implementation/RTE_gen/Rte_IO_SWC.o \
./Autosar_Implementation/RTE_gen/Rte_SA1_SWC.o \
./Autosar_Implementation/RTE_gen/Rte_SA2_SWC.o \
./Autosar_Implementation/RTE_gen/SA1_SWC.o \
./Autosar_Implementation/RTE_gen/SA2_SWC.o 

C_DEPS += \
./Autosar_Implementation/RTE_gen/Algo_App_SWC.d \
./Autosar_Implementation/RTE_gen/IO_SWC.d \
./Autosar_Implementation/RTE_gen/Rte_Algo_App_SWC.d \
./Autosar_Implementation/RTE_gen/Rte_IO_SWC.d \
./Autosar_Implementation/RTE_gen/Rte_SA1_SWC.d \
./Autosar_Implementation/RTE_gen/Rte_SA2_SWC.d \
./Autosar_Implementation/RTE_gen/SA1_SWC.d \
./Autosar_Implementation/RTE_gen/SA2_SWC.d 


# Each subdirectory must supply rules for building sources it contributes
Autosar_Implementation/RTE_gen/%.o Autosar_Implementation/RTE_gen/%.su Autosar_Implementation/RTE_gen/%.cyclo: ../Autosar_Implementation/RTE_gen/%.c Autosar_Implementation/RTE_gen/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -c -I"C:/AutoSar Diploma/Lock Door Project/sadsad/Drivers/CMSIS/Device/ST/STM32F4xx/Include" -I"C:/AutoSar Diploma/Lock Door Project/sadsad/Inc" -I"C:/AutoSar Diploma/Lock Door Project/sadsad/Drivers/CMSIS/Include" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Autosar_Implementation-2f-RTE_gen

clean-Autosar_Implementation-2f-RTE_gen:
	-$(RM) ./Autosar_Implementation/RTE_gen/Algo_App_SWC.cyclo ./Autosar_Implementation/RTE_gen/Algo_App_SWC.d ./Autosar_Implementation/RTE_gen/Algo_App_SWC.o ./Autosar_Implementation/RTE_gen/Algo_App_SWC.su ./Autosar_Implementation/RTE_gen/IO_SWC.cyclo ./Autosar_Implementation/RTE_gen/IO_SWC.d ./Autosar_Implementation/RTE_gen/IO_SWC.o ./Autosar_Implementation/RTE_gen/IO_SWC.su ./Autosar_Implementation/RTE_gen/Rte_Algo_App_SWC.cyclo ./Autosar_Implementation/RTE_gen/Rte_Algo_App_SWC.d ./Autosar_Implementation/RTE_gen/Rte_Algo_App_SWC.o ./Autosar_Implementation/RTE_gen/Rte_Algo_App_SWC.su ./Autosar_Implementation/RTE_gen/Rte_IO_SWC.cyclo ./Autosar_Implementation/RTE_gen/Rte_IO_SWC.d ./Autosar_Implementation/RTE_gen/Rte_IO_SWC.o ./Autosar_Implementation/RTE_gen/Rte_IO_SWC.su ./Autosar_Implementation/RTE_gen/Rte_SA1_SWC.cyclo ./Autosar_Implementation/RTE_gen/Rte_SA1_SWC.d ./Autosar_Implementation/RTE_gen/Rte_SA1_SWC.o ./Autosar_Implementation/RTE_gen/Rte_SA1_SWC.su ./Autosar_Implementation/RTE_gen/Rte_SA2_SWC.cyclo ./Autosar_Implementation/RTE_gen/Rte_SA2_SWC.d ./Autosar_Implementation/RTE_gen/Rte_SA2_SWC.o ./Autosar_Implementation/RTE_gen/Rte_SA2_SWC.su ./Autosar_Implementation/RTE_gen/SA1_SWC.cyclo ./Autosar_Implementation/RTE_gen/SA1_SWC.d ./Autosar_Implementation/RTE_gen/SA1_SWC.o ./Autosar_Implementation/RTE_gen/SA1_SWC.su ./Autosar_Implementation/RTE_gen/SA2_SWC.cyclo ./Autosar_Implementation/RTE_gen/SA2_SWC.d ./Autosar_Implementation/RTE_gen/SA2_SWC.o ./Autosar_Implementation/RTE_gen/SA2_SWC.su

.PHONY: clean-Autosar_Implementation-2f-RTE_gen

