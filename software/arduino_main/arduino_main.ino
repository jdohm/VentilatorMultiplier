// uncomment the sensur you are going to use:
#define SFM3000 true
#define HAFUHH0200L2AXT true
#define HAFUHH0200L3AXT true
#define HAFUHH0200L4AXT true
#define HAFUHH0200L5AXT true
#define HAFUHH0200L6AXT true
#define HAFUHH0200L7AXT true
#define TSI840523 true

#include "Wire.h"

void setup() {
  // put your setup code here, to run once:
#if !TSI840523
  Wire.begin();
#endif //!TSI840523  

}

void loop() {
  // put your main code here, to run repeatedly:

}

#if TSI840523
bool CheckPlausibility(){
  
}

bool CheckDifference(uint8_t percent){

   
}
#endif //TSI840523
