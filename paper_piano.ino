// Import the CapacitiveSensor Library.
#include <CapacitiveSensor.h>


 
#define speaker 11


// Set the Send Pin & Receive Pin.
CapacitiveSensor   cs_2_3 = CapacitiveSensor(2,3);        
CapacitiveSensor   cs_2_4 = CapacitiveSensor(2,4);         
CapacitiveSensor   cs_2_5 = CapacitiveSensor(2,5);     
CapacitiveSensor   cs_2_6 = CapacitiveSensor(2,6);     
CapacitiveSensor   cs_2_7 = CapacitiveSensor(2,7);      
CapacitiveSensor   cs_2_8 = CapacitiveSensor(2,8);         
CapacitiveSensor   cs_2_9 = CapacitiveSensor(2,9);  
CapacitiveSensor   cs_2_10 = CapacitiveSensor(2,10);  
void setup() 
{
  cs_2_6.set_CS_AutocaL_Millis(0xFFFFFFFF);     // turn off autocalibrate on channel 1 - just as an example
  
  // Arduino start communicate with computer.
  Serial.begin(9600);
}


void loop() {
   // Set a timer.
  long start = millis();
  
  // Set the sensitivity of the sensors.
  long key1 =  cs_2_3.capacitiveSensor(3000);
  long key2 =  cs_2_4.capacitiveSensor(3000);
  long key3 =  cs_2_5.capacitiveSensor(3000);
  long key4 =  cs_2_6.capacitiveSensor(3000);
  long key5 =  cs_2_7.capacitiveSensor(3000);
  long key6 =  cs_2_8.capacitiveSensor(3000);
  long key7 =  cs_2_9.capacitiveSensor(3000);
  long key8 =  cs_2_10.capacitiveSensor(3000);
  int thres = 5000;


  Serial.print(millis() - start);        // check on performance in milliseconds
  Serial.print("\t");                    // tab character for debug windown spacing

  Serial.print(key1);                  // print sensor output 1
  Serial.print("\t");                    // Leave some space before print the next output
  Serial.print(key2);                  // print sensor output 2
  Serial.print("\t");                    // Leave some space before print the next output
  Serial.print(key3);                  // print sensor output 3
  Serial.print("\t");                    // Leave some space before print the next output
  Serial.print(key4);                  // print sensor output 4
  Serial.print("\t");                    // Leave some space before print the next output
  Serial.print(key5);                  // print sensor output 5
  Serial.print("\t");                    // Leave some space before print the next output
  Serial.print(key6);                  // print sensor output 6
  Serial.print("\t");                    // Leave some space before print the next output
  Serial.print(key7);                   // print sensor output 7
                                          // Leave some space before print the next output
  Serial.print("\t");
  Serial.println(key8);                 // print sensor output 8
                                         // "println" - "ln" represent as "line", system will jump to next line after print the output.
  
  
  
  
  // When hand is touched the sensor, the speaker will produce a tone.
  // I set a threshold for it, so that the sensor won't be too sensitive.
  if (key1 > thres) tone(speaker,131);   // frequency
  if (key2 > thres) tone(speaker,147);   // you can see https://www.arduino.cc/en/Tutorial/toneMelody if you want to change frequency
  if (key3 > thres) tone(speaker,165);
  if (key4 > thres) tone(speaker,175);
  if (key5 > thres) tone(speaker,196);
  if (key6 > thres) tone(speaker,220);
  if (key7 > thres) tone(speaker,247);
  if (key8 > thres) tone(speaker,262);
  
  // When hand didn't touch on it, no tone is produced.
  if (key1<=thres  &  key2<=thres  &  key3<=thres & key4<=thres  &  key5<=thres &  key6<=thres &  key7<=thres &  key8<=thres)
    noTone(speaker);
delay(10);
                               // arbitrary delay to limit data to serial port 
}
