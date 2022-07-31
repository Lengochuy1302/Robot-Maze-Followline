# define STOPPED 0
# define FOLLOWING_LINE 1
# define NO_LINE 2
# define CONT_LINE 3
# define POS_LINE 4
# define RIGHT_TURN 5
# define LEFT_TURN 6

const int lineFollowSensor0 = 12; //Using Digital input
const int lineFollowSensor1 = 18; //Using Analog Pin A4 as Digital input
const int lineFollowSensor2 = 17; //Using Analog Pin A3 as Digital input
const int lineFollowSensor3 = 16; //Using Analog Pin A2 as Digital input
const int lineFollowSensor4 = 19; //Using Analog Pin A5 as Digital input
const int farRightSensorPin = 0;  //Analog Pin A0
const int farLeftSensorPin = 1;   //Analog Pin A1

const int leftmotor1  = 7;
const int leftmotor2  = 6; 
const int rightmotor1  = 5;
const int rightmotor2  = 4; 

int Max_Speed = 255, tocDoCongCo = 45,Min_Speed = 0, mode =0 , error =0;
int farRightSensor = 0;
int farLeftSensor = 0;
const int THRESHOLD = 500; 
int LFSensor[5]={0, 0, 0, 0, 0};

String chayLan1 = "" , chayLan2 = "";
String mangTam = "";
String duongChay="";
int pathLength=0;
int  i=0, j=0;
bool chayXong = false;
