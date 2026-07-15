#include <zephyr/kernel.h>
#include <zephyr/drivers/led_strip.h>
#include <zephyr/device.h>

int main(void)
{
	while (true)
	{
		printk("Hello from ESP32C3!\n");
		k_msleep(1000);
	}
}