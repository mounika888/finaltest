int Lane1[]={2,3};
int Lane2[]={4,5};
int Lane3[]={6,7};
int Lane4[]={8,9};

void setup() 
{
  
  Serial.begin(115200);
  
  for(int i=0;i<2;i++)
  {
    pinMode(Lane1[i],OUTPUT);
    pinMode(Lane2[i],OUTPUT);
    pinMode(Lane3[i],OUTPUT);
    pinMode(Lane4[i],OUTPUT);
  }
  
 /* for(int i=0;i<2;i++)
  {
    digitalWrite(Lane1[i],LOW);
    digitalWrite(Lane2[i],LOW);
    digitalWrite(Lane3[i],LOW);
    digitalWrite(Lane4[i],LOW);
  }*/
}


void loop()
{
  int a,b,c,d;
  a=analogRead(0);
  b=analogRead(1);
  c=analogRead(2);
  d=analogRead(3);
  Serial.print("Sound-1=");
  Serial.println(a,DEC);
  //delay(1000);
  if(a>1000)
  loop1();
    Serial.print("Sound-2=");
  Serial.println(b,DEC);
   // delay(1000);
   if(b>1000)
   loop2();
   Serial.print("Sound-3=");
  Serial.println(c,DEC);
   // delay(1000);
   if(c>1000)
   loop3();
    Serial.print("Sound-4=");
  Serial.println(d,DEC);
  //delay(1000);
  if(d>1000)
  {
  loop4();
  Serial.println("*********************");

  }
  
else
loopNormal();
}
void loop1()
{
//lane-1
 digitalWrite(Lane1[1],HIGH);
  digitalWrite(Lane2[0],HIGH);
  digitalWrite(Lane3[0],HIGH);
  digitalWrite(Lane4[0],HIGH);
  Serial.println("ambulance at lane 1");
  Serial.println("lane 1 to green");
  delay(4000);
  digitalWrite(Lane1[1],LOW);
  digitalWrite(Lane2[0],LOW);
  digitalWrite(Lane3[0],LOW);
  digitalWrite(Lane4[0],LOW);
  //delay(4000);
//lane-1
 digitalWrite(Lane1[1],HIGH);
  digitalWrite(Lane2[0],HIGH);
  digitalWrite(Lane3[0],HIGH);
  digitalWrite(Lane4[0],HIGH);
  delay(4000);
  digitalWrite(Lane1[1],LOW);
  digitalWrite(Lane2[0],LOW);
  digitalWrite(Lane3[0],LOW);
  digitalWrite(Lane4[0],LOW);
  //delay(4000);
 }
void loop2()
{
  
  //lane-2
 digitalWrite(Lane1[0],HIGH);
  digitalWrite(Lane2[1],HIGH);
  digitalWrite(Lane3[0],HIGH);
  digitalWrite(Lane4[0],HIGH);
 delay(4000);
   Serial.println("ambulance at lane 2");
  Serial.println("lane 2 to green");
   digitalWrite(Lane1[0],LOW);
  digitalWrite(Lane2[1],LOW);
  digitalWrite(Lane3[0],LOW);
  digitalWrite(Lane4[0],LOW);
  //delay(4000);
  
  
  //lane-2
 digitalWrite(Lane1[0],HIGH);
  digitalWrite(Lane2[1],HIGH);
  digitalWrite(Lane3[0],HIGH);
  digitalWrite(Lane4[0],HIGH);
   delay(4000);
   digitalWrite(Lane1[0],LOW);
  digitalWrite(Lane2[1],LOW);
  digitalWrite(Lane3[0],LOW);
  digitalWrite(Lane4[0],LOW);
  //delay(4000);
  } 
