//This are comparing values for the comperasion bit
#define s_s_a 0b01000000
#define s_s_b 0b00100000
#define s_s_c 0b00010000
#define s_s_d 0b00001000
#define s_s_e 0b00000100
#define s_s_f 0b00000010
#define s_s_g 0b00000001

//This TM1629A Haedware Value for a segment
#define seg_a 2
#define seg_b 1
#define seg_c 7
#define seg_d 5
#define seg_e 4
#define seg_f 3
#define seg_g 6


//Segment Value for the digit
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

int seven_seg_num_array[10] = {digit0, digit1, digit2, digit3, digit4, digit5, digit6, digit7, digit8, digit9};

void display_digits(long number_to_disp) { //this function transfer a number in to digit array

  Serial.print("In disp: "); Serial.println(number_to_disp);
  int digit_to_display[8];
  digit_to_display[7] = number_to_disp % 10; number_to_disp = number_to_disp / 10;
  digit_to_display[6] = number_to_disp % 10; number_to_disp = number_to_disp / 10;
  digit_to_display[5] = number_to_disp % 10; number_to_disp = number_to_disp / 10;
  digit_to_display[4] = number_to_disp % 10; number_to_disp = number_to_disp / 10;
  digit_to_display[3] = number_to_disp % 10; number_to_disp = number_to_disp / 10;
  digit_to_display[2] = number_to_disp % 10; number_to_disp = number_to_disp / 10;
  digit_to_display[1] = number_to_disp % 10; number_to_disp = number_to_disp / 10;
  digit_to_display[0] = number_to_disp % 10; number_to_disp = number_to_disp / 10;


  tm.display7Seg(seg_a, segment_in_digit(s_s_a, digit_to_display));
  tm.display7Seg(seg_b, segment_in_digit(s_s_b, digit_to_display));
  tm.display7Seg(seg_c, segment_in_digit(s_s_c, digit_to_display));
  tm.display7Seg(seg_d, segment_in_digit(s_s_d, digit_to_display));
  tm.display7Seg(seg_e, segment_in_digit(s_s_e, digit_to_display));
  tm.display7Seg(seg_f, segment_in_digit(s_s_f, digit_to_display));
  tm.display7Seg(seg_g, segment_in_digit(s_s_g, digit_to_display));
}

unsigned char segment_in_digit(unsigned char segment, int display_array[]) { //this fucntion finds which Segments are presents in which digit
  unsigned char y = 0;
  unsigned char p = 0;

  for (int i = 0; i < 8; i++) {
    y = segment & seven_seg_num_array[display_array[i]];
    if (y > 0) {
      p = p | 1 << i;
    }
  }
  return (byte)p;
}
