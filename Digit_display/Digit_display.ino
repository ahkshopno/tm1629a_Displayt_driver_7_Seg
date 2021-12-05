#include <TM1638plus.h>



#define STROBE_TM 8      // strobe = GPIO connected to strobe line of module
#define CLOCK_TM 9       // clock = GPIO connected to clock line of module
#define DIO_TM 10        // data = GPIO connected to data line of module
bool high_freq = false;  //default false,, If using a high freq CPU > ~100 MHZ set to true.

TM1638plus tm(STROBE_TM, CLOCK_TM, DIO_TM, high_freq);


#define myTestDelay 50
#define myTestDelay1 1000

void setup() {
  Serialinit();
  tm.displayBegin();
  delay(myTestDelay1);
  tm.reset();
  Test_digit();
  Test_Flag();
  tm.reset();
  //  digit_1();
}
void loop() {
  // put your main code here, to run repeatedly:

}
