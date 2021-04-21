void LOOPS(){ 
  int j=1;
  while(j<3) //while loop
              
         {
             digitalWrite(Red,HIGH);
             digitalWrite(Red,LOW);
          }
  
  for (int k=1;k<=4;k++)  //for loop
          
          {
              digitalWrite(Green,HIGH);
              digitalWrite(Green,LOW);
           }
            
  for (int l=1;l<=5;l++)
          
          {
              digitalWrite(Amber,HIGH);
              digitalWrite(Amber,LOW);
           }
     
}
