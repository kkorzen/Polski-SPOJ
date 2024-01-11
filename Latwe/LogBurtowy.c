#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
 
// string in hh:mm::ss format
int Calculate_Seconds_From_Str(char* str){
    char* hours = strtok(str, ":");
    char* minutes = strtok(NULL, ":");
    char* seconds = strtok(NULL, ":");
 
    return atoi(hours)*3600 + atoi(minutes)*60 + atoi(seconds);
}
 
// string in hh:mm:ss format
int Calculate_Difference(char* str1, char* str2){
    int time1 = Calculate_Seconds_From_Str(str1);
    int time2 = Calculate_Seconds_From_Str(str2);
    int diff = time1 - time2;
 
    if(time1 <= time2) return abs(diff);
    else return 86400 - diff;
}
 
// string in xxx.yyy or xxx format
float Get_Distance_From_Str(char* str){
    char* _int = strtok(str, ".");
    char* _float = NULL;
    if(_int != NULL)
        _float = strtok(NULL, ".");
    
    int i = (float)atoi(_int);
    float f = 0;
 
    if(_float != NULL)
        f = (float)(atoi(_float)/pow(10,strlen(_float)));
 
 
    return i + f;
}
 
float Mps_To_Kph(float _mps){
    return _mps * 3.6;
}
 
float Mps_To_Knots(float _mps){
    return _mps * 1.9438;
}
 
int main(){
    
    char data[30];
 
    while(fgets(data,30,stdin) != NULL){
        char* start_time = strtok(data, " ");
        char* stop_time = strtok(NULL, " ");
        char* distance = strtok(NULL, " ");
 
        int total_time = Calculate_Difference(start_time, stop_time);
        
        float mps = Get_Distance_From_Str(distance) / (float)total_time;
        
        float kph = Mps_To_Kph(mps);
        float knots = Mps_To_Knots(mps);
 
 
        printf("%.1f %.1f\n", kph, knots);
    }
 
    return 0;
} 