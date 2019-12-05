import de.bezier.data.sql.*;
import processing.serial.*;

MySQL msql;      
String[] a;
int end = 10;    
String serial;   
Serial port;     

void setup() {
  String user     = "root";
  String pass     = "";
  String database = "Meme";
  
  msql = new MySQL( this, "localhost", database, user, pass );
    
  port = new Serial(this, "COM7", 9600); 
  port.clear();  
  serial = port.readStringUntil(end); 
  serial = null; 
}

void draw() 
{
  
  while (port.available() > 0) 
  { 
     
    serial = port.readStringUntil(end);
  }
    if (serial != null) 
    {  
      
    
      a = split(serial, ',');  
      println(a[0]); 
      println(a[1]); 
     
      function();
    }
}

void function()
{
  if ( msql.connect() )
    {
        msql.query( "insert into data(LPG,Smoke)values("+a[0]+","+a[1]+")" );
    }
    else
    {
       
    }
    msql.close();  
}
