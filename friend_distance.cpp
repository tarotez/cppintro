#include <iostream>
#include <math.h>
using namespace std;

class site_loc;

class user_loc{
  double lon, lat;
  friend double distance(user_loc u, site_loc s);
public:
  user_loc(double ln, double lt){lon = ln; lat = lt;};
};

class site_loc{
  double lon, lat;
  friend double distance(user_loc u, site_loc s);
public:
  site_loc(double ln, double lt){lon = ln; lat = lt;};
};

double distance(user_loc u, site_loc s){
  double dlon, dlat;
  dlon = u.lon - s.lon;
  dlat = u.lat - s.lat;
  return sqrt(pow(dlon * 40000 / 360, 2) + pow(dlat * 40000 * cos(35.68 * 3.1416 / 180) / 360, 2));
};

int main(){
  user_loc u1(35.681298, 139.766247);  // Tokyo Station
  // site_loc s1(37.912041, 139.061762); // Niigata Station
  site_loc s1(36.043006, 140.035425); // Tsukuba
  cout << "dist = " << distance(u1, s1) << "\n";
};

