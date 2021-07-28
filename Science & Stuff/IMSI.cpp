#include <iostream>
#include <string>
using namespace std;
int main ()
{

unsigned char plmn_id[] = {0x31, 0xf4, 0x01}; /* Encoded PLMN Id */
string mcc, mnc;
unsigned char ch = 0;
int i;

/* First Digit of MNC */
ch = plmn_id[0] & 0xf;
mcc.push_back(ch + '0');

ch = (plmn_id[0] & 0xf0) >> 4;
mcc.push_back(ch + '0');

ch = plmn_id[1] & 0xf;
mcc.push_back(ch + '0');

/* DEcoding MNC 8 */

ch = plmn_id[2] & 0xf;
mnc.push_back(ch + '0');

ch = (plmn_id[2] & 0xf0) >> 4;
mnc.push_back(ch + '0');

ch = (plmn_id[1] & 0xf0) >> 4;
if(ch != 0x0f)
{
/* If MNC is 3 digits log */
mnc.push_back(ch + '0');
}
cout << "MCC = "<< mcc <<":" << "MNC = " << mnc << endl;

return 0;
}
