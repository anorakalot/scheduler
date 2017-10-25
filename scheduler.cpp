/*TO DO
MAKE MORE ERROR CATCHERS

known error instances
-fix inputting a letter for time (causes program to spazz out)
-make a pause for when you give time management advice SOLVED
-make it so you can save your schedule
-seperate things into functions
-make an exit SOLVED
-catch if seconday_time is more than 24 SOLVED
-make overnight scheduling possible SOLVED
*/

//libraries for the program
#include <iostream>
#include <cmath>
#include <vector>
#include <map>
#include <unistd.h>//sleep library



//initialize variables to use throughout the program
std::string input;

std::string day;
std::string activity;
int input_time;
char dash;
int secondary_time;

std::string empty;
std::string while_stopper;

bool checker = true;
//"day" maps
std::map<int, std::string> monday;
std::map<int, std::string> tuesday;
std::map<int, std::string> wednesday;
std::map<int, std::string> thursday;
std::map<int,std::string> friday;
std::map<int, std::string> saturday;
std::map<int, std::string> sunday;


//function to make sure you can bypass certain errors
int other_main(){
std::cout << std::endl << std::endl;
std::cout << "Salutations! Welcome to your schedule app!"<<std::endl;
std::cout << "What do you want to do?"<<std::endl;
std::cout << "1. Add things to your schedule"<<std::endl;
std::cout << "2. Recieve advice about optimal study times"<<std::endl;
std::cout << "3. View your schedule"<<std::endl;
std::cout << "4. Exit"<<std::endl;
//std::cout << "4. Exit the program"<<std::endl;

std::cin >> input;
// to make a new schedule

if (input == "1"){
    //make new schedule

    //variable to make sure they chose the right thing in the menu
    std::string right_menu_check;
    std::cout << std::endl << std::endl;
    std::cout << "make changes to your schedule here!\n"
    "input days as (m,t,w,r,f,s,su)\n\n"
    "input time as military_time (hours)\n\n"
    "time syntax = [startingtime]-[endingtime]\n\n"
    /*
    "Only do intervals for hours"
    "Example of proper input 12-13"
    "Time is in military time"
    */
    "Example: 8-9 is valid time input\n"<<std::endl;
    std::cout << "Do you want to make changes to your schedule (Y or N)?"<<std::endl;
    std::cin >> right_menu_check;
    if (right_menu_check == "Y" || right_menu_check == "y"){
      std::cout << std::endl<<std::endl;

      while(checker){
        std::cout << "Day: ";
        std::cin >> day;
        std::cout << "Time: ";
        std::cin >> input_time >> dash >> secondary_time;
        std::cout << "Activity: ";
        std::getline(std::cin, empty);
        std::getline(std::cin,activity);
      //check time overload
      if (input_time> 24){
          std::cout << "thats not a valid time input"<<std::endl;
          continue;
        }
      else if (secondary_time> 24){
          std::cout << "thats not a valid time input"<<std::endl;
          continue;
        }

      //check for range of the both times to add entries

      //OVERNIGTH SCHEDULING
      //in case people want to do overnight scheduling this else if parameter will run
      //also make sure to run in case both are the same number
      else if (input_time - secondary_time >= 0 ){
        if (day == "m"){
          for (int x = input_time; x <= 24; ++x){
            monday[x] = activity;
          }
          for(int x = 0; x <secondary_time; ++x){
            monday[x] = activity;
          }
        }
        if (day == "t"){
          for (int x = input_time; x <= 24; ++x){
            tuesday[x] = activity;
          }
          for(int x = 0; x <secondary_time; ++x){
            tuesday[x] = activity;
          }
        }
        if (day == "w"){
          for (int x = input_time; x <= 24; ++x){
            wednesday[x] = activity;
          }
          for(int x = 0; x <secondary_time; ++x){
            wednesday[x] = activity;
          }
        }
        if (day == "r"){
          for (int x = input_time; x <= 24; ++x){
            thursday[x] = activity;
          }
          for(int x = 0; x <secondary_time; ++x){
            thursday[x] = activity;
          }
        }
        if (day == "f"){
          for (int x = input_time; x <= 24; ++x){
            friday[x] = activity;
          }
          for(int x = 0; x <secondary_time; ++x){
            friday[x] = activity;
          }
        }
        if (day == "s"){
          for (int x = input_time; x <= 24; ++x){
            saturday[x] = activity;
          }
          for(int x = 0; x <secondary_time; ++x){
            saturday[x] = activity;
          }
        }
        if (day == "su"){
          for (int x = input_time; x <= 24; ++x){
            sunday[x] = activity;
          }
          for(int x = 0; x <secondary_time; ++x){
            sunday[x] = activity;
          }
        }

        //end of else if input for overnight scheduling
      }
      //else statement in case scheduling is done in normal ascending hours
      else {
        if (day == "m"){
          for (int x = input_time; x < secondary_time; ++x){
            monday[x] = activity;
          }
          std::cout<<"change saved!"<<std::endl;
        }
        else if (day == "t"){
            for (int x = input_time; x < secondary_time; ++x){
              tuesday[x] = activity;
            }
            std::cout<<"change saved!"<<std::endl;
          }
        else if (day == "w"){
            for (int x = input_time; x < secondary_time; ++x){
              wednesday[x] = activity;
            }
            std::cout<<"change saved!"<<std::endl;
          }
        else if (day == "r"){
            for (int x = input_time; x < secondary_time; ++x){
              thursday[x] = activity;
              }
              std::cout<<"change saved!"<<std::endl;
            }
        else if (day == "f"){
            for (int x = input_time; x < secondary_time; ++x){
              friday[x] = activity;
            }
            std::cout<<"change saved!"<<std::endl;
          }
        else if (day == "s"){
            for (int x = input_time; x < secondary_time; ++x){
              saturday[x] = activity;
            }
            std::cout<<"change saved!"<<std::endl;
          }
        else if (day == "su"){
            for (int x = input_time; x < secondary_time; ++x){
              sunday[x] = activity;
            }
            std::cout<<"change saved!"<<std::endl;
          }
        else{
          std::cout << "not valid day"<<std::endl;
        }

  //end of else statement that puts in time statements if they're in ascending order
}


        //do after all if statements for time
        std::cout << "Continue? (Y or N))"<<std::endl;
        std::cin >> while_stopper;
        if (while_stopper == "N"|| while_stopper == "n"){
          break;
        }

      //end of while loop
    }

    //end of if choose to add entry
  }
  //if choose to not add entry
  else{
other_main();
}
//if user chooses after adding entry not to add entry
other_main();
}
//end of option one

// give helpful hints option
if (input == "2"){
  int sleep_time = 2000000;
  std::string advice_input;
  for (int x = 0; x < 20; ++x){
    std::cout << std::endl;
  }

  std::cout << "which day do you want free time managing advice for! (m,t,w,r,f,s,su)"<<std::endl;
  std::cin >> advice_input;

  //monday case advice
  if (advice_input == "m"){
    std::cout << std::endl << std::endl;
    for (int x = 10; x<22; ++x){
      if ((monday[x] == "") && (monday[x-1]=="") && (monday[x+1] == "")){
      std::cout << "It looks like you have time to get work done from " << x-1 << " to " << x+1<<std::endl;
      std::cout << "you've got this!"<<std::endl;
      usleep(sleep_time);
      //std::getline(std::cin,empty);
      other_main();
      }
    }
    std::cout << "WOAH it seems like you're really busy today you've got this!"<<std::endl;
  }
  else if (advice_input == "t"){
    std::cout << std::endl << std::endl;
    for (int x = 10; x<22; ++x){
      if ((tuesday[x] == "") && (tuesday[x-1]=="") && (tuesday[x+1] == "")){
      std::cout << "It looks like you have time to get work done from " << x-1 << " to " << x+1<<std::endl;
      std::cout << "you've got this!"<<std::endl;
      usleep(sleep_time);
      //std::getline(std::cin,empty);
      other_main();
      }
    }
    std::cout << "WOAH it seems like you're really busy today you've got this!"<<std::endl;
  }

  if (advice_input == "w"){
    std::cout << std::endl << std::endl;
    for (int x = 10; x<22; ++x){
      if ((wednesday[x] == "") && (wednesday[x-1]=="") && (wednesday[x+1] == "")){
      std::cout << "It looks like you have time to get work done from " << x-1 << " to " << x+1<<std::endl;
      std::cout << "you've got this!"<<std::endl;
      usleep(sleep_time);
      //std::getline(std::cin,empty);
      other_main();
      }
    }
    std::cout << "WOAH it seems like you're really busy today you've got this!"<<std::endl;
  }

  if (advice_input == "r"){
    std::cout << std::endl << std::endl;
    for (int x = 10; x<22; ++x){
      if ((thursday[x] == "") && (thursday[x-1]=="") && (thursday[x+1] == "")){
      std::cout << "It looks like you have time to get work done from " << x-1 << " to " << x+1<<std::endl;
      std::cout << "you've got this!"<<std::endl;
      usleep(sleep_time);
      //std::getline(std::cin,empty);
      other_main();
      }
    }
    std::cout << "WOAH it seems like you're really busy today you've got this!"<<std::endl;
  }

  if (advice_input == "f"){
    std::cout << std::endl << std::endl;
    for (int x = 10; x<22; ++x){
      if ((friday[x] == "") && (friday[x-1]=="") && (friday[x+1] == "")){
      std::cout << "It looks like you have time to get work done from " << x-1 << " to " << x+1<<std::endl;
      std::cout << "you've got this!"<<std::endl;
      usleep(sleep_time);
      //std::getline(std::cin,empty);
      other_main();
      }
    }
    std::cout << "WOAH it seems like you're really busy today you've got this!"<<std::endl;
  }

  if (advice_input == "s"){
    std::cout << std::endl << std::endl;
    for (int x = 10; x<22; ++x){
      if ((saturday[x] == "") && (saturday[x-1]=="") && (saturday[x+1] == "")){
      std::cout << "It looks like you have time to get work done from " << x-1 << " to " << x+1<<std::endl;
      std::cout << "you've got this!"<<std::endl;
      usleep(sleep_time);
      //std::getline(std::cin,empty);
      other_main();
      }
    }
    std::cout << "WOAH it seems like you're really busy today you've got this!"<<std::endl;
  }
  if (advice_input == "su"){
    std::cout << std::endl << std::endl;
    for (int x = 10; x<22; ++x){
      if ((sunday[x] == "") && (sunday[x-1]=="") && (sunday[x+1] == "")){
      std::cout << "It looks like you have time to get work done from " << x-1 << " to " << x+1<<std::endl;
      std::cout << "you've got this!"<<std::endl;
      usleep(sleep_time);
      //std::getline(std::cin,empty);
      other_main();
      }
    }
    std::cout << "WOAH it seems like you're really busy today you've got this!"<<std::endl;
  }
//end of hint option
other_main();
}

//show schedule
if (input == "3"){
  bool show_schedule_checker = true;
  while(show_schedule_checker){
  std::string which_day;
  std::cout << "which day schedule? (m,t,w,r,f,s,su)"<<std::endl<<std::endl;
  std::cin >> which_day;
  //use for loops to print out days schedule depending on above_input
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
std::cout << std::endl << std::endl;
std::string string_again;
std::cout << "Want to see your schedule for another day? (Y or N)"<<std::endl;
std::cin >> string_again;
if (string_again== "Y" || string_again == "y"){
  NULL;
}
else{
  break;
}
//end of option 3 while loop
}
//end of option 3 show schedule
other_main();
}

//option to close the program

if (input == "4"){
  std::string input_exit;
  std::cout << "Are you sure you want to exit"<<std::endl;
  std::cin >> input_exit;
  if (input_exit == "Y" || input_exit == "y"){
  std::_Exit(0);
}
  else{
    other_main();
  }

//end of option 4
}





//end of other_main()
return 0;
}

int main(){
for (int y = 0; y < 25; ++y){
  monday[y] = "";
}

for (int y = 0; y < 25; ++y){
  tuesday[y] = "";
}
for (int y = 0; y < 25; ++y){
  wednesday[y] = "";
}
for (int y = 0; y < 25; ++y){
  thursday[y] = "";
}
for (int y = 0; y < 25; ++y){
  friday[y] = "";
}
for (int y = 0; y < 25; ++y){
  saturday[y] = "";
}
for (int y = 0; y < 25; ++y){
  sunday[y] = "";
}

other_main();

//end of while program
return 0;
}
