#include <iostream>
#include <cmath>
#include <vector>
#include <map>



//std::map<int,std::string> newschedule(){
  //make new schedule

  //input variables;
  std::string day;
  int input_time;
  std::string activity;
  std::string while_stopper;
  bool checker = true;
  std::string empty;
  //"day" maps
  std::map<int, std::string> monday;
  std::map<int, std::string> tuesday;
  std::map<int, std::string> wednesday;


  std::map<int, std::string> thursday;
  std::map<int,std::string> friday;
  std::map<int, std::string> saturday;
  std::map<int, std::string> sunday;

  std::cout << "Welcome to your new schedule!!!\n"
  "Remeber input time as military_time\n"
  /*
  "Only do intervals for hours"
  "Example of proper input 12-13"
  "Time is in military time"
  */
  "Example 1 pm = 13 in military time"<<std::endl;
  std::cin >> empty;

  while(checker){
  std::cout << "Day: ";
  std::cin >> day;
  std::cout << "Time: ";
  std::cin >> input_time;
  std::cout << "Activity: ";
  std::cin >> activity;

  if (day == "monday"){
    monday[input_time] = activity;
  }
  else if (day == "tuesday"){
    tuesday[input_time] = activity;
  }
  else if (day == "wednesday"){
    wednesday[input_time] = activity;
  }
  else if (day == "thursday"){
    thursday[input_time] = activity;
  }
  else if (day == "friday"){
    friday[input_time] = activity;
  }
  else if (day == "saturday"){
    saturday[input_time] = activity;
  }
  else if (day == "sunday"){
    sunday[input_time] = activity;
  }
  else{
    std::cout << "not a valid day"<<std::endl;
  }
  std::cout << "Continue?(Y or N)"<<std::endl;
  std::cin >> while_stopper;
  if (while_stopper == "N"){
    checker = false;
  }

//end of while loop
  }

//end of newschedule()
}








int main(){
std::string input;








std::cout << "Greetings Welcome to your scheduler APP!"<<std::endl;
std::cout << "What do you want to do?"<<std::endl;
std::cout << "1. Make a new schedule"<<std::endl;
std::cout << "2. Make Changes to Your Schedule"<<std::endl;
std::cout << "3. Recieve advice about optimal study times"<<std::endl;
std::cout << "4. View your schedule"<<std::endl;

std::cin >> input;
// to make a new schedule
if (input == "1"){
  std::cout << "ARE YOU SURE IF YOU HAVE AN EXISTING SCHEDULE THIS WILL DELETE YOUR CHANGES (Y OR N)"<<std::endl;
  std::cin >> input;
  if (input == "Y"|| input == "y"){
    newschedule();
  }
  else{
    main();
  }
}

// changes for schedule
if (input == "2"){
  std::cout << "";
}
if (input == "3"){

}




// prototyping different data structures for diplaying schedule


std::string schedule =
"       Monday  ";
/*
monday[0]
monday[1]
monday[2]
monday[3]
monday[4]
monday[5]
monday[6]
monday[7]
monday[8]
monday[9]
monday[10]
monday[11]
monday[12]
monday[13]
monday[14]
monday[15]
monday[16]
monday[17]
monday[18]
monday[19]
monday[20]
monday[21]
monday[22]
monday[23]
*/




//end of main()
return 0;
}
