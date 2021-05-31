#include <iostream>
#include <cmath>

using namespace std;

double zufall(int a, int c, int m){
  static int i = 16548432;
  return i = ((a*i+c) % m);
}

int main() {
  double na = 100;
  double ni = 0;
  int a = 5;
  int c = 3;
  int m = 16;

  for(int i = 1; i <= na; i++){
    double j = sqrt(pow(2*(zufall(a, c, m)/m)-1,2)+pow(2*(zufall(a ,c ,m)/m)-1, 2));
    if(j < 1){
      ni++;
    }
  }
  double pi = ((ni * 4)/na);
  double e = (M_PI/4)*na;
  double v = (M_PI/4)*(1-(M_PI/4))*na;
  double sig = 4*(sqrt(v)/na);

  cout << "Pi: " << pi << endl;
  cout << "Ni: " << ni << endl;
  cout << "Erwartungswert: " << e << endl;
  cout << "Varianz: " << v << endl;
  cout << "Sigma pi: " << sig << endl;
}