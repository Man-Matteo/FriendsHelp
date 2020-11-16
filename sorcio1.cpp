#include <iostream>
//#include <cmath>
using namespace std;

int main () {
  int hEnt, mEnt, hExit, mExit;
  int hWork, mWork, mTotWork;
  const float mPay = 0.20;
  float dPay;

  cout << "Ora di ingresso?" << endl;
  cin >> hEnt;
  cout << "Minuti di ingresso?" << endl;
  cin >> mEnt;
  cout << "Ora di uscita?" << endl;
  cin >> hExit;
  cout << "Minuti di uscita?" << endl;
  cin >> mExit;

  hWork = hExit - hEnt;
  mWork = mExit - mEnt;
  mTotWork = hWork*60 + mWork;
  dPay = mPay*mTotWork;
  cout << "Hai lavorato per  " << mTotWork/60 << " ora/e e " << mTotWork%60 << " minuto/i per una paga totale di " << dPay << "€"<<endl;


  return 0;
}
