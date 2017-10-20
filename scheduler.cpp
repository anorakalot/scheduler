#include <iostream>
#include <cmath>
#include <vector>
#include <map>




std::string input;

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




int main(){
std::cout << std::endl << std::endl;
std::cout << "Salutations! Welcome to your scheduler app!"<<std::endl;
std::cout << "What do you want to do?"<<std::endl;
std::cout << "1. Add things to your schedule"<<std::endl;
std::cout << "2. Recieve advice about optimal study times"<<std::endl;
std::cout << "3. View your schedule"<<std::endl;
std::cout << "4. Exit the program"<<std::endl;

std::cin >> input;
// to make a new schedule

if (input == "1"){
    //make new schedule

    //variable to make sure they chose the right thing in the menu
    std::string right_menu_check;
    std::cout << std::endl << std::endl;
    std::cout << "make changes to your schedule here\n"
    "input days as (m,t,w,r,f,s,su)\n"
    "input time as military_time\n"
    /*
    "Only do intervals for hours"
    "Example of proper input 12-13"
    "Time is in military time"
    */
    "Example: 1 pm = 13 in military time"<<std::endl;
    std::cout << "Do you want to make changes to your schedule?"<<std::endl;
    std::cin >> right_menu_check;
    if (right_menu_check == "Y" || right_menu_check == "y"){
      std::cout << std::endl<<std::endl;

      while(checker){
      std::cout << "Day: ";
      std::cin >> day;
      std::cout << "Time: ";
      std::cin >> input_time;
      std::cout << "Activity: ";
      std::cin >> activity;

      if (day == "m"){
        monday[input_time] = activity;
      }
      else if (day == "t"){
        tuesday[input_time] = activity;
      }
      else if (day == "w"){
        wednesday[input_time] = activity;
      }
      else if (day == "r"){
        thursday[input_time] = activity;
      }
      else if (day == "f"){
        friday[input_time] = activity;
      }
      else if (day == "s"){
        saturday[input_time] = activity;
      }
      else if (day == "su"){
        sunday[input_time] = activity;
      }
      else{
        std::cout << "not a valid day"<<std::endl;
      }
      std::cout << "Continue?(Y or N)"<<std::endl;
      std::cin >> while_stopper;
      if (while_stopper == "N"|| while_stopper == "n"){
        break;
      }


    //end of while loop
      }

  }
  else{
//end of option one
main();
}
main();
}

// give helpful hints
if (input == "2"){
  std::string advice_input;
  std::cout << "which day do you want free time advice for! (m,t,w,r,f,s,su) or exit"<<std::endl;
  std::cin >> advice_input;
  if (advice_input == "m"){
    //FIXME put in nested if statements to give advice for different
    if (monday[6] == ""){
      std::cout << "It looks like you have some time in the morning to study! Happy Studying!"<<std::endl;
    }
    else{

    }
  }



//end of hint option
main();
}

//show schedule
if (input == "3"){
  std::string which_day;
  std::cout << "which day schedule? (m,t,w,r,f,s,su)"<<std::endl<<std::endl;
  std::cin >> which_day;

  if (which_day == "m"){
    std::cout << "MONDAY"<<std::endl;
    for (int i = 0; i < monday.size(); ++i){
      std::cout << i<<": ";
      std::cout << monday[i]<<std::endl;
  }
}
  else if (which_day == "t"){
    std::cout << "TUESDAY"<<std::endl;
    for (int i = 0; i < tuesday.size(); ++i){
      std::cout << i<<": ";
      std::cout << tuesday[i]<<std::endl;
  }
}
  else if (which_day == "w"){
    std::cout << "WEDNESDAY"<<std::endl;
    for (int i = 0; i < wednesday.size(); ++i){
      std::cout << i<<": ";
      std::cout << wednesday[i]<<std::endl;
  }
}
  else if (which_day == "r"){
    std::cout << "THURSDAY"<<std::endl;
    for (int i = 0; i < thursday.size(); ++i){
      std::cout << i<<": ";
      std::cout << thursday[i]<<std::endl;
  }
}

  else if (which_day == "f"){
    std::cout << "FRIDAY"<<std::endl;
    for (int i = 0; i < friday.size(); ++i){
      std::cout << i<<": ";
      std::cout << friday[i]<<std::endl;
  }
}

  else if (which_day == "s"){
    std::cout << "SATURDAY"<<std::endl;
    for (int i = 0; i < saturday.size(); ++i){
      std::cout << i<<": ";
      std::cout << saturday[i]<<std::endl;
  }
}


  else if (which_day == "su"){
    std::cout << "SUNDAY"<<std::endl;
    for (int i = 0; i < sunday.size(); ++i){
      std::cout << i<<": ";
      std::cout << sunday[i]<<std::endl;
  }
}
//end of option 3
main();
}

if (input == "4"){
  std::string end_input;
  std::cout << "are you sure?(Y or N)"<<std::endl;
  std::cin >> end_input;
  if (end_input == "Y" || end_input == "y"){
    return 0;
  }
  else{
    main();
  }
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
/*
developer notes finish the hints
and finish with the see schedule function
*/
