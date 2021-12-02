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

![ultrasonic_as_alarm](https://user-images.githubusercontent.com/66858111/144490627-74545d7a-77e4-4c74-a48c-f7ad209a7cdf.jpg)

BUZZER
Buzzer, an output device can be mainly of two types :
-Piezoelectric buzzer
-Magnetic buzzer

In peizoelectric, when an AC voltage is applied to the peizo element, the element extends and shrinks diametrically. The motion of this vibration generates sound waves.
In magnetic, there is vibrating disk which is attracted to the pole by the magnetic field. When an oscillating signal is moved through the coil, it produces a fluctuating magnetic field which vibrates the disk at a frequency equal to that of the drive signal.

In the above Ultrasonic_as_alarm_test.ino file, the piezo based buzzer is used. 
