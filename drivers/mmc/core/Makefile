#
# Makefile for the kernel mmc core.
#

obj-$(CONFIG_MMC)		+= mmc_core.o
mmc_core-y			:= core.o bus.o host.o \
				   mmc.o mmc_ops.o sd.o sd_ops.o \
				   sdio.o sdio_ops.o sdio_bus.o \
				   sdio_cis.o sdio_io.o sdio_irq.o \
				   quirks.o slot-gpio.o \
				   custom_mmc.o

mmc_core-$(CONFIG_DEBUG_FS)	+= debugfs.o

ifneq (,$(filter userdebug eng,$(TARGET_BUILD_VARIANT)))
ccflags-y += -DFEATURE_MET_MMC_INDEX
endif

