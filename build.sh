set -e

CROSS_COMPILE=arm-linux-gnueabihf- CC=arm-linux-gnueabihf-gcc-6 CXX=arm-linux-gnueabihf-g++-6 CFLAGS="-Ofast -marm -mcpu=cortex-a35 -mtune=cortex-a35 -mfpu=neon-fp-armv8 -mfloat-abi=hard -DCONFIG_ENABLE_MENU" LDFLAGS="-Ofast -marm -mcpu=cortex-a35 -mtune=cortex-a35 -mfpu=neon-fp-armv8 -mfloat-abi=hard" ./configure --sound-drivers=sdl

make -j4
