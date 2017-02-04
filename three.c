//programme to find distance between two latitude and longitude
#include<stdio.h>
#include<math.h>
#define pi 3.14
//declare
double deg2rad(double deg);
double rad2deg(double rad);

#define lat1 10.123456
#define lon1 21.123456
main()
{ 
double lat2 , lon2; double value, theta;
printf("enter  the latitude and longitude  ");
scanf("%lf%lf", &lat2, &lon2);
printf("the latitude  and longitude are lat2= %lf and lon2=%lf\n",lat2, lon2);
//logic to calculate distance between two lat lon values
theta=lon1-lon2;
value=sin(deg2rad(lat1))*sin(deg2rad(lat2))+cos(deg2rad(lat1))*cos(deg2rad(lat2))*cos(deg2rad(theta));
value=acos(value);
value=rad2deg(value);
value=value*60*1.1515*1.609344;
//logic ends
printf("the distance is %lf kms",value);
return 0;
}

double deg2rad(double deg){
return (deg * pi/180);
}

double rad2deg(double rad){
return (rad * 180/pi);
}
