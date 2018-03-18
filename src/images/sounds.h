#pragma once

const uint16_t pickUpGold[] PROGMEM = {

  NOTE_A6, 15, NOTE_C6, 15, NOTE_E6, 15, TONES_END

};

const uint16_t digAHole[] PROGMEM = {

  NOTE_D5, 75, NOTE_REST, 15, NOTE_D5, 75, NOTE_REST, 15, NOTE_D5, 75, NOTE_REST, 15, NOTE_D4, 75, TONES_END

};

const uint16_t enemyFallsIn[] PROGMEM = {

  NOTE_A6, 30, NOTE_REST, 10, NOTE_A6, 30, TONES_END

};

const uint16_t freeFalling[] PROGMEM = {

  NOTE_G6, 75, NOTE_REST, 25, 
  NOTE_F6, 75, NOTE_REST, 25, 
  NOTE_E6, 75, NOTE_REST, 25, 
  NOTE_D6, 75, NOTE_REST, 25, 
  NOTE_C6, 75, NOTE_REST, 25, 
  NOTE_B6, 75, NOTE_REST, 25, 
  NOTE_A6, 75, NOTE_REST, 25, 
  NOTE_G5, 75, NOTE_REST, 25, 
  NOTE_F5, 75, NOTE_REST, 25, 
  NOTE_E5, 75, NOTE_REST, 25, 
  NOTE_D5, 75, NOTE_REST, 25, 
  NOTE_C5, 75, NOTE_REST, 25, 
  NOTE_B5, 75, NOTE_REST, 25, 
  NOTE_A5, 75, NOTE_REST, 25, 

  NOTE_G4, 75, NOTE_REST, 25, 
  NOTE_F4, 75, NOTE_REST, 25, 
  NOTE_E4, 75, NOTE_REST, 25, 
  NOTE_D4, 75, NOTE_REST, 25, 
  NOTE_C4, 75, NOTE_REST, 25, 
  NOTE_B4, 75, NOTE_REST, 25, 
  NOTE_A4, 75, NOTE_REST, 25, 
  NOTE_G3, 75, NOTE_REST, 25, 
  NOTE_F3, 75, NOTE_REST, 25, 
  NOTE_E3, 75, NOTE_REST, 25, 
  NOTE_D3, 75, NOTE_REST, 25, 
  NOTE_C3, 75, NOTE_REST, 25, 
  NOTE_B3, 75, NOTE_REST, 25, 
  NOTE_A3, 75, NOTE_REST, 25, 
  
  NOTE_G2, 75, NOTE_REST, 25, 
  NOTE_F2, 75, NOTE_REST, 25, 
  NOTE_E2, 75, NOTE_REST, 25, 
  NOTE_D2, 75, NOTE_REST, 25, 
  NOTE_C2, 75, NOTE_REST, 25, 
  NOTE_B2, 75, NOTE_REST, 25, 
  NOTE_A2, 75, NOTE_REST, 25, 
  NOTE_G1, 75, NOTE_REST, 25, 
  NOTE_F1, 75, NOTE_REST, 25, 
  NOTE_E1, 75, NOTE_REST, 25, 
  NOTE_D1, 75, NOTE_REST, 25, 
  NOTE_C1, 75, NOTE_REST, 25, 
  NOTE_B1, 75, NOTE_REST, 25, 
  NOTE_A1, 75, NOTE_REST, 25,  
  
  TONES_END

};

const uint16_t levelComplete[] PROGMEM = {

  NOTE_G4, 100, NOTE_REST, 20, 
  NOTE_B5, 100, NOTE_REST, 20, 
  NOTE_D5, 100, NOTE_REST, 40, 
  
  NOTE_C6, 100, NOTE_REST, 20, 
  NOTE_E6, 100, NOTE_REST, 20, 
  NOTE_G6, 100, NOTE_REST, 40, 

  TONES_END
  
};

const uint16_t dead[] PROGMEM = {
  
  NOTE_G6, 100, NOTE_REST, 20, 
  NOTE_E6, 100, NOTE_REST, 20, 
  NOTE_C6, 100, NOTE_REST, 40, 

  NOTE_D5, 100, NOTE_REST, 20, 
  NOTE_B5, 100, NOTE_REST, 20, 
  NOTE_G4, 100, NOTE_REST, 40, 

  TONES_END
  
};

