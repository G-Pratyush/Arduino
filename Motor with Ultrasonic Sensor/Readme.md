Measuring distance and rotating motor clockwise/anti-clockwise/stop.

I made the circuit using an Arduino UNO R3, a breadboard, L293D IC, UltraSonic sensor(HC-SR04) and a DC motor.
L293D IC enables us to rotate the motor in clockwise or anticlockwise direction based in the input.

HC-SR04 (used instead of HC-SR05, as this was not available on Tinkercad) returns the time taken for the pulse to return to the sensor, which is used to calculate the distance.

Code explanation: 
sensor is triggered for 10 microseconds and then the pulse transmission-receiver time (using pulseIn fucntion) is taken after which distance is calculated by using the factor of 0.01723 * pulse duration.
If-Else statements are used for checking the distance and rotating motor accordingly
	Distance>80cm : motor rotates clockwise
	Distance<60cm : motor rotates anti-clockwise
	Distance between 60 cm and 80 cm : motor doesn't rotate.
	
Link to the tinkercad project: https://www.tinkercad.com/things/13eV6bESvUo
