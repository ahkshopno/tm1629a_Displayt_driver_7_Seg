#include <TM1638plus.h>

#define dig_1 0b00000001
#define dig_2 0b00000010
#define dig_3 0b00000100
#define dig_4 0b00001000
#define dig_5 0b00010000
#define dig_6 0b00100000
#define dig_7 0b01000000
#define dig_8 0b10000000
#define dig_9 0b10000000


#define seg_a 2
#define seg_b 1
#define seg_c 7
#define seg_d 5
#define seg_e 4
#define seg_f 3
#define seg_g 6

// #define seg_g 8




// GPIO I/O pins on the Arduino connected to strobe, clock, data,
//pick on any I/O you want.
#define STROBE_TM 8      // strobe = GPIO connected to strobe line of module
#define CLOCK_TM 9       // clock = GPIO connected to clock line of module
#define DIO_TM 10        // data = GPIO connected to data line of module
bool high_freq = false;  //default false,, If using a high freq CPU > ~100 MHZ set to true.

//Constructor object (GPIO STB , GPIO CLOCK , GPIO DIO, use high freq MCU)
TM1638plus tm(STROBE_TM, CLOCK_TM, DIO_TM, high_freq);


// Some vars and defines for the tests.
#define myTestDelay 50
#define myTestDelay1 1000
uint8_t testcount = 0;


void Test3(void);
void Test13(void);




void setup() {
  Serialinit();

  tm.displayBegin();
  delay(myTestDelay1);
  tm.reset();


  Test3();
  Test13();

  tm.reset();
}

void loop() {
//  Test3(0b10000001);
}




void Serialinit() {
  Serial.begin(115200);
  delay(100);
  Serial.println("--Comms UP--TM1638plus_TEST_Model1.ino--");
}

void Test3(void) {
  //TEST 3 single segment (pos, (dp)gfedcba)
  //In this case  segment g (middle dash) of digit position 7

  tm.display7Seg(seg_a, dig_1);
  delay(myTestDelay);
  tm.display7Seg(seg_b, dig_1);
  delay(myTestDelay);
  tm.display7Seg(seg_c, dig_1);
  delay(myTestDelay);
  tm.display7Seg(seg_d, dig_1);
  delay(myTestDelay);
  tm.display7Seg(seg_e, dig_1);
  delay(myTestDelay);
  tm.display7Seg(seg_f, dig_1);
  delay(myTestDelay);
  tm.display7Seg(seg_g, dig_1);
  delay(myTestDelay);
  // tm.reset();


  tm.display7Seg(seg_a, dig_2);
  delay(myTestDelay);
  tm.display7Seg(seg_b, dig_2);
  delay(myTestDelay);
  tm.display7Seg(seg_c, dig_2);
  delay(myTestDelay);
  tm.display7Seg(seg_d, dig_2);
  delay(myTestDelay);
  tm.display7Seg(seg_e, dig_2);
  delay(myTestDelay);
  tm.display7Seg(seg_f, dig_2);
  delay(myTestDelay);
  tm.display7Seg(seg_g, dig_2);
  delay(myTestDelay);
  // tm.reset();


  tm.display7Seg(seg_a, dig_3);
  delay(myTestDelay);
  tm.display7Seg(seg_b, dig_3);
  delay(myTestDelay);
  tm.display7Seg(seg_c, dig_3);
  delay(myTestDelay);
  tm.display7Seg(seg_d, dig_3);
  delay(myTestDelay);
  tm.display7Seg(seg_e, dig_3);
  delay(myTestDelay);
  tm.display7Seg(seg_f, dig_3);
  delay(myTestDelay);
  tm.display7Seg(seg_g, dig_3);
  delay(myTestDelay);
  // tm.reset();



  tm.display7Seg(seg_a, dig_4);
  delay(myTestDelay);
  tm.display7Seg(seg_b, dig_4);
  delay(myTestDelay);
  tm.display7Seg(seg_c, dig_4);
  delay(myTestDelay);
  tm.display7Seg(seg_d, dig_4);
  delay(myTestDelay);
  tm.display7Seg(seg_e, dig_4);
  delay(myTestDelay);
  tm.display7Seg(seg_f, dig_4);
  delay(myTestDelay);
  tm.display7Seg(seg_g, dig_4);
  delay(myTestDelay);
  // tm.reset();



  tm.display7Seg(seg_a, dig_5);
  delay(myTestDelay);
  tm.display7Seg(seg_b, dig_5);
  delay(myTestDelay);
  tm.display7Seg(seg_c, dig_5);
  delay(myTestDelay);
  tm.display7Seg(seg_d, dig_5);
  delay(myTestDelay);
  tm.display7Seg(seg_e, dig_5);
  delay(myTestDelay);
  tm.display7Seg(seg_f, dig_5);
  delay(myTestDelay);
  tm.display7Seg(seg_g, dig_5);
  delay(myTestDelay);
  // tm.reset();



  tm.display7Seg(seg_a, dig_6);
  delay(myTestDelay);
  tm.display7Seg(seg_b, dig_6);
  delay(myTestDelay);
  tm.display7Seg(seg_c, dig_6);
  delay(myTestDelay);
  tm.display7Seg(seg_d, dig_6);
  delay(myTestDelay);
  tm.display7Seg(seg_e, dig_6);
  delay(myTestDelay);
  tm.display7Seg(seg_f, dig_6);
  delay(myTestDelay);
  tm.display7Seg(seg_g, dig_6);
  delay(myTestDelay);
  // tm.reset();




  tm.display7Seg(seg_a, dig_7);
  delay(myTestDelay);
  tm.display7Seg(seg_b, dig_7);
  delay(myTestDelay);
  tm.display7Seg(seg_c, dig_7);
  delay(myTestDelay);
  tm.display7Seg(seg_d, dig_7);
  delay(myTestDelay);
  tm.display7Seg(seg_e, dig_7);
  delay(myTestDelay);
  tm.display7Seg(seg_f, dig_7);
  delay(myTestDelay);
  tm.display7Seg(seg_g, dig_7);
  delay(myTestDelay);
  // tm.reset();

  tm.display7Seg(seg_a, dig_8);
  delay(myTestDelay);
  tm.display7Seg(seg_b, dig_8);
  delay(myTestDelay);
  tm.display7Seg(seg_c, dig_8);
  delay(myTestDelay);
  tm.display7Seg(seg_d, dig_8);
  delay(myTestDelay);
  tm.display7Seg(seg_e, dig_8);
  delay(myTestDelay);
  tm.display7Seg(seg_f, dig_8);
  delay(myTestDelay);
  tm.display7Seg(seg_g, dig_8);
  delay(myTestDelay);
  // tm.reset();

}





void Test13(void)
{
  // tm.setLEDs(0xFF00); //  all LEDs on 
  // tm.setLED(0xFF00); //  all LEDs on 
  for(int LEDposition = 0; LEDposition < 20; LEDposition++){
    tm.setLED(LEDposition, 1);
    delay(100);    
  }

    for(int LEDposition = 0; LEDposition < 20; LEDposition++){
    tm.setLED(LEDposition, 2);
    delay(100);    
  }

    for(int LEDposition = 0; LEDposition < 20; LEDposition++){
    tm.setLED(LEDposition, 4);
    delay(100);    
  }
  
  delay(3000);
  // tm.reset();  
}


