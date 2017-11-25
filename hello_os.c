#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>

static int __init initial_hello(void)
{
	printk(KERN_INFO "Hello OS");
	return 0;
}

static void __exit initial_goodbye(void)
{
	return;
}

module_init(initial_hello);
module_exit(initial_goodbye);
