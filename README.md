PAPER PIANO
Overview: Producing sound of different frequencies using Arduino and Capacitive Sensing.
 Materials required : 
1.	Metal wires
2.	Arduino(UNO)
3.	breadboard
4.	Speaker( 5W)
5.	Paper clips
6.	Cardboard

 
  
   
  
  
   
   
  
 

 

Procedure: 
•	Assemble the circuit according to this circuit diagram. 
•	Download the Capacitive Sensing libraries from playground.arduino.cc/Main/CapacitiveSensor?from=Main.CapSense
•	 Import the CapacitiveSensor.h header file into your Arduino syntax.
•	Define a speaker into your Arduino syntax by:
o	#define speaker 11
•	Set the Send Pins & Receive Pins for all the keys using CapacitiveSensor variables. For example:-
o	CapacitiveSensor   cs_2_3 = CapacitiveSensor(2,3);
•	Set some sample threshold values for each sensor above which the speaker will play a tone.
•	Upload the syntax onto the Arduino.
•	Open the serial monitor and check how high values for each key are being shown while touching the keys and while not touching the graphite keys.
•	According to these values, change the threshold values to values which are only exceeded when the keys are touched as the values will always be greater when the keys are touched since the capacitance and therefore time constant increases.
•	Upload the syntax onto the Arduino and then your paper piano device must be ready.

Working:
Each of the keys is a part of a series RC circuit and when you touch any of the keys, the capacitance in the circuit increases due to which the time constant values of the circuit increases and the syntax which is governed by the time constants instructs the speaker to play sounds of particular frequencies when the time constant values exceed a certain value. The frequency played by each key would be different.

Difficulties:
•	Making tight and steady connections in the bread board can be challenging and sometimes wires may fall off.
•	Debugging the syntax according to the serial monitor values can be time consuming. 
•	One shall stay safe and keep all the dangers in mind while soldering the final Printed Circuit Board (PCB).





