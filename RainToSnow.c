//Name: Evelyn Smith
//Username: evelynsm
//Description: Program takes user input for amount of rain and temperature and uses it to estimate total snowfall in relation to the MTU Husky statue.




#include <stdio.h>
#include <math.h>
#include <stdlib.h>


int main(int argc, char** argv){
  //Terminate the program if there are not insufficient or invalid arguments
  if(argc < 3){
    printf("Usage: RainToSnow <inches of rain> <Fahrenheit temperature>\n");
    return 0;
  }else if(argc > 3 && atof(argv[1]) < 0){
    printf("Error!");
    return 0;
  }

  //Declare variables to be used for output
  int mult;
  double inches;
  double percent;
  //Parse user input
  double rain = atof(argv[1]);
  double temp = atof(argv[2]);
  


  //Use temperature to determine multiplier for snowfall
  if(temp >= 32){
    mult = 0;
  }else if(temp >= 27 && temp <= 32){
    mult = 10;
  }else if(temp >= 20 && temp <= 27){
    mult = 15;
  }else if(temp >= 15 && temp <= 20){
    mult = 20;
  }else if(temp >= 10 && temp <= 15){
    mult = 30;
  }else if(temp >= 0 && temp <= 10){
    mult = 40;
  }else if(temp >= -20 && temp <= 0){
    mult = 50;
  }else if(temp <= -20){
    mult = 100;
  }

  //Calculate total inches of rain and percent of Husky statue covered
  inches = rain * mult;
  percent = (inches/108) * 100;


  //Format and return output
    printf("%.1f inches of rain at %.1fF would result in %.1f inches of snow.\n", rain, temp, inches);
  
  if(inches >= 108){
    printf("This would cover all of the Husky statue!\n");
	   }else{
    printf("This would cover about %.0f%% of the Husky statue!\n", round(percent));
    }
  
    return 0;

}