const uint16_t shortVersion[] PROGMEM = {
 NOTE_REST,1000, NOTE_C4,62, NOTE_C4,34, NOTE_C4,2, NOTE_REST,100, NOTE_G6,70, NOTE_G6,5, NOTE_G6,22,
 NOTE_G6,119, NOTE_G6,15, NOTE_G6,1, NOTE_G6,62, NOTE_G6,104, NOTE_G6,99, NOTE_G6,100, NOTE_G6,99,


 NOTE_G6,60, NOTE_REST,40, NOTE_FS5,99, NOTE_REST,100, NOTE_G3,99, NOTE_REST,80, NOTE_REST,20, NOTE_F5,50,
 NOTE_F5,74, NOTE_F5,25, NOTE_REST,50, NOTE_C4,150, NOTE_C4,39, NOTE_REST,10, NOTE_C7,25, NOTE_C7,70,
 NOTE_C7,93, NOTE_REST,0, NOTE_REST,10, NOTE_D5,94, NOTE_REST,5, NOTE_B6,12, NOTE_B6,34, NOTE_B6,30,
 NOTE_B6,12, NOTE_B6,10, NOTE_B6,189, NOTE_B6,10, NOTE_B6,138, NOTE_B6,0, NOTE_B6,35, NOTE_REST,15,
 NOTE_REST,10, NOTE_B6,99, NOTE_B6,70, NOTE_B6,30, NOTE_B6,0, NOTE_B6,22, NOTE_B6,2, NOTE_B6,70,
 NOTE_B6,94, NOTE_B6,10, NOTE_B6,99, NOTE_B6,70, NOTE_REST,20, NOTE_REST,10, NOTE_C4,99, NOTE_REST,90,
 NOTE_REST,10, NOTE_B3,99, NOTE_REST,100, NOTE_A3,99, NOTE_REST,60, NOTE_REST,30, NOTE_REST,10, NOTE_D4,99,
 NOTE_REST,90, NOTE_REST,10, NOTE_B6,50, NOTE_B6,46, NOTE_B6,3, NOTE_B6,24, NOTE_B6,25, NOTE_B6,40,
 NOTE_REST,10, NOTE_A6,99, NOTE_A6,90, NOTE_REST,10, NOTE_E4,99, NOTE_REST,90, NOTE_REST,10, NOTE_D4,99,
 NOTE_REST,100, NOTE_G5,99, NOTE_REST,80, NOTE_REST,20, NOTE_DS1,99, NOTE_REST,100, NOTE_REST,0, NOTE_G3,94,
 NOTE_REST,5, NOTE_FS3,49, NOTE_REST,50, NOTE_E7,99, NOTE_E7,90, NOTE_REST,10, NOTE_F4,99, NOTE_REST,60,
 NOTE_REST,30, NOTE_REST,10, NOTE_E4,50, NOTE_E4,46, NOTE_E4,3, NOTE_E4,49, NOTE_E4,40, NOTE_E4,10,
 NOTE_REST,0, NOTE_A6,99, NOTE_A6,90, NOTE_REST,10, NOTE_FS4,62, NOTE_FS4,34, NOTE_FS4,3, NOTE_FS4,49,
 NOTE_FS4,40, NOTE_FS4,10, NOTE_REST,0, NOTE_G7,99, NOTE_G7,80, NOTE_G7,10, NOTE_REST,10, NOTE_G4,99,
 NOTE_REST,100, NOTE_REST,0, NOTE_D7,50, NOTE_D7,74, NOTE_D7,65, NOTE_REST,10, NOTE_G6,99, NOTE_G6,70,
 NOTE_G6,20, NOTE_REST,10, NOTE_C4,81, NOTE_REST,5, NOTE_G5,101, NOTE_G5,4,
 TONES_REPEAT
 };

