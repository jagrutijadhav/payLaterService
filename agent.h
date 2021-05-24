#include <bits/stdc++.h>
//#include "user.h"
//#include "merchant.h"
using namespace std;

class getDataToAgent
{

public:
    void getUserDataToAgent(int price)
    {

        checkUserCredit usertoagentobj;
        int newcredit = usertoagentobj.checkCredit(price);
        
        SearchMerchantData merchanttoagentobj;
        float discount = merchanttoagentobj.merchantDiscount;
        gainprofit(discount, price, newcredit);
    }

    void gainprofit(float discount, int price, int newcredit)
    {

        float profit;
        cout << "new user credit [newcredit] : " << newcredit << endl;

        cout << " Total number of amount [price] : " << price << endl;

        cout << "dicount [discount] " << discount << endl;

        profit = (discount * round((float)price)) / round((float)(newcredit * 100));
        cout << "profit : " << profit << endl;
    }
};
