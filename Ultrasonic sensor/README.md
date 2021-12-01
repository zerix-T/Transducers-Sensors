ULTRASONIC SENOSR / TRANSDUCER

The ultrasonic sensor generates or sense ultrasound energy. So, it uses 40 kHz of frequency for the operation.
For the Ultrasonic Sensor HC-SR04, which works on 5V of DC supply, the above code is written.

For the connection of the sensor with arduino:
- pin Vcc to pin 5V in arduino
- pin Gnd to gnd pin 
- pin trig to any digital pin 
- pin echo to another digital pin

The above code actually performs a simple detection test. That is, 
if any object is within 10 cm infront of sensor, it prints red zone alert message
else it tells object is in safe area.
