#include <linux/module.h>    // included for all kernel modules
#include <linux/kernel.h>    // included for KERN_INFO
#include <linux/init.h>      // included for __init and __exit macros

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Mavergeorge");
MODULE_DESCRIPTION("A Hello World module");

static int __init hello_world_init(void)
{
    printk(KERN_DEBUG "Hello world!\n");
    return 0;    // Non-zero return means that the module couldn't be loaded.
}

static void __exit hello_world_cleanup(void)
{
    printk(KERN_DEBUG "Goodbye World...\n");
}

module_init(hello_world_init);
module_exit(hello_world_cleanup);
