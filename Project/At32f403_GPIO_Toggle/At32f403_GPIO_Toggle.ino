/**
  **************************************************************************
  * @file     main.c
  * @brief    main program
  **************************************************************************
  *
  **************************************************************************
  */

 /// define in at32f403a_board.h : ///
 #define  AT_START_F403A_V1  1  

 /// causes delay_Ms() conflict error : ///
 #include "at32f403a_407_board.h"
#include "at32f403a_407_clock.h"


/** @addtogroup AT32F403A_periph_examples
  * @{
  */

/** @addtogroup 403A_GPIO_io_toggle GPIO_io_toggle
  * @{
  */

/**
  * @brief  pa.01 gpio configuration.
  * @param  none
  * @retval none
  */
void gpio_config(void)
{
  gpio_init_type gpio_init_struct;

  /* enable the gpioa clock */
  crm_periph_clock_enable(CRM_GPIOA_PERIPH_CLOCK, TRUE);

  /* set default parameter */
  gpio_default_para_init(&gpio_init_struct);

  /* configure the gpio */
  gpio_init_struct.gpio_drive_strength = GPIO_DRIVE_STRENGTH_STRONGER;
  gpio_init_struct.gpio_out_type       = GPIO_OUTPUT_PUSH_PULL;
  gpio_init_struct.gpio_mode           = GPIO_MODE_OUTPUT;
  gpio_init_struct.gpio_pins           = GPIO_PINS_1;
  gpio_init_struct.gpio_pull           = GPIO_PULL_NONE;
  gpio_init(GPIOA, &gpio_init_struct);
}

/**
  * @brief  main function.
  * @param  none
  * @retval none
  */
void loop(void)
{
  ;
}

// int main(void)
void setup(void)
{
  system_clock_config();

  gpio_config();

  while(1)
  {
    /* set pa.01 */
    GPIOA->scr = GPIO_PINS_1;
    /* reset pa.01 */
    GPIOA->clr = GPIO_PINS_1;

    /* set pa.01 */
    GPIOA->scr = GPIO_PINS_1;
    /* reset pa.01 */
    GPIOA->clr = GPIO_PINS_1;

    /* set pa.01 */
    GPIOA->scr = GPIO_PINS_1;
    /* reset pa.01 */
    GPIOA->clr = GPIO_PINS_1;

    /* set pa.01 */
    GPIOA->scr = GPIO_PINS_1;
    /* reset pa.01 */
    GPIOA->clr = GPIO_PINS_1;

    /* set pa.01 */
    GPIOA->scr = GPIO_PINS_1;
    /* reset pa.01 */
    GPIOA->clr = GPIO_PINS_1;

    /* set pa.01 */
    GPIOA->scr = GPIO_PINS_1;
    /* reset pa.01 */
    GPIOA->clr = GPIO_PINS_1;
  }
}

/**
  * @}
  */

/**
  * @}
  */
