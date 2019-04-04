obj-m := random_packet_drop.o

KERN_DIR=/usr/src/linux-headers-`uname -r`

all:
	# NOTE: below command is also ok
	# make -C ${KERN_DIR} M=`pwd` modules
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules

clean:
	rm -f *.ko.unsigned *.mod.o modules.order Module.symvers *.ko *.mod.c *.o
