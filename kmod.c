#include <linux/module.h>
#include <linux/init.h>

MODULE_LICENSE("Dual BSD/GPL");

static int hello_init(void)
{
	printk(KERN_ALERT "driver loaded, hello kernel.\n");
	return 0;
}

static void hello_exit(void)
{
	printk(KERN_ALERT "driver unloaded, good bye kernel.\n");
}

module_init(hello_init);
module_exit(hello_exit);
