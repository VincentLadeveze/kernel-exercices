#ifndef _MYDRIVER1_H
#define _MYDRIVER1_H

#define RPI_GPIO_IOC_MAGIC	'k'
#define RPI_GPIO_SET		_IO(RPI_GPIO_IOC_MAGIC, 128)
#define RPI_GPIO_CLEAR		_IO(RPI_GPIO_IOC_MAGIC, 129)
#define RPI_GPIO_GET		_IOR(RPI_GPIO_IOC_MAGIC, 130, uint32_t)

struct mydriver_data_t
{
	uint32_t base;
};

#endif
