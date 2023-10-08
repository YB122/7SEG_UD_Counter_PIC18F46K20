/* 
 * File:   application.c
 * Author: Youssef
 *
 * Created on September 27, 2023, 11:59 AM
 */

#include "application.h"


/* GPIO */
/*

 
pin_config_t led1 = {
    .port = PORTC_INDEX ,
    .pin  = pin0  ,
    .direction = OUTPUT ,
    .logic = HIGH
};

pin_config_t led2 = {
    .port = PORTC_INDEX ,
    .pin  = pin1  ,
    .direction = OUTPUT ,
    .logic = HIGH
};

pin_config_t led3 = {
    .port = PORTC_INDEX ,
    .pin  = pin2  ,
    .direction = OUTPUT ,
    .logic = HIGH
};

pin_config_t led4 = {
    .port = PORTC_INDEX ,
    .pin  = pin3  ,
    .direction = OUTPUT ,
    .logic = HIGH
};

pin_config_t push1 = {
    .port = PORTD_INDEX ,
    .pin  = pin0  ,
    .direction = INPUT ,
    .logic = HIGH
};

std_ReturneType ret = E_NOT_OK ;
direction_t led_1 ;  
logic_status push_button ; 
int main()
{      
    ret = gpio_pin_direction_intialize(&push1);
    
    ret = gpio_pin_intialize(&led1);
    __delay_ms(1000);
    ret = gpio_pin_intialize(&led2);
    __delay_ms(1000);
    ret = gpio_pin_intialize(&led3);
    __delay_ms(1000);
    
    ret = gpio_pin_intialize(&led4);
       
    while (1)
    {
        ret = gpio_pin_read_logic(&push1 , (uint8 *)(&push_button));
        if(push_button == HIGH)
        {
            ret = gpio_pin_write_logic(&led1 , HIGH); 
        }           
        else
        {
            ret = gpio_pin_write_logic(&led1 , LOW);
        }  
        
        gpio_pin_toogle_logic(&led4);
        __delay_ms(500);
        
    }
    
    return (EXIT_SUCCESS);
    
}
*/

/*LED*/
/*
led_t led1 = {.port_name = PORTC_INDEX , .pin_number = pin0 , .status = HIGH } ;
led_t led2 = {.port_name = PORTC_INDEX , .pin_number = pin1 , .status =  LOW } ;
led_t led3 = {.port_name = PORTC_INDEX , .pin_number = pin2 , .status = HIGH } ;
led_t led4 = {.port_name = PORTC_INDEX , .pin_number = pin3 , .status =  LOW } ;

int main ()
{
    std_ReturneType ret = led_initialize(&led1);
    ret = led_initialize(&led2);
    ret = led_initialize(&led3);
    ret = led_initialize(&led4);
    while (1) 
    {
        ret = led_turn_toggle(&led1);
        __delay_ms(500);
        ret = led_turn_toggle(&led2);
        __delay_ms(500);
        ret = led_turn_toggle(&led3);
        __delay_ms(500);
        ret = led_turn_toggle(&led4);
        __delay_ms(500);
    }

    
    return (EXIT_SUCCESS);
}
*/

/*Push_putton*/

/*

button_t btn_high = 
{
    .button_pin.port = PORTC_INDEX ,
    .button_pin.pin = pin2         ,
    .button_pin.direction = INPUT  ,
    .button_pin.logic = LOW        ,
    .button_active = ACTIVE_HIGH   ,
    .button_status = BUTTON_RELEASED
};

button_t btn_low = 
{
    .button_pin.port = PORTD_INDEX ,
    .button_pin.pin = pin0         ,
    .button_pin.direction = INPUT  ,
    .button_pin.logic = HIGH       ,
    .button_active = ACTIVE_LOW    ,
    .button_status = BUTTON_RELEASED
};

led_t led1 = {.port_name = PORTC_INDEX , .pin_number = pin0 , .status = LOW } ;
led_t led2 = {.port_name = PORTC_INDEX , .pin_number = pin1 , .status = LOW } ;

std_ReturneType ret = E_OK ;

*/
/* 1 */

