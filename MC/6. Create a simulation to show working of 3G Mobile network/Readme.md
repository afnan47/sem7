#Steps

1. Install Apache Jmeter for your platform
Link: https://jmeter.apache.org/download_jmeter.cgi

2. Extract the files.

3. Open Linux Terminal. Navigate to the directory where files were extracted using cd command.
   For example: cd /home/yourusername/Desktop/program-1.2.3

3. Now install the application using the following 3 commands:
	 i)  ./configure
	ii)  make
   iii)  sudo make install

4. Open bin folder of jmeter and search for user.properties file

5. Add the below code to your user.properties file
   For 3G network: 
   httpclient.socket.http.cps= 256000
   httpclient.socket.https.cps= 256000
   
   For 4G network:
   httpclient.socket.http.cps = 21888
   httpclient.socket.https.cps = 21888
  
6. Restart jmeter


   