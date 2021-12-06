#define dig_1 0b00000001
#define dig_2 0b00000010
#define dig_3 0b00000100
#define dig_4 0b00001000
#define dig_5 0b00010000
#define dig_6 0b00100000
#define dig_7 0b01000000
#define dig_8 0b10000000


#define s_s_a 0b01000000
#define s_s_b 0b00100000
#define s_s_c 0b00010000
#define s_s_d 0b00001000
#define s_s_e 0b00000100
#define s_s_f 0b00000010
#define s_s_g 0b00000001

#define seg_a 2
#define seg_b 1
#define seg_c 7
#define seg_d 5
#define seg_e 4
#define seg_f 3
#define seg_g 6

#define digit0 0b01111110
#define digit1 0b00110000
#define digit2 0b01101101
#define digit3 0b01111001
#define digit4 0b00110011
#define digit5 0b01011011
#define digit6 0b01011111
#define digit7 0b01110000
#define digit8 0b01111111
#define digit9 0b01111011

int na[10] = {digit0, digit1, digit2, digit3, digit4, digit5, digit6, digit7, digit8, digit9};

void digit_1(long disp) {


  //  long disp = 12345678;

  Serial.print("In disp: "); Serial.println(disp);
  int dd[8];
  dd[7] = disp % 10; disp = disp / 10;
  dd[6] = disp % 10; disp = disp / 10;
  dd[5] = disp % 10; disp = disp / 10;
  dd[4] = disp % 10; disp = disp / 10;
  dd[3] = disp % 10; disp = disp / 10;
  dd[2] = disp % 10; disp = disp / 10;
  dd[1] = disp % 10; disp = disp / 10;
  dd[0] = disp % 10; disp = disp / 10;

  int d1 = make_byte(s_s_a, dd);
  int d2 = make_byte(s_s_b, dd);
  int d3 = make_byte(s_s_c, dd);
  int d4 = make_byte(s_s_d, dd);
  int d5 = make_byte(s_s_e, dd);
  int d6 = make_byte(s_s_f, dd);
  int d7 = make_byte(s_s_g, dd);


  tm.display7Seg(seg_a, d1);
  tm.display7Seg(seg_b, d2);
  tm.display7Seg(seg_c, d3);
  tm.display7Seg(seg_d, d4);
  tm.display7Seg(seg_e, d5);
  tm.display7Seg(seg_f, d6);
  tm.display7Seg(seg_g, d7);
}

unsigned char make_byte(unsigned char x, int dx[]) {

  Serial.print("x: ");  Serial.println(x, BIN);

  unsigned char y = 0;
  unsigned char p = 0;

  for (int i = 0; i < 8; i++) {
    y = x & na[dx[i]];
    Serial.print("Seg: "); Serial.print(na[dx[i]], BIN); Serial.print(" bin: "); Serial.print(y, BIN);
    if (y > 0) {
      p = p | 1<<i;
      Serial.print(" Pwr "); Serial.print(i); Serial.print(" p: "); Serial.print(pow(2, i)); Serial.print(" p+p: "); Serial.println(p);
    }
  }
  Serial.print("Return : ");
  Serial.println((byte)p, BIN);
  return (byte)p;
}
