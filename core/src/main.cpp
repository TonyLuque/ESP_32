#include "main.h"
#include "esp_log.h"
#define LOG_LEVEL_LOCAL ESP_LOG_VERBOSE
#define LOG_TAG "MAIN"

extern "C" void app_main(void)
{
    while (true)
    {
        ESP_LOGI(LOG_TAG, "Hola Juy con un pipio en el brazo\n");
        vTaskDelay(2000);
    }
}
