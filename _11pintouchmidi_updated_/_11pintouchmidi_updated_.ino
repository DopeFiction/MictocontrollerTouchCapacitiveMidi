int touchRead_pin_1 = 23; 
int touchRead_pin_2 = 1; 
int touchRead_pin_3 = 0; 
int touchRead_pin_4 = 4; 
int touchRead_pin_5 = 15; 
int touchRead_pin_6 = 16; 
int touchRead_pin_7 = 17; 
int touchRead_pin_8 = 18; 
int touchRead_pin_9 = 19; 

 

int thresh = 2200; 

int play_flag_1 = 0; 
int play_flag_2 = 0;
int play_flag_3 = 0;
int play_flag_4 = 0;
int play_flag_5 = 0;
int play_flag_6 = 0;
int play_flag_7 = 0;
int play_flag_8 = 0;
int play_flag_9 = 0;


int current_1; 
int current_2;
int current_3;
int current_4;
int current_5;
int current_6;
int current_7;
int current_8;
int current_9;


int delay_time = 3; 

void setup() {

}

void loop() {
  current_1 = touchRead(touchRead_pin_1); 

  if(current_1 > thresh && play_flag_1 == 0) {
    play_flag_1 = 1;
    usbMIDI.sendNoteOn(64, 127, 16); 
    delay(delay_time); 
  }

  if(current_1 < thresh && play_flag_1 == 1) {
    play_flag_1 = 0;
    usbMIDI.sendNoteOff(64, 0, 16); 
    delay(delay_time); 
  }

  current_2 = touchRead(touchRead_pin_2); 

  if(current_2 > thresh && play_flag_2 == 0) {
    play_flag_2 = 1;
    usbMIDI.sendNoteOn(61, 127, 16); 
    delay(delay_time); 
  }

  if(current_2 < thresh && play_flag_2 == 1) {
    play_flag_2 = 0;
    usbMIDI.sendNoteOff(61, 0, 16); 
    delay(delay_time); 
  }
  current_3 = touchRead(touchRead_pin_3); 

  if(current_3 > thresh && play_flag_3 == 0) {
    play_flag_3 = 1;
    usbMIDI.sendNoteOn(68, 127, 16); 
    delay(delay_time); 
  }

  if(current_3 < thresh && play_flag_3 == 1) {
    play_flag_3 = 0;
    usbMIDI.sendNoteOff(68, 0, 16); 
    delay(delay_time); 
  }
  current_4 = touchRead(touchRead_pin_4); 

  if(current_4 > thresh && play_flag_4 == 0) {
    play_flag_4 = 1;
    usbMIDI.sendNoteOn(69, 127, 16); 
    delay(delay_time); 
  }

  if(current_4 < thresh && play_flag_4 == 1) {
    play_flag_4 = 0;
    usbMIDI.sendNoteOff(69, 0, 16); 
    delay(delay_time); 
  }
  current_5 = touchRead(touchRead_pin_5); 

  if(current_5 > thresh && play_flag_5 == 0) {
    play_flag_5 = 1;
    usbMIDI.sendNoteOn(64, 127, 16); 
    delay(delay_time); 
  }

  if(current_5 < thresh && play_flag_5 == 1) {
    play_flag_5 = 0;
    usbMIDI.sendNoteOff(64, 0, 16); 
    delay(delay_time); 
  }
  current_6 = touchRead(touchRead_pin_6); 

  if(current_6 > thresh && play_flag_6 == 0) {
    play_flag_6 = 1;
    usbMIDI.sendNoteOn(66, 127, 16); 
    delay(delay_time); 
  }

  if(current_6 < thresh && play_flag_6 == 1) {
    play_flag_6 = 0;
    usbMIDI.sendNoteOff(66, 0, 16); 
    delay(delay_time); 
  }
  current_7 = touchRead(touchRead_pin_7); 

  if(current_7 > thresh && play_flag_7 == 0) {
    play_flag_7 = 1;
    usbMIDI.sendNoteOn(65, 127, 16); 
    delay(delay_time); 
  }

  if(current_7 < thresh && play_flag_7 == 1) {
    play_flag_7 = 0;
    usbMIDI.sendNoteOff(65, 0, 16); 
    delay(delay_time); 
  }
  current_8 = touchRead(touchRead_pin_8); 

  if(current_8 > thresh && play_flag_8 == 0) {
    play_flag_8 = 1;
    usbMIDI.sendNoteOn(62, 127, 16); 
    delay(delay_time); 
  }

  if(current_8 < thresh && play_flag_8 == 1) {
    play_flag_8 = 0;
    usbMIDI.sendNoteOff(62, 0, 16); 
    delay(delay_time); 
  }
  current_9 = touchRead(touchRead_pin_9); 

  if(current_9 > thresh && play_flag_9 == 0) {
    play_flag_9 = 1;
    usbMIDI.sendNoteOn(63, 127, 16); 
    delay(delay_time); 
  }

  if(current_9 < thresh && play_flag_9 == 1) {
    play_flag_9 = 0;
    usbMIDI.sendNoteOff(63, 0, 16); 
    delay(delay_time); 
  }
  
}
