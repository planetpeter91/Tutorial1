#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
   string userInputDecision = "P";
   string userInputFree;
   string userInputStr;
   int yogurtCounter = 0;
   int userNumberYogurts;

   while ((userInputDecision != "S") || (userInputDecision != "s"))
   {
      cout << "Menu: " << endl;
      cout << "P: Process Purchase " << endl;
      cout << "S: Shut Down " << endl << endl;

      cout << "Your Choice: ";
      getline(cin, userInputDecision);

      if ((userInputDecision == "P") || (userInputDecision == "p"))
      {

         if (yogurtCounter > 10)
         {
            while ((userInputFree != "Y") || (userInputFree != "y"))
            {

               cout << "You qualify for a free yogurt. Would you like to "
                  "use your credits? (Y or N)" << endl << endl;
               getline(cin, userInputFree);
               if ((userInputFree == "Y") || (userInputFree == "y"))
               {
                  yogurtCounter -= 10;
                  cout << "\nYou have just used 10 credits and have "
                     << yogurtCounter << " left. \nEnjoy your free yogurt." << endl
                     << endl;
                  break;
               }
               else if ((userInputFree == "N") || (userInputFree == "n"))
               {
                  cout << "\nHow many yogurts would you like to buy? ";
                  getline(cin, userInputStr);
                  istringstream(userInputStr) >> userNumberYogurts;

                  yogurtCounter += userNumberYogurts;
                  cout << "\nYou just earned " << userNumberYogurts << " stamp(s) and "
                     "have a total of " << yogurtCounter << " to use." << endl << endl;
               }
               else
               {
                  cout << "\nUse Y or N please." << endl << endl;
               }
            }
         }

         else
         {
            cout << "\nHow many yogurts would you like to buy? ";
            getline(cin, userInputStr);
            istringstream(userInputStr) >> userNumberYogurts;

            yogurtCounter += userNumberYogurts;
            cout << "\nYou just earned " << userNumberYogurts << " stamp(s) and "
               "have a total of " << yogurtCounter << " to use." << endl << endl;
         }

      }
      else if ((userInputDecision == "S") || (userInputDecision == "s"))
      {
         cout << "\nSystem has been shut down for the day." << endl << endl;
         return 0;
      }
      else
      {
         cout << "\nUse P or S please." << endl << endl;
      }
   }

   return 0;
}
