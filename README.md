
# FirmwareTest
 
For basic setup, run these commands in the terminal:
```
sudo apt-get update
sudo apt-get install build-essential
```

##Level 1
Pseudocode 
``` 
Start 
Define the value of pi, lat1, lon1(as first iteration should be preset).
Make Declaration for the function to be used.
Initialize the values.
Enter the value of Lon2 and Lat2.
execute Logic to find distance .
Theta= lon1-lon2
value=sin(deg2rad(lat)*sin(deg2rad(lat2))+cos(deg2rad(lat1)*cos(deg2rad(lat2))*cos(deg2rad(theta));
Use Logic to convert degree to radian.
Logic to convert radian to degree.
Stop
```
Command to run level1 program
```
sudo gcc level1.c -o level1 -lm
./level1
```
##Level 2
Pseudocode
```
Start
Initialize the file pointer.
Declaration for the pointers to be used.
Open the file.
Check for the errors while opening the file.
Check line by line of the file.
Set the reading counter to 0.
Check if type is GPGGA, GPRMC, GPGSV, GPVTG, GPGSA.
Check for the lat, lon, timestamp and velocity and accordingly print the values.
Increament the counter.
Close the file.
Stop
```
Command to run level 2 
```
sudo gcc level2.c -o level2
./level2 
```
##Level 3
Pseudocode
```
Start
Define the value of true, false, buffer, size.
choose the buffer message to be generated(currently hardcoded).
Initiate the pseudo microcontroller that generates the data every 30 sec.
Execute after 30 seconds
Initiate data server to connect and disconnect.
Execute after every 31 sec
Flush the buffer(data generated from pseudo microcontroller) if connected to data server else dont flush.
Take input, Connect and disconnect from microcontroller based on input and proceed
If true connect 
Else disconnect 
Keep  executing the two threads to mock communication
Stop
```
Code to run level 3
```
sudo gcc level3.c -o level3 -lpthread
./level3
```



Initial setup command
```
Sudo  apt-get update Sudo apt-get install build-essential
