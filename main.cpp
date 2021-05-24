#include <bits/stdc++.h>
#include "merchant.h"
#include "user.h"
#include "agent.h"
// class mainclass
// {
// public:
//   void getUserData(int newcredit)
//   {
//     // checkUserCredit userobj;
//     // int newcredit = userobj.newcredit;

//     // SearchMerchantData merchantobj;
//     // float merchantdiscount = merchantobj.merchantDiscount;
//     cout<<" credit : "<<newcredit<<endl;

//   }

//   void getMarchantData(float merchantDisount){
//     cout<<" discount : "<<merchantDisount<<endl;

//   }

//   void getprofit(int price, int newcredit, float merchantdiscount)
//   {
//     float profit;
//     cout << "new user credit [newcredit] : " << newcredit << endl;

//     cout << " Total number of amount [price] : " << price << endl;

//     cout << "dicount [discount] " << merchantdiscount << endl;

//     profit = (merchantdiscount * round((float)price)) / round((float)(newcredit * 100));
//     cout << "profit : " << profit << endl;
//   }
// };

int main()
{
// #ifndef ONLINE_JUDGE
//   freopen("input.txt", "r", stdin);
//   freopen("output.txt", "w", stdout);
// #endif
//mainclass mainobj;

  checkUserCredit userObj;
  SearchMerchantData merchantObj;
  getDataToAgent agentObj;

  userObj.addusers();
  merchantObj.addMerchants();

  int price;
  string userName, merchantName;

  cout << "enter User Name: ";
  cin >> userName;
  userObj.searchUserElement(userName);

  cout << "enter Merchant Name: ";
  cin >> merchantName;
  merchantObj.searchMerchantElement(merchantName);

  cout << "enter product price : ";
  cin >> price;
  //userObj.checkCredit(price);

  cout << "AGENT DETAILS:" << endl;
  agentObj.getUserDataToAgent(price);
  return 0;
}
/*
 3
u1 u1 300
u2 u2 400
u3 u3 500
3
m1 m1 1.5
m2 m2 1.0
m3 m3 1.2
u3
m1
250
*/