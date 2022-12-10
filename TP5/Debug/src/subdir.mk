################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Cliente.cpp \
../src/Control.cpp \
../src/Fecha.cpp \
../src/Mascota.cpp \
../src/Sucursal.cpp \
../src/TP5.cpp 

CPP_DEPS += \
./src/Cliente.d \
./src/Control.d \
./src/Fecha.d \
./src/Mascota.d \
./src/Sucursal.d \
./src/TP5.d 

OBJS += \
./src/Cliente.o \
./src/Control.o \
./src/Fecha.o \
./src/Mascota.o \
./src/Sucursal.o \
./src/TP5.o 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src

clean-src:
	-$(RM) ./src/Cliente.d ./src/Cliente.o ./src/Control.d ./src/Control.o ./src/Fecha.d ./src/Fecha.o ./src/Mascota.d ./src/Mascota.o ./src/Sucursal.d ./src/Sucursal.o ./src/TP5.d ./src/TP5.o

.PHONY: clean-src

