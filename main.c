#include <main.h>
unsigned int8 dem=0;
#INT_TIMER0
void ngatTimer()
{
   dem++;
   if(dem>15)
   {
   output_toggle(PIN_D7);
   dem=0;
   }
}


void main()
{
   setup_timer_0(T0_INTERNAL|T0_DIV_256);
   set_timer0(0);
   enable_interrupts(INT_TIMER0);
   enable_interrupts(GLOBAL);
   output_bit(PIN_D7,0);
   while(1)
   {}
}