void loop3()
  {
 
 //lane-3
  digitalWrite(Lane1[0],HIGH);
  digitalWrite(Lane2[0],HIGH);
  digitalWrite(Lane3[1],HIGH);
  digitalWrite(Lane4[0],HIGH);
    Serial.println("ambulance at lane 3");
  Serial.println("lane 3 to green");
delay(4000);
   digitalWrite(Lane1[0],LOW);
  digitalWrite(Lane2[0],LOW);
  digitalWrite(Lane3[1],LOW);
  digitalWrite(Lane4[0],LOW);
  //delay(4000);
 //lane-3
  digitalWrite(Lane1[0],HIGH);
  digitalWrite(Lane2[0],HIGH);
  digitalWrite(Lane3[1],HIGH);
  digitalWrite(Lane4[0],HIGH);
delay(4000);
   digitalWrite(Lane1[0],LOW);
  digitalWrite(Lane2[0],LOW);
  digitalWrite(Lane3[1],LOW);
  digitalWrite(Lane4[0],LOW);
  //delay(4000);
  }
void loop4()
{
//lane-4
  digitalWrite(Lane1[0],HIGH);
  digitalWrite(Lane2[0],HIGH);
  digitalWrite(Lane3[0],HIGH);
  digitalWrite(Lane4[1],HIGH);
    Serial.println("ambulance at lane 4");
  Serial.println("lane 4 to green");
  delay(4000);
     digitalWrite(Lane1[0],LOW);
  digitalWrite(Lane2[0],LOW);
  digitalWrite(Lane3[0],LOW);
  digitalWrite(Lane4[1],LOW);
 // delay(4000);  
//lane-4
  digitalWrite(Lane1[0],HIGH);
  digitalWrite(Lane2[0],HIGH);
  digitalWrite(Lane3[0],HIGH);
  digitalWrite(Lane4[1],HIGH);
  delay(4000);
     digitalWrite(Lane1[0],LOW);
  digitalWrite(Lane2[0],LOW);
  digitalWrite(Lane3[0],LOW);
  digitalWrite(Lane4[1],LOW);
 // delay(4000);
  
}

void loopNormal()
{
 
//lane-1
 digitalWrite(Lane1[1],HIGH);
  digitalWrite(Lane2[0],HIGH);
  digitalWrite(Lane3[0],HIGH);
  digitalWrite(Lane4[0],HIGH);
  delay(2000);
   digitalWrite(Lane1[1],LOW);
  digitalWrite(Lane2[0],LOW);
  digitalWrite(Lane3[0],LOW);
  digitalWrite(Lane4[0],LOW);
  //delay(4000);
  
  //lane-2
 digitalWrite(Lane1[0],HIGH);
  digitalWrite(Lane2[1],HIGH);
  digitalWrite(Lane3[0],HIGH);
  digitalWrite(Lane4[0],HIGH);
 delay(2000);
   digitalWrite(Lane1[0],LOW);
  digitalWrite(Lane2[1],LOW);
  digitalWrite(Lane3[0],LOW);
  digitalWrite(Lane4[0],LOW);
  //delay(4000);
  

 
 //lane-3
  digitalWrite(Lane1[0],HIGH);
  digitalWrite(Lane2[0],HIGH);
  digitalWrite(Lane3[1],HIGH);
  digitalWrite(Lane4[0],HIGH);
delay(2000);
   digitalWrite(Lane1[0],LOW);
  digitalWrite(Lane2[0],LOW);
  digitalWrite(Lane3[1],LOW);
  digitalWrite(Lane4[0],LOW);
  //delay(4000);
  

//lane-4
  digitalWrite(Lane1[0],HIGH);
  digitalWrite(Lane2[0],HIGH);
  digitalWrite(Lane3[0],HIGH);
  digitalWrite(Lane4[1],HIGH);
  delay(2000);
     digitalWrite(Lane1[0],LOW);
  digitalWrite(Lane2[0],LOW);
  digitalWrite(Lane3[0],LOW);
  digitalWrite(Lane4[1],LOW);
 // delay(4000);
 loop();
}








  
