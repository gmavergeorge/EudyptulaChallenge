obj-m += challenge1.o

KERNEL_RELEASE=$(shell uname -r)

all:
	@echo Eudyptula Challenge 1
	@echo ID: cb2b8daddd8e
	@echo Current Kernel Release: $(KERNEL_RELEASE)
	@echo

	make -C /lib/modules/$(KERNEL_RELEASE)/build M=$(PWD) modules

	@echo
	@echo -e "To test the module:"
	@echo -e " sudo insmod challenge1.ko"
	@echo -e " dmesg | tail -1"
	@echo -e " sudo rmmod challenge1"
	@echo -e " dmesg | tail -1"