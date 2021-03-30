int numGrades;
float grades[15];
int j;
float av;
float bucket;

void setup(){
  Serial.begin(115200);
}

void loop(){

inputGrades();
avGrades();
printGrade();
}

void inputGrades(){
   Serial.println("How many Grades? ");
  while (Serial.available()==0){
  }
  numGrades=Serial.parseInt();

  for (j=1; j<=numGrades; j=j+1){
    Serial.println("please Input Grade: ");
    while (Serial.available()==0){
      
    }
    grades[j]=Serial.parseFloat();
    
  }
}

void avGrades(){
  
  for (j=1; j<=numGrades; j=j+1){
    bucket=bucket+grades[j];
  }
 av=bucket/numGrades;
 bucket=0;
}
void printGrade(){
 Serial.println ("your Grades Are: ");
 for (j=1; j<=numGrades; j=j+1){
  Serial.println(grades[j]);
 }
 Serial.println("");
 Serial.println("Your Average is: ");
 Serial.println(av);
 Serial.println("");
}
