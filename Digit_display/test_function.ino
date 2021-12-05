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




void Test_digit(void) {
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





void Test_Flag(void)
{
  for (int LEDposition = 0; LEDposition < 20; LEDposition++) {
    tm.setLED(LEDposition, 1);
    delay(50);
  }

  for (int LEDposition = 0; LEDposition < 20; LEDposition++) {
    tm.setLED(LEDposition, 2);
    delay(50);
  }

  for (int LEDposition = 0; LEDposition < 20; LEDposition++) {
    tm.setLED(LEDposition, 4);
    delay(50);
  }
}
