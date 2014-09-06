
#define F_CPU 16000000UL

#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
  /* board led is on PC1 */
  /* two external LEDs are on PD6, PD5 */
  
  DDRC |= (1 << 1);
  DDRC |= (1 << 3);	/* door unlock relay */
  DDRC |= (1 << 5);	/* buzzer */
  DDRD |= (3 << 5);
  
  PORTD = (1 << 5) | (1<< 6);

  while (1) {
    if ((PINC & (1 << 4)) == 0) {
      PORTC |= (1 << 1);
      PORTC |= (1 << 5);
      PORTD |= (3 << 5);
    } else {
      PORTD &= ~(3 << 5);
      PORTC &= ~(1 << 1);
      PORTC &= ~(1 << 5);
    }
  }
}
