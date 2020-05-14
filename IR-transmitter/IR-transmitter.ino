#include <IRremote.h>

/*vars for terminal commands*/
char cmd[200];
int cmdIndex;
/*vars for terminal commands*/

/*var for IR comnands*/
int input_IR_pin = 10; //set D10 as input signal pin
int output_IR_pin = 2; // set D2 as output singnal pin
IRrecv irrecv(input_IR_pin);
IRsend irsend(output_IR_pin);
decode_results signals;
/*var for IR comnands*/

/*Conecction 0K*/
int output_connection_pin = 6;
/*Conecction 0K*/

int incomingByte = 0;

void setup()
{    
    /*terminal setting*/
    Serial.begin(115200);
    Serial3.begin(115200);
    /*terminal setting*/

    /*IR recv*/
    irrecv.enableIRIn();
    /*IR recv*/

    /*command form terminal*/
    cmdIndex = 0;
    /*command form terminal*/
}
void loop() {

    if (Serial3.available() > 0) {
         // Read a byte and write it to all clients.
         uint8_t ch = Serial3.read();
         char ch_s = (char)ch;
         //Serial.println(ch_s);

         if(ch != 10){
           if(ch != 13){
            cmd[cmdIndex] = ch_s;
            cmdIndex++; 
           }
         }
         else{
          //Serial.println(cmd);
          if(strcmp(cmd, "Message arrived [tv_living] POWER")  == 0){
            for(int i=0; i<3;i++){
              irsend.sendNEC(0x20DF10EF, 32);
              delay(100);
            }
          }
          else if (strcmp(cmd, "Message arrived [tv_living] TV")  == 0) {
            for(int i=0; i<3;i++){
              irsend.sendNEC(0x20DFF00F, 32);
              delay(100);
            }
          }
          else if (strcmp(cmd, "Message arrived [tv_living] CAPTION")  == 0) {
            for(int i=0; i<3;i++){
              irsend.sendNEC(0x20DF9C63, 32);
              delay(100);
            }
          }
          else if (strcmp(cmd, "Message arrived [tv_living] SLEEP")  == 0) {
            for(int i=0; i<3;i++){
              irsend.sendNEC(0x20DF708F, 32);
              delay(100);
            }
          }
          else if (strcmp(cmd, "Message arrived [tv_living] RATIO")  == 0) {
            for(int i=0; i<3;i++){
              irsend.sendNEC(0x20DF9E61, 32);
              delay(100);
            }
          }
          else if (strcmp(cmd, "Message arrived [tv_living] INPUT")  == 0) {
            for(int i=0; i<3;i++){
              irsend.sendNEC(0x20DFD02F, 32);
              delay(100);
            }
          }
          else if (strcmp(cmd, "Message arrived [tv_living] 1")  == 0) {
            for(int i=0; i<3;i++){
              irsend.sendNEC(0x20DF8877, 32);
              delay(100);
            }
          }
          else if (strcmp(cmd, "Message arrived [tv_living] 2")  == 0) {
            for(int i=0; i<3;i++){
              irsend.sendNEC(0x20DF48B7, 32);
              delay(100);
            }
          }
          else if (strcmp(cmd, "Message arrived [tv_living] 3")  == 0) {
            for(int i=0; i<3;i++){
              irsend.sendNEC(0x20DFC837, 32);
              delay(100);
            }
          }
          else if (strcmp(cmd, "Message arrived [tv_living] 4")  == 0) {
            for(int i=0; i<3;i++){
              irsend.sendNEC(0x20DF28D7, 32);
              delay(100);
            }
          }
          else if (strcmp(cmd, "Message arrived [tv_living] 5")  == 0) {
            for(int i=0; i<3;i++){
              irsend.sendNEC(0x20DFA857, 32);
              delay(100);
            }
          }
          else if (strcmp(cmd, "Message arrived [tv_living] 6")  == 0) {
            for(int i=0; i<3;i++){
              irsend.sendNEC(0x20DF6897, 32);
              delay(100);
            }
          }
          else if (strcmp(cmd, "Message arrived [tv_living] 7")  == 0) {
            for(int i=0; i<3;i++){
              irsend.sendNEC(0x20DFE817, 32);
              delay(100);
            }
          }
          else if (strcmp(cmd, "Message arrived [tv_living] 8")  == 0) {
            for(int i=0; i<3;i++){
              irsend.sendNEC(0x20DF18E7, 32);
              delay(100);
            }
          }
          else if (strcmp(cmd, "Message arrived [tv_living] 9")  == 0) {
            for(int i=0; i<3;i++){
              irsend.sendNEC(0x20DF9867, 32);
              delay(100);
            }
          }
          else if (strcmp(cmd, "Message arrived [tv_living] LIST")  == 0) {
            for(int i=0; i<3;i++){
              irsend.sendNEC(0x20DF32CD, 32);
              delay(100);
            }
          }
          else if (strcmp(cmd, "Message arrived [tv_living] 0")  == 0) {
            for(int i=0; i<3;i++){
              irsend.sendNEC(0x20DF08F7, 32);
              delay(100);
            }
          }
          else if (strcmp(cmd, "Message arrived [tv_living] QVIEW")  == 0) {
            for(int i=0; i<3;i++){
              irsend.sendNEC(0x20DF58A7, 32);
              delay(100);
            }
          }
          else if (strcmp(cmd, "Message arrived [tv_living] VOL+")  == 0) {
            for(int i=0; i<3;i++){
              irsend.sendNEC(0x20DF40BF, 32);
              delay(100);
            }
          }
          else if (strcmp(cmd, "Message arrived [tv_living] VOL-")  == 0) {
            for(int i=0; i<3;i++){
              irsend.sendNEC(0x20DFC03F, 32);
              delay(100);
            }
          }
          else if (strcmp(cmd, "Message arrived [tv_living] FAV")  == 0) {
            for(int i=0; i<3;i++){
              irsend.sendNEC(0x20DF7887, 32);
              delay(100);
            }
          }
          else if (strcmp(cmd, "Message arrived [tv_living] GUIDE")  == 0) {
            for(int i=0; i<3;i++){
              irsend.sendNEC(0x20DFD52A, 32);
              delay(100);
            }
          }
          else if (strcmp(cmd, "Message arrived [tv_living] MUTE")  == 0) {
            for(int i=0; i<3;i++){
              irsend.sendNEC(0x20DF906F, 32);
              delay(100);
            }
          }
          else if (strcmp(cmd, "Message arrived [tv_living] CH+")  == 0) {
            for(int i=0; i<3;i++){
              irsend.sendNEC(0x20DF00FF, 32);
              delay(100);
            }
          }
          else if (strcmp(cmd, "Message arrived [tv_living] CH-")  == 0) {
            for(int i=0; i<3;i++){
              irsend.sendNEC(0x20DF807F, 32);
              delay(100);
            }
          }
          else if (strcmp(cmd, "Message arrived [tv_living] PICTURE")  == 0) {
            for(int i=0; i<3;i++){
              irsend.sendNEC(0x20DFB24D, 32);
              delay(100);
            }
          }
          else if (strcmp(cmd, "Message arrived [tv_living] INFO")  == 0) {
            for(int i=0; i<3;i++){
              irsend.sendNEC(0x20DF55AA, 32);
              delay(100);
            }
          }
          else if (strcmp(cmd, "Message arrived [tv_living] SOUND")  == 0) {
            for(int i=0; i<3;i++){
              irsend.sendNEC(0x20DF4AB5, 32);
              delay(100);
            }
          }
          else if (strcmp(cmd, "Message arrived [tv_living] SETTINGS")  == 0) {
            for(int i=0; i<3;i++){
              irsend.sendNEC(0x20DFC23D, 32);
              delay(100);
            }
          }
          else if (strcmp(cmd, "Message arrived [tv_living] QMENU")  == 0) {
            for(int i=0; i<3;i++){
              irsend.sendNEC(0x20DFA25D, 32);
              delay(100);
            }
          }
          else if (strcmp(cmd, "Message arrived [tv_living] OK")  == 0) {
            for(int i=0; i<3;i++){
              irsend.sendNEC(0x20DF22DD, 32);
              delay(100);
            }
          }
          else if (strcmp(cmd, "Message arrived [tv_living] BACK")  == 0) {
            for(int i=0; i<3;i++){
              irsend.sendNEC(0x20DF14EB, 32);
              delay(100);
            }
          }
          else if (strcmp(cmd, "Message arrived [tv_living] EXIT")  == 0) {
            for(int i=0; i<3;i++){
              irsend.sendNEC(0x20DFDA25, 32);
              delay(100);
            }
          }
          else if (strcmp(cmd, "Message arrived [tv_living] UP")  == 0) {
            for(int i=0; i<3;i++){
              irsend.sendNEC(0x20DF02FD, 32);
              delay(100);
            }
          }
          else if (strcmp(cmd, "Message arrived [tv_living] DOWN")  == 0) {
            for(int i=0; i<3;i++){
              irsend.sendNEC(0x20DF827D, 32);
              delay(100);
            }
          }
          else if (strcmp(cmd, "Message arrived [tv_living] LEFT")  == 0) {
            for(int i=0; i<3;i++){
              irsend.sendNEC(0x20DFE01F, 32);
              delay(100);
            }
          }
          else if (strcmp(cmd, "Message arrived [tv_living] RIGTH")  == 0) {
            for(int i=0; i<3;i++){
              irsend.sendNEC(0x20DF609F, 32);
              delay(100);
            }
          }
          else if (strcmp(cmd, "Message arrived [tv_living] SOCCER")  == 0) {
            for(int i=0; i<3;i++){
              irsend.sendNEC(0x20DFDD22, 32);
              delay(100);
            }
          }
          else if (strcmp(cmd, "Message arrived [tv_living] REC")  == 0) {
            for(int i=0; i<3;i++){
              irsend.sendNEC(0x20DFBD42, 32);
              delay(100);
            }
          }
          else if (strcmp(cmd, "Message arrived [tv_living] STOP")  == 0) {
            for(int i=0; i<3;i++){
              irsend.sendNEC(0x20DF8D72, 32);
              delay(100);
            }
          }
          else if (strcmp(cmd, "Message arrived [tv_living] REV")  == 0) {
            for(int i=0; i<3;i++){
              irsend.sendNEC(0x20DFF10E, 32);
              delay(100);
            }
          }
          else if (strcmp(cmd, "Message arrived [tv_living] PLAY")  == 0) {
            for(int i=0; i<3;i++){
              irsend.sendNEC(0x20DF0DF2, 32);
              delay(100);
            }
          }
          else if (strcmp(cmd, "Message arrived [tv_living] PAUSE")  == 0) {
            for(int i=0; i<3;i++){
              irsend.sendNEC(0x20DF5DA2, 32);
              delay(100);
            }
          }
          else if (strcmp(cmd, "Message arrived [tv_living] FWR")  == 0) {
            for(int i=0; i<3;i++){
              irsend.sendNEC(0x20DF718E, 32);
              delay(100);
            }
          }
          else if (strcmp(cmd, "Message arrived [tv_living] DOT")  == 0) {
            for(int i=0; i<3;i++){
              irsend.sendNEC(0x20DF4EB1, 32);
              delay(100);
            }
          }
          else if (strcmp(cmd, "Message arrived [tv_living] 2DOT")  == 0) {
            for(int i=0; i<3;i++){
              irsend.sendNEC(0x20DF8E71, 32);
              delay(100);
            }
          }
          else if (strcmp(cmd, "Message arrived [tv_living] 3DOT")  == 0) {
            for(int i=0; i<3;i++){
              irsend.sendNEC(0x20DFC639, 32);
              delay(100);
            }
          }
          else if (strcmp(cmd, "Message arrived [tv_living] 4DOT")  == 0) {
            for(int i=0; i<3;i++){
              irsend.sendNEC(0x20DF8679, 32);
              delay(100);
            }
          }
          else{
            Serial.println("Command received: unknown!");
          }
          
          cmdIndex = 0;
          for(int i=0; i < 200; i++){
             cmd[i] = '\0';
          }
         }
       }    
}