const uint16_t longVersion[] PROGMEM = {
 NOTE_REST,1000, NOTE_C4,62, NOTE_C4,34, NOTE_C4,2, NOTE_REST,100, NOTE_G6,70, NOTE_G6,5, NOTE_G6,22,
 NOTE_G6,119, NOTE_G6,15, NOTE_G6,1, NOTE_G6,62, NOTE_G6,104, NOTE_G6,99, NOTE_G6,100, NOTE_G6,99,
 NOTE_G6,60, NOTE_REST,40, NOTE_FS5,99, NOTE_REST,100, NOTE_G3,99, NOTE_REST,80, NOTE_REST,20, NOTE_F5,50,
 NOTE_F5,74, NOTE_F5,25, NOTE_REST,50, NOTE_C4,150, NOTE_C4,39, NOTE_REST,10, NOTE_C7,25, NOTE_C7,70,
 NOTE_C7,93, NOTE_REST,0, NOTE_REST,10, NOTE_D5,94, NOTE_REST,5, NOTE_B6,12, NOTE_B6,34, NOTE_B6,30,
 NOTE_B6,12, NOTE_B6,10, NOTE_B6,189, NOTE_B6,10, NOTE_B6,138, NOTE_B6,0, NOTE_B6,35, NOTE_REST,15,
 NOTE_REST,10, NOTE_B6,99, NOTE_B6,70, NOTE_B6,30, NOTE_B6,0, NOTE_B6,22, NOTE_B6,2, NOTE_B6,70,
 NOTE_B6,94, NOTE_B6,10, NOTE_B6,99, NOTE_B6,70, NOTE_REST,20, NOTE_REST,10, NOTE_C4,99, NOTE_REST,90,
 NOTE_REST,10, NOTE_B3,99, NOTE_REST,100, NOTE_A3,99, NOTE_REST,60, NOTE_REST,30, NOTE_REST,10, NOTE_D4,99,
 NOTE_REST,90, NOTE_REST,10, NOTE_B6,50, NOTE_B6,46, NOTE_B6,3, NOTE_B6,24, NOTE_B6,25, NOTE_B6,40,
 NOTE_REST,10, NOTE_A6,99, NOTE_A6,90, NOTE_REST,10, NOTE_E4,99, NOTE_REST,90, NOTE_REST,10, NOTE_D4,99,
 NOTE_REST,100, NOTE_G5,99, NOTE_REST,80, NOTE_REST,20, NOTE_DS1,99, NOTE_REST,100, NOTE_REST,0, NOTE_G3,94,
 NOTE_REST,5, NOTE_FS3,49, NOTE_REST,50, NOTE_E7,99, NOTE_E7,90, NOTE_REST,10, NOTE_F4,99, NOTE_REST,60,
 NOTE_REST,30, NOTE_REST,10, NOTE_E4,50, NOTE_E4,46, NOTE_E4,3, NOTE_E4,49, NOTE_E4,40, NOTE_E4,10,
 NOTE_REST,0, NOTE_A6,99, NOTE_A6,90, NOTE_REST,10, NOTE_FS4,62, NOTE_FS4,34, NOTE_FS4,3, NOTE_FS4,49,
 NOTE_FS4,40, NOTE_FS4,10, NOTE_REST,0, NOTE_G7,99, NOTE_G7,80, NOTE_G7,10, NOTE_REST,10, NOTE_G4,99,
 NOTE_REST,100, NOTE_REST,0, NOTE_D7,50, NOTE_D7,74, NOTE_D7,65, NOTE_REST,10, NOTE_G6,99, NOTE_G6,70,
 NOTE_G6,20, NOTE_REST,10, NOTE_C4,81, NOTE_REST,5, NOTE_G5,101, NOTE_G5,4, NOTE_REST,6, NOTE_C6,99,
 NOTE_C6,90, NOTE_REST,10, NOTE_C4,99, NOTE_REST,90, NOTE_REST,10, NOTE_F6,99, NOTE_REST,77, NOTE_REST,10,
 NOTE_CS7,12, NOTE_CS7,99, NOTE_CS7,89, NOTE_REST,11, NOTE_E5,94, NOTE_REST,18, NOTE_E1,17, NOTE_REST,28,
 NOTE_REST,41, NOTE_GS3,30, NOTE_REST,2, NOTE_G3,155, NOTE_G3,1, NOTE_REST,9, NOTE_AS6,30, NOTE_AS6,35,
 NOTE_AS6,27, NOTE_AS6,5, NOTE_REST,93, NOTE_REST,7, NOTE_F7,99, NOTE_F7,60, NOTE_F7,40, NOTE_F7,66,
 NOTE_F7,59, NOTE_F7,3, NOTE_F7,50, NOTE_REST,20, NOTE_G3,99, NOTE_REST,90, NOTE_REST,10, NOTE_F5,99,
 NOTE_REST,100, NOTE_C7,50, NOTE_C7,49, NOTE_C7,25, NOTE_C7,35, NOTE_C7,30, NOTE_REST,10, NOTE_C4,30,
 NOTE_REST,2, NOTE_B3,135, NOTE_B3,20, NOTE_B3,1, NOTE_REST,9, NOTE_A6,99, NOTE_A6,90, NOTE_REST,10,
 NOTE_D4,94, NOTE_REST,5, NOTE_F2,49, NOTE_REST,40, NOTE_REST,10, NOTE_G3,99, NOTE_REST,90, NOTE_REST,10,
 NOTE_F4,99, NOTE_REST,90, NOTE_REST,10, NOTE_E4,70, NOTE_REST,5, NOTE_B5,114, NOTE_B5,3, NOTE_REST,7,
 NOTE_F6,99, NOTE_F6,100, NOTE_F6,36, NOTE_F6,38, NOTE_F6,22, NOTE_F6,1, NOTE_F6,80, NOTE_REST,20,
 NOTE_G4,99, NOTE_REST,125, NOTE_D5,70, NOTE_REST,83, NOTE_REST,21, NOTE_G4,99, NOTE_REST,90, NOTE_REST,10,
 NOTE_F4,25, NOTE_F4,70, NOTE_F4,4, NOTE_REST,60, NOTE_REST,40, NOTE_E4,94, NOTE_REST,5, NOTE_DS4,49,
 NOTE_REST,40, NOTE_REST,10, NOTE_F4,99, NOTE_REST,90, NOTE_REST,10, NOTE_FS4,94, NOTE_REST,5, NOTE_CS6,49,
 NOTE_REST,40, NOTE_REST,10, NOTE_G4,99, NOTE_REST,80, NOTE_REST,10, NOTE_REST,10, NOTE_G4,99, NOTE_REST,100,
 NOTE_REST,0, NOTE_GS3,30, NOTE_REST,2, NOTE_G3,62, NOTE_REST,93, NOTE_REST,10, NOTE_F4,99, NOTE_REST,70,
 NOTE_REST,20, NOTE_REST,10, NOTE_C4,99, NOTE_REST,90, NOTE_REST,10, NOTE_E4,50, NOTE_E4,74, NOTE_E4,75,
 NOTE_REST,0, NOTE_C4,99, NOTE_REST,100, NOTE_G6,199, NOTE_REST,150,
 TONES_REPEAT
};