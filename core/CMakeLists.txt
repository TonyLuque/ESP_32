set(SOURCES ./src/main.cpp)

idf_component_register(SRCS ${SOURCES}
                        INCLUDE_DIRS . ink
                        REQUIRES freertos esp_common Gpio)
