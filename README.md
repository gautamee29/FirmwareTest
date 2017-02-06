
# FirmwareTest
Level 1
Pseudocode 
```
Define the value of pi, lat1, lon1.
Declaration for the function to be used.
Initialize the value.
Enter the value of Lon2 and Lat2.
Logic to find distance .
Theta= lon1-lon2
 value=sin(deg2rad(lat)*sin(deg2rad(lat2))+cos(deg2rad(lat1)*cos(deg2rad(lat2))*cos(deg2rad(theta));
Use Logic to convert deg to rad 
Logic to convert rad to deg.
Stop
```
Command to run level1 program
```
sudo gcc level.c -o level -lm
./level 1
```
Level 2
Pseudo code
Initialize the file pointer.
Declaration for the pointers to be used.
Open the file.
Check for the errors while opening the file.
Check line by line of the file.
Set the reading counter to 0.
Check if its GPGGA, GPRMC, GPGSV, GPVTG, GPGSA.
Check for the lat, lon, timestamp and velocity and accordingly print the values.
Increment the counter.
Close the file.
Stop

Code to run
Sudo gcc level3.c -o level2
./level2



Level 3
Pseudo code
Define the value of true, false, buffer, size.
Enter the buffer message.
INITIATE THE MICROCONTROLLER THAT GENERATES DATA EVERY 30SEC
 Executing aftre evry 30sec.
 AInitiate data server to connect and disconnect.
 Executing after every 31 sec
Flush the buffer if connected.
Logic to commect and disconnect from microcontroller.
If true connect 
Else disconnect
Process input ends.
Creating thread for running the pseudomicrocontroller.
Creating thread for running the pseudo server.
End


Code to run level 3
Sudo gcc level.c -o level -lpthread
./level3
