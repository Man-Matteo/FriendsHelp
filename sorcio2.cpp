#include <iostream>
//#include <cmath>
using namespace std;

int main () {
  int hEnt, mEnt, hExit, mExit;
  int hWork, mWork;
  int mTotWork = 0;
  const float mPay = 0.20;
  const float mPayAfter18 = 0.24;
  float dPay;

  cout << "Ora di ingresso?" << endl;
  cin >> hEnt;
  cout << "Minuti di ingresso?" << endl;
  cin >> mEnt;
  cout << "Ora di uscita?" << endl;
  cin >> hExit;
  cout << "Minuti di uscita?" << endl;
  cin >> mExit;

  if(hExit < 18){                 //if to be checked
    hWork = hExit - hEnt;
    mWork = mExit - mEnt;
    mTotWork = hWork*60 + mWork;
    dPay = mPay*mTotWork;
  }

  if (hExit >= 18) {              //if to be checked
    int hAfter18 = hExit - 18;
    int mAfter18 = mExit;
    hWork = 18 - hEnt;
    mWork = 60 - mEnt;
    int mTotAfter18 = 60*hAfter18 + mAfter18;
    int mTotBefore18 = 60*hWork + mWork;
    dPay = mTotBefore18 * mPay + mTotAfter18 * mPayAfter18;
    mTotWork = mTotAfter18 + mTotBefore18 - 60;
  }

  cout << "Hai lavorato per " << mTotWork/60 << " ora/e e " << mTotWork%60 << " minuto/i per una paga totale di " << dPay << "€"<<endl;

  return 0;
}
