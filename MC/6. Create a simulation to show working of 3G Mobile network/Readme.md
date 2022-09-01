# Steps on Ubuntu Platform

    1. Download Apache Jmeter Source File, Link: https://jmeter.apache.org/download_jmeter.cgi

    2. Extract the files.

    3. Head to bin folder of the extracted jmeter folder, i.e cd jmeter/bin/
    
    4. Open terminal inside of bin folder and run ./jmeter
    
    5. Right click on Test Plan Create a new Thread Group
    
    6. Right click on Thread Group and Select Add > sampler > HTTP Request.
    
    7. Fill the boxes with the following details:-
	   Name : GetAPI
	   Protocol: HTTPS
	   Server Name/IP : reqres.in
	   Path : api/users
	   
	   Under "Parameters" click on Add:-
	   Name : page
	   Value : 2
	
	8. Right-click on the Thread group, Go to Add > listener options
	   In the box, check 'view results in a table'
	   Save the file by hitting ctrl + s.
	
	9. Hit Run button (Green Arrow Style Button)
	
	Now let's test the API for different Speeds!
	
	10. Open bin folder of jmeter and search for user.properties file

	11. Add the below code to your user.properties file
	    
		For 3G network: 
	    httpclient.socket.http.cps= 256000
	    httpclient.socket.https.cps= 256000
	   
	    For 4G network:
	    httpclient.socket.http.cps = 21888
	    httpclient.socket.https.cps = 21888
  
	12. Restart jmeter
	
	13. Test the APIs Again

