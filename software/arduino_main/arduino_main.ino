/*--- uncomment the sensur you are going to use: ---*/
#define SFM3000 true
#define HAFUHH0200L2AXT true
#define HAFUHH0200L3AXT true
#define HAFUHH0200L4AXT true
#define HAFUHH0200L5AXT true
#define HAFUHH0200L6AXT true
#define HAFUHH0200L7AXT true
#define TSI840523 true
/*--- Number of flow sensors ---*/
#define CntSensor 1
#define CntSensor 2
#define CntSensor 3
#define CntSensor 4
/*--- Set allowed diefference between sensors (in percent) ---*/
#define AllowedPercentage 10 //not a suggested value, just a random value!

#include "Wire.h"

void setup() {
  // put your setup code here, to run once:
#ifndef TSI840523
  Wire.begin();
#endif //TSI840523  

}

void loop() {
  // put your main code here, to run repeatedly:

  

  //CheckDifference if more than one Sensor
  if(CntSensor > 1){
    if(!CheckDifference(AllowedPercentage))
      StartAlarm();
    
  }
}

#if TSI840523
bool CheckPlausibility(){
  
}

bool CheckDifference(uint8_t percent){

   
}

void StartAlarm(){

  
}
#endif //TSI840523
