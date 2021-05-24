#include <bits/stdc++.h>

using namespace std;

class acceptMerchants
{

public:
   map<string, map<string, float>> merchantData;

   // ***** ACCEPT USER DATA *****

   void addMerchants()
   {

      int numberOfMerchants;

      cout << " enter  number of Merchants : ";
      cin >> numberOfMerchants;

      for (int i = 0; i < numberOfMerchants; i++)
      {

         string m_name, m_email;
         float discount;

         cout << "Enter Name, E-mail ID and Cash Credit of Merchants" << i + 1 << " respectively : ";
         cin >> m_name >> m_email >> discount;

         merchantData.insert(make_pair(m_name, map<string, float>()));
         merchantData[m_name].insert(make_pair(m_email, discount));
      }
      printMerchants(merchantData);
   }

   // ******* DISPLAY USER DATA *******

   void printMerchants(map<string, map<string, float>> merchantData)
   {
      cout << "NAME \t EMAIL \t DISCOUNT" << endl;
      for (auto m_outerData : merchantData)
         for (auto m_innerData : m_outerData.second)
            cout << m_outerData.first << "\t" << m_innerData.first << "\t" << m_innerData.second << endl;
   }
};
class SearchMerchantData : public acceptMerchants
{

public:
   float merchantDiscount, count = 0;
   string foundMerchantName, foundMerchantEmail;
   // ******* FIND REQUIRED MERCHANT NAME *******
   void searchMerchantElement(string merchantName)
   {
      SearchMerchantData acceptMerchant_obj;
      //mainclass mainobj;

      for (auto outerData = merchantData.begin(); outerData != merchantData.end(); outerData++)
      {
         for (auto innerData = outerData->second.begin(); innerData != outerData->second.end(); innerData++)
         {
            if (outerData->first == merchantName)
            {
               //cout << outerData->first << " " << innerData->first << " " << innerData->second << endl;
               foundMerchantName = outerData->first;
               foundMerchantEmail = innerData->first;
               merchantDiscount = innerData->second;
               cout << "merchant discount" << merchantDiscount << " ---- " << innerData->second << endl;
               count++;
            }
         }
      }

      if (count != 1)
      {
         cout << "PLEASE ENTER VALID NAME";
      }

      //mainobj.getMarchantData(merchantDiscount);
   }
};