/*
int main()
{
    button_status_t status_button_HIGH = BUTTON_RELEASED , status_button_LOW = BUTTON_RELEASED;
    ret = button_intialize(&btn_high);
    ret = button_intialize(&btn_low);
    ret = led_initialize(&led1);
    ret = led_initialize(&led2);
    while (1) 
    {  
        ret = button_read_status(&btn_high , &status_button_HIGH);
        ret = button_read_status(&btn_low  , &status_button_LOW) ;
        
        if(status_button_HIGH == BUTTON_PRESSED)
        {
            ret = led_turn_toggle(&led1);
            __delay_ms(300);
        }
        
        if(status_button_LOW == BUTTON_PRESSED)
        {
            ret = led_turn_toggle(&led2);
            __delay_ms(300);
        }
        
    }
    
    return (EXIT_SUCCESS);
}
 */

/*2*/
/*
int main()
{
    button_status_t status_button_HIGH = BUTTON_RELEASED , status_button_LOW = BUTTON_RELEASED;
    ret = button_intialize(&btn_high);
    ret = button_intialize(&btn_low);
    ret = led_initialize(&led1);
    ret = led_initialize(&led2);
    while (1) 
    {  
        ret = button_read_status(&btn_high , &status_button_HIGH);
        ret = button_read_status(&btn_low  , &status_button_LOW) ;
        
        if(status_button_HIGH == BUTTON_PRESSED)
        {
            ret = led_turn_toggle(&led1);
            __delay_ms(300);
        }  
    }
    
    return (EXIT_SUCCESS);
}
*/

/*relay*/
/*
relay_t relay_1 =
{
    .relay_port   = PORTC_INDEX     ,
    .relay_pin    = pin3            ,
    .relay_status = RELAY_OFF_STATUS
};

std_ReturneType ret = E_OK ;

int main ()
{
    ret = relay_intialize(&relay_1);
    
    
    
     
    
    return (EXIT_SUCCESS);
}
*/

/*dc_motor*/


 
std_ReturneType ret = E_OK ;
dc_motor_t dc_motor_1 =
{
    .dc_motor[0].port   = PORTC_INDEX         ,
    .dc_motor[0].pin    = pin0                ,
    .dc_motor[0].logic = DC_MOTOR_OFF_STATUS  ,
    .dc_motor[0].direction = OUTPUT           ,
    .dc_motor[1].port   = PORTC_INDEX         ,
    .dc_motor[1].pin    = pin1                ,
    .dc_motor[1].logic = DC_MOTOR_OFF_STATUS  ,
    .dc_motor[1].direction = OUTPUT           
};

dc_motor_t dc_motor_2 =
{
    .dc_motor[0].port   = PORTC_INDEX         ,
    .dc_motor[0].pin    = pin2                ,
    .dc_motor[0].logic = DC_MOTOR_OFF_STATUS  , 
    .dc_motor[0].direction = OUTPUT           ,
    .dc_motor[1].port   = PORTC_INDEX         ,
    .dc_motor[1].pin    = pin3                ,
    .dc_motor[1].logic = DC_MOTOR_OFF_STATUS  ,
    .dc_motor[1].direction = OUTPUT  
};

int main ()
{
    ret = dc_motor_intialize(&dc_motor_1);
    ret = dc_motor_intialize(&dc_motor_2);
    
    while (1) 
    {
        ret = dc_motor_move_right(&dc_motor_1);
        __delay_ms(5000);
        ret = dc_motor_move_left(&dc_motor_1);
        __delay_ms(5000);
        ret = dc_motor_stop(&dc_motor_1);
        __delay_ms(5000);
    }

    return (EXIT_SUCCESS);
}
