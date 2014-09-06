
#define F_CPU 16000000UL

#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
  uint8_t count = 0;

  /* board led is on PC1 */
  /* two external LEDs are on PD6, PD5 */
  
  DDRC |= (1 << 1);
  DDRC |= (1 << 3);	/* door unlock relay */
  DDRD |= (3 << 5);
  
  PORTD = (1 << 5);

  while (1) {
    PORTC ^= (1 << 1);
    PORTD ^= (3 << 5);
    _delay_ms(500);

    if (++count > 3) {
      PORTC ^= (1 << 3);

      count = 0;
    }
  }
}
