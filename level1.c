//Program to find distance between two latitude and longitude
#include<stdio.h>
#include<math.h>
#define pi 3.14
//declaration of functions to be used
double deg2rad(double deg);
double rad2deg(double rad);
//first iteration of lat and long predefined
#define lat1 10.123456
#define lon1 21.123456
main()
{ 
double lat2, lon2, value, theta;
printf("Enter the latitude and longitude...");
scanf("%lf%lf", &lat2, &lon2);
printf("The latitude  and longitude are lat2= %lf and lon2=%lf\n",lat2, lon2);
//logic to calculate distance between two lat lon values
theta=lon1-lon2;
value=sin(deg2rad(lat1))*sin(deg2rad(lat2))+cos(deg2rad(lat1))*cos(deg2rad(lat2))*cos(deg2rad(theta));
value=acos(value);
value=rad2deg(value);
value=value*60*1.1515*1.609344;
//logic ends
printf("The distance is %lf kms",value);
return 0;
}

//logic to convert from degree to radians
double deg2rad(double deg){
return (deg * pi/180);
}

//logic to convert from radians to degree
double rad2deg(double rad){
return (rad * 180/pi);
}
