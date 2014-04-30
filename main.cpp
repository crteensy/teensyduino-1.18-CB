#include <WProgram.h>

int main(void)
{
  pinMode(LED_BUILTIN, 1);
	while (1) {
    digitalWriteFast(LED_BUILTIN, 1);
    delay(500);
    digitalWriteFast(LED_BUILTIN, 0);
    delay(500);
	}
}
