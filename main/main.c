#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/spi_master.h"
#include "driver/gpio.h"

/*
 * Entry point
 */
void app_main(void)
{
    // Simple Hello, World! print to ensure proper setup and configuration
    while(1) {
        fprintf(stdout, "Hello, World!\n");
        vTaskDelay(5000 / portTICK_PERIOD_MS);
    }
}