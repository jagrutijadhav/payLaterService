#include <bits/stdc++.h>

using namespace std;

class acceptUsers
{

public:
   map<string, map<string, int>> userData;
   // ***** ACCEPT USER DATA ********
   void addusers()
   {

      int numberOfUsers;

      cout << " enter  number of Users : ";
      cin >> numberOfUsers;

      for (int i = 0; i < numberOfUsers; i++)
      {

         string name, email;
         int credit;

         cout << "Enter Name, E-mail ID and Cash Credit of Users" << i + 1 << " respectively : ";
         cin >> name >> email >> credit;

         userData.insert(make_pair(name, map<string, int>()));
         userData[name].insert(make_pair(email, credit));
      }
      printUsers(userData);
   }

   // ******* DISPLAY USER DATA *******
   void printUsers(map<string, map<string, int>> userData)
   {
      cout << "NAME \t EMAIL \t CREDIT" << endl;

      for (auto outerData : userData)
         for (auto innerData : outerData.second)
            cout << outerData.first << "\t" << innerData.first << "\t" << innerData.second << endl;
   }
};
int userCredit;
class SearchUserData : public acceptUsers
{

public:
   int sample, count = 0;
   string foundName, foundemail;

   // ******* FIND REQUIRED USER NAME ;*******
   void searchUserElement(string userName)
   {
      //sample = 10;
      bool f = 0;
      for (auto i : this->userData)
      {
         for (auto j : i.second)
         {
            if (userName == i.first)
            {
               userCredit = j.second;
               // count++;
               f = 1;
               break;
            }
         }
         if (f)
            break;
      }

      if (f == 0)
      {
         cout << "PLEASE ENTER VALID NAME";
      }
      // cout << "UESECREDIT  1 ====" << userCredit << endl;
   }
};

class checkUserCredit : public SearchUserData
{

public:
   int newcredit = 0;
   // ******** CHECK WHETHER REQUIRED AMOUNT EXIST OR NOT ******

   int checkCredit(int price)
   {
      // cout << "UESECREDIT  2 ====" << userCredit << endl;

      // checkUserCredit acceptUserObj;
      //mainclass mainobj;
      if (userCredit > price)
      {
         bool f = 0;
         for (auto outerData : userData)
         {
            for (auto innerData : outerData.second)
            {
               if (userCredit == innerData.second)
               {
                  newcredit = innerData.second;
                  newcredit = innerData.second - price;
                  innerData.second = newcredit;
                  f = 1;
                  break;
               }
            }
            if (f)
               break;
         }

         cout << "**** USER CREDIT ***** " << userCredit << endl;
      }
      else
      {
         cout << "INVALID TRANSACTION..!! :(" << endl;
      }
      return newcredit;

      //mainobj.getUserData(newcredit);
   }
};
