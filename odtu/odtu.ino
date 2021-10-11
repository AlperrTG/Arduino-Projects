// Info on this sensor:  https://www.pololu.com/docs/0J19/all
// Sensor library:  https://github.com/pololu/qtr-sensors-arduino

#include <QTRSensors.h>

#define NUM_SENSORS  6     // number of sensors used
#define TIMEOUT   2500
#define EMITTER_PIN  2
// sensor connected through analog pins A0 - A5 i.e. digital pins 14-19
// note: the next two lines are really one line of code – it word-wrapped
unsigned int sensorValues[NUM_SENSORS];   // square brackets indicate an array
QTRSensors qtrrc ;



void setup()
{
   qtrrc.setTypeRC();
   qtrrc.setSensorPins((unsigned char[]) {3, 4, 5, 6, 7, 8}, NUM_SENSORS);
   Serial.begin(9600);
   delay(500);
   pinMode(13, OUTPUT);
   digitalWrite(13, HIGH);    // turn on Arduino's LED to indicate we are in calibration mode
   for (int i = 0; i < 400; i++)  // make the calibration take about 10 seconds
   {
    qtrrc.calibrate();   // reads all sensors 10 times at 2500 us per read (i.e. ~25 ms per call)
   }
   digitalWrite(13, LOW);  // turn off Arduino's LED to indicate we are through with calibration
   delay(2000);          //allow time to position the robot
}
void loop()
{
  unsigned int sensors[6];
  int position = qtrrc.readLine(sensors);
  int error = position - 2500;  // you may need to adjust this factor
  int errorMargin  = 100;       // you may need to adjust this factor

  Serial.print("Error: ");
  Serial.println(error);
  
  if(error > errorMargin)               
  {
   //code for turning to the left
  }
  else if(error < -errorMargin)
  {
    //code for turning to the right
  }

  //code to go straight 
  delay(50);
}
